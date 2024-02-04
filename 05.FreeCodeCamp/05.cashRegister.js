const currencyUnit = {
  PENNY: 1,
  NICKEL: 5,
  DIME: 10,
  QUARTER: 25,
  ONE: 100,
  FIVE: 500,
  TEN: 1000,
  TWENTY: 2000,
  "ONE HUNDRED": 10_000,
};

function checkCashRegister(price, cash, cid) {
  let status = "OPEN";
  let change = [];

  let changeToReturn = cash * 100 - price * 100;
  const changeToReturnCopy = changeToReturn;

  let totalAmountInCid = 0;
  // removing 0 and reversing because we want to give big values first like hundred and twenty
  const newCid = cid.filter((elem) => elem[1] !== 0).reverse();

  newCid.forEach((item) => {
    const currency = item[0];
    let currencyAmount = item[1] * 100;
    totalAmountInCid += currencyAmount;

    let amount = 0;
    const currencyValue = currencyUnit[currency];

    while (changeToReturn >= currencyValue && currencyAmount > 0) {
      amount += currencyValue;
      changeToReturn -= currencyValue;
      currencyAmount -= currencyValue;
    }
    if (amount) change.push([currency, amount / 100]);
  });

  if (changeToReturn > 0) {
    status = "INSUFFICIENT_FUNDS";
    change = [];
  } else if (changeToReturn === 0 && changeToReturnCopy === totalAmountInCid) {
    status = "CLOSED";
    change = cid;
  } else status = "OPEN";

  return { status, change };
}

// cid = cash in drawer

// console.log(
checkCashRegister(19.5, 20, [
  ["PENNY", 1.01],
  ["NICKEL", 2.05],
  ["DIME", 3.1],
  ["QUARTER", 4.25],
  ["ONE", 90],
  ["FIVE", 55],
  ["TEN", 20],
  ["TWENTY", 60],
  ["ONE HUNDRED", 100],
]); //{ status: 'OPEN', change: [ [ 'QUARTER', 0.5 ] ] }
// );

console.log(
  checkCashRegister(19.5, 20, [
    ["PENNY", 0.5],
    ["NICKEL", 0],
    ["DIME", 0],
    ["QUARTER", 0],
    ["ONE", 0],
    ["FIVE", 0],
    ["TEN", 0],
    ["TWENTY", 0],
    ["ONE HUNDRED", 0],
  ])
);

result = {
  status: "CLOSED",
  change: [
    ["PENNY", 0.5],
    ["NICKEL", 0],
    ["DIME", 0],
    ["QUARTER", 0],
    ["ONE", 0],
    ["FIVE", 0],
    ["TEN", 0],
    ["TWENTY", 0],
    ["ONE HUNDRED", 0],
  ],
};

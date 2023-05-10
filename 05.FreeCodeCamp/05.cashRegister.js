function checkCashRegister(price, cash, cid) {
  let change = [];
  let status = "OPEN";

  const moneyValue = {
    PENNY: 0.01,
    NICKEL: 0.05,
    DIME: 0.1,
    QUARTER: 0.25,
    ONE: 1,
    FIVE: 5,
    TEN: 10,
    TWENTY: 20,
  };

  for (let i = cid.length - 1; i >= 0; i--) {
    console.log(cid[i]);
  }

  return { status, change: [] };
}

console.log(
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
  ])
);

// should return {
//   status: "OPEN",
//   change: [
//     ["TWENTY", 60],
//     ["TEN", 20],
//     ["FIVE", 15],
//     ["ONE", 1],
//     ["QUARTER", 0.5],
//     ["DIME", 0.2],
//     ["PENNY", 0.04],
//   ],
// };

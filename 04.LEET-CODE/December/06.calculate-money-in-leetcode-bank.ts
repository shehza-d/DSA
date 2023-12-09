// 1716

const totalMoney = (days: number): number => {
  const weeks = Math.ceil(days / 7);
  let amount = 0;
  let count = 0;

  for (let i = 0; i < weeks; i++) {
    count++;
    for (let j = count; j <= Math.min(count + 6, days); j++) {
      amount += j;
    }
    if (days > 7) days -= 6;
  }

  return amount;
};

// const n = 4;  // 10  Explanation: After the 4th day, the total is 1 + 2 + 3 + 4 = 10.
const n = 10; // 37  Explanation: After the 10th day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4) = 37. Notice that on the 2nd Monday, Hercy only puts in $2.
// const n = 20; // 96  Explanation: After the 20th day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4 + 5 + 6 + 7 + 8) + (3 + 4 + 5 + 6 + 7 + 8) = 96.

console.log(totalMoney(4));
console.log(totalMoney(n));
console.log(totalMoney(20));

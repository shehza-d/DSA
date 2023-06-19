// https://leetcode.com/contest/biweekly-contest-106/problems/check-if-the-number-is-fascinating/

const isFascinating = (n) =>
  "123456789" === `${n}${n * 2}${n * 3}`.split("").sort().join("");

console.log(isFascinating(100)); // false
console.log(isFascinating(192)); // true
console.log(isFascinating(122)); // false

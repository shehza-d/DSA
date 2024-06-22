// https://leetcode.com/contest/biweekly-contest-133/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
const minimumOperations = (nums: number[]): number => {
  let operations = 0;

  for (let i = 0; i < nums.length; i++) {
    const number = nums[i];
    if (number % 3 === 0) continue; // if the number is already in 3s table we'll skip to next number
    if ((number + 1) % 3 === 0) operations++; // adding 1 to current number and checking if it is devisable by now or not
    if ((number - 1) % 3 === 0) operations++; // subtracting 1 to current number and checking if it is devisable by now or not
  }
  return operations;
};

const nums = [1, 2, 3, 4]; // 3
const nums = [3, 6, 9]; // 0

console.log(minimumOperations(nums));

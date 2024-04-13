// https://leetcode.com/contest/biweekly-contest-125/problems/minimum-operations-to-exceed-threshold-value-i/
// INCOMPLETE
// const minOperations = (nums: number[], k: number): number => {
//   nums.sort((a, b) => a - b);

//   for (let i = 0; i < nums.length; i++) {
//     if (nums[i] >= k) return i
//   }
// };

// const nums = [2, 11, 10, 1, 3],  k = 10; // 3
// const nums = [1, 1, 2, 4, 9], k = 1;[] // 0
// const nums = [1, 1, 2, 4, 9],  k = 9; // 4

const minOperations = (nums: number[], k: number, opr = 0): number => {
  nums.sort((a, b) => b - a);

  const n = nums.length;

  let x = nums[n - 1];
  let y = nums[n - 2];

  nums.pop();
  nums.pop();

  const numToAdd = Math.min(x, y) * 2 + Math.max(x, y);

  nums.push(numToAdd);

  nums.sort((a, b) => a - b);

//   console.log("🚀 ~ minOperations ~ nums:", nums);

  let allEleGreater = true;
  for (let i = 0; i < nums.length; i++) {
    // console.log(`nums[i]=${nums[i]} < k=${k}`, nums[i] < k);
    if (nums[i] < k) {
      allEleGreater = false;
      break;
    }
  }

  if (allEleGreater) return opr;
  // console.log("🚀 ~ minOperations ~ opr:", opr)
  return minOperations(nums, k, opr + 1);
};

// const nums = [2, 11, 10, 1, 3],  k = 10; // 2
// const nums = [1, 1, 2, 4, 9],  k = 20; // 4
const nums = [42, 46],  k = 42; // 0

console.log(minOperations(nums, k));

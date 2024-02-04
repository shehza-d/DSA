const sum = (arr) => {
  let totalSum = 0;
  arr.forEach((num) => (totalSum += num));
  return totalSum;
};

function findMaxAverage(nums: number[], k: number): number {
  const window = nums.slice(0, k);
  let windowSum = sum(window);
  let maxAvg = windowSum / k;

  for (let i = 0; i < nums.length - k; i++) {
    windowSum = windowSum - nums[i] + nums[k + i];

    maxAvg = Math.max(maxAvg, windowSum / k);
  }

  return maxAvg;
}

const nums = [1, 2, 3, 4, 5, 6, 7, 8, 9], k = 3; // 8
const nums = [1, 12, -5, -6, 50, 3], k = 4; // 12.75000
const nums = [5], k = 1; // 5.00000
const nums = [-1], k = 1; // -1.00000
const nums = [4, 0, 4, 3, 3], k = 5; // 2.80000
const nums = [0, 1, 1, 3, 3], k = 4; // 2.00000

console.log(findMaxAverage(nums, k));

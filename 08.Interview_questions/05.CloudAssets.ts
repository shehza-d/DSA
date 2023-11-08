// find lowest and highest number in array

const nums = [1, 4, 3, 9, 12, -10, 40, 54, 3, 2, 5, 5];

let min = nums[0];
let max = nums[0];

for (let i = 0; i < nums.length - 1; i++) {
  if (nums[i] > max) max = nums[i];
  if (nums[i] < min) min = nums[i];
}

console.log("🚀 ~ min:", min);
console.log("🚀 ~ max:", max);

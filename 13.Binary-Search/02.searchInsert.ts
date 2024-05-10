const searchInsert = (nums: number[], target: number): number => {
  const n = nums.length;
  let low = 0;
  let high = n - 1;
  let result = n;

  while (low <= high) {
    const mid = Math.floor((low + high) / 2);

    if (nums[mid] >= target) {
      result = mid;
      high = mid - 1;
    } else low = mid + 1;
  }

  return result;
};

// const nums = [1, 3, 5, 6], target = 5; // 2
// const nums = [1, 3, 5, 6], target = 6; // 3
// const nums = [1, 3, 5, 6], target = 1; // 0
// const nums = [1,3,5,6], target = 2 // 1
const nums = [1, 3, 5, 6],
  target = 7; // 4

console.log(searchInsert(nums, target));

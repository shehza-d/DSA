const isGood = (nums: number[]): boolean => {
  const numsLength = nums.length - 1;
  let highestOfNums = nums[0];

  const uniqueArr: number[] = [];

  nums.forEach((element) => {
    if (uniqueArr.indexOf(element) == -1 || element == numsLength)
      uniqueArr.push(element);
  });

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] !== uniqueArr[i]) {
      return false;
    }
  }

  for (let i = 0; i < nums.length; i++) {
    if (highestOfNums < nums[i]) {
      highestOfNums = nums[i];
    }
  }

  if (numsLength < highestOfNums) return false;

  return true;
};

const nums = [2, 1, 3]; // false
const nums = [1, 3, 3, 2]; // true
const nums = [1, 1]; // true
const nums = [3, 4, 4, 1, 2, 1]; // false
const nums = [1, 1, 1]; // false

console.log(isGood(nums));

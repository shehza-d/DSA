// https://youtu.be/Yan0cv2cLy8?si=sctAyeliv5p-YRrp

const canJump = (nums: number[]): boolean => {
  let goal = nums.length - 1;

  for (let i = nums.length - 2; i >= 0; i--) {
    if (i + nums[i] >= goal) goal = i;
  }

  return goal === 0;
};

const nums = [2, 3, 1, 1, 4]; // true
// const nums = [3, 2, 1, 0, 4]; // false

console.log(canJump(nums));

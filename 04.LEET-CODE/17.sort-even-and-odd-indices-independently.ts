const sortEvenOdd = (nums: number[]): number[] => {
  const oddNumbers = nums.filter((num,x) => x % 2 !== 0).sort((a, b) => b - a);
  const evenNumbers = nums.filter((num,x) => x % 2 === 0).sort((a, b) => a - b);

  let x = 0,
    y = 0;

  for (let i = 0; i < nums.length; i++) {
    nums[i] = i % 2 === 0 ? evenNumbers[x++] : oddNumbers[y++];
  }

  return nums;
};

const nums = [4, 1, 2, 3]; // [2,3,4,1]
// const nums = [2, 1]; // [2,1]
// const nums = [36, 45, 32, 31, 15, 41, 9, 46, 36, 6, 15, 16, 33, 26, 27, 31, 44, 34];
//              [9,46,15,45,15,41,27,34,32,31,33,31,36,26,36,16,44,6]

console.log(sortEvenOdd(nums));

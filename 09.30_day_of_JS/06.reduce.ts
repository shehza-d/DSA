const reduce = (nums: number[], fn: Fn, init: number): number => {
  let val = init;
  for (let i = 0; i < nums.length; i++) {
    val = fn(val, nums[i]);
  }
  return val;
};

// arguments
const nums = [1, 2, 3, 4];
const fn = (accum, curr) => accum + curr;
const init = 0;

const fn2 = (accum, curr) => accum + curr * curr;
const init2 = 100;

const nums3 = [];
const fn3 = (accum, curr) => 0;
const init3 = 25;

// testing
console.log(reduce(nums3, fn3, init3));

type Fn = (accum: number, curr: number) => number;

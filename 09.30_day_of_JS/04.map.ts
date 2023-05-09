// https://leetcode.com/problems/apply-transform-over-each-element-in-array

const map = (arr, fn: Tfn): number[] => {
  let result: number[] = [];
  for (let i = 0; i < arr.length; i++) {
    result.push(fn(arr[i], i));
  }
  return result;
};

// arguments
const arr = [1, 2, 3];

const fn = (n) => n + 1;
const fn2 = (n, i) => n + i;
const fn3 = () => 42;

console.log(map(arr, fn));

type Tfn = (n: number, i: number) => number;

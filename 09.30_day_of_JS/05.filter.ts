// https://leetcode.com/problems/filter-elements-from-array/

const filter = (arr, fn: Tfn): number[] => {
  let result: number[] = [];
  for (let i = 0; i < arr.length; i++) {
    if (fn(arr[i], i)) {
      result.push(arr[i]);
    }
  }
  return result;
};

// arguments
const arr = [0, 10, 20, 30];
const fn = (n) => n > 10;

const arr2 = [1, 2, 3];
const fn2 = (n, i) => i === 0;

const arr3 = [-2, -1, 0, 1, 2];
const fn3 = (n) => n + 1;

console.log(filter(arr3, fn3));

type Tfn = (n: number, i: number) => number;

// const filter = (arr, fn) => arr.filter(fn);

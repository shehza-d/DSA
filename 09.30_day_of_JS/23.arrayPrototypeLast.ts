// https://leetcode.com/problems/array-prototype-last/

declare global {
  interface Array<T> {
    last(): T | -1;
  }
}

Array.prototype.last = function () {
  return this.length ? this.at(-1) : -1;
};

const arr = [1, 2, 3]; // 3
// const arr = []; // -1
console.log(arr.last());

export {};

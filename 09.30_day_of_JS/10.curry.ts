// https://leetcode.com/problems/curry/

const curry = (fn) => {
  return function curried(...args) {
    if (args.length < fn.length) {
      return (...args2) => {
        return curried(...args, ...args2);
      };
    }
    return fn(...args);
  };
};

// testing
const fn = (a, b, c) => a + b + c;

const curriedSum = curry(fn);

console.log(curriedSum(1, 2, 3)); // 6
console.log(curriedSum(1)(2)(3)); // 6
console.log(curriedSum(1, 2)(3)); // 6
console.log(curriedSum(1)(2, 3)); // 6

// type Fn = (...params: number[]) => number;

// https://leetcode.com/problems/memoize/

// const memoize=(fn: Fn): Fn =>{
const memoize = (fn) => {
  const cache = {};

  return function (...args) {
    console.log("cache ", cache);
    const key = String(args);

    if (key in cache) {
      return cache[key];
    }

    const result = fn(...args);
    cache[key] = result;

    return result;
  };
};

const factorial = (n) => (n <= 1 ? 1 : n * factorial(n - 1));
const memoizedSum = memoize(factorial);

console.log(memoizedSum(3));
console.log(memoizedSum(2));
console.log(memoizedSum(2));
console.log(memoizedSum(3));

/**
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1
 */
// type Fn = (...params: any) => any

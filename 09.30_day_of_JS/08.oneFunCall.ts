// https://leetcode.com/problems/allow-one-function-call/

const once = <T extends (...args: any[]) => any>(
  fn: T
): ((...args: Parameters<T>) => ReturnType<T> | undefined) => {
  let counter = 0;
  return function (...args) {
    counter++;
    if (counter > 1) {
      return;
    }
    return fn(...args);
  };
};

const fn = (a, b, c) => a * b * c;
const onceFn = once(fn);

console.log(onceFn(5, 7, 4)); // 140
console.log(onceFn(2, 3, 6)); // undefined
console.log(onceFn(2, 3, 6)); // undefined
console.log(onceFn(2, 3, 6)); // undefined

// https://leetcode.com/problems/throttle/

//undone
// function throttle(fn: F, t: number): F {
//   return function (...args) {};
// }

const throttle = (fn, t) => {
  let timerId;
  let lastArgs;
  let shouldCall = true;

  const execute = () => {
    if (shouldCall && lastArgs) {
      fn(...lastArgs);
      lastArgs = null;
      shouldCall = false;
      setTimeout(() => {
        shouldCall = true;
        execute();
      }, t);
    }
  };

  return (...args) => {
    lastArgs = args;
    execute();
  };
};
/**
 * const throttled = throttle(console.log, 100);
 * throttled("log"); // logged immediately.
 * throttled("log"); // logged at t=100ms.
 */
// type F = (...args: any[]) => void

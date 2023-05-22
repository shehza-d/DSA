// https://leetcode.com/problems/debounce/

const debounce = (fn: F, t: number): F => {
  let timer;
  return function (...args) {
    clearTimeout(timer);
    timer = setTimeout(() => fn(...args), t);
  };
};

const log = debounce(console.log, 100);

log("Hello"); // cancelled
log("Hello"); // cancelled
log("Hello"); // Logged at t=100ms

type F = (...p: any[]) => any;

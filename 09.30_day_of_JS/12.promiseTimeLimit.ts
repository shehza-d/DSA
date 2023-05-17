// https://leetcode.com/problems/promise-time-limit/
// not

const timeLimit = (fn: Fn, t: number): Fn => {
  return (...args) => {
    return new Promise((res, rej) => {
      setTimeout(() => rej("Time Limit Exceeded"), t);
      fn(...args).then(res, rej);
    });
  };
};

const fn = async (n) => {
  await new Promise((res) => setTimeout(res, 100));
  return n * n;
};
const inputs = [5];
const t = 50; //25
const t = 150; //Time Limit Exceeded

const limited = timeLimit(fn, t);

console.log(
  limited(inputs)
    .then((i) => console.log(i))
    .catch((j) => console.log(j))
);

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */

type Fn = (...params: any[]) => Promise<any>;

// https://leetcode.com/problems/promise-time-limit/solutions/3529233/promise-real-life-example-dry-run-usecase-o-1-js-ts-beginner-friendly-day12/

// https://leetcode.com/problems/promise-pool
undone;
// const promisePool = (functions, n) => {};

/**
 * const sleep = (t) => new Promise(res => setTimeout(res, t));
 * promisePool([() => sleep(500), () => sleep(400)], 1)
 *   .then(console.log) // After 900ms
 */
// function promisePool(functions: F[], n: number): Promise<any> {}
// type F = () => Promise<any>;
// 1
const promisePool = async (functions, n) => {
  let next = () => functions[n++]?.().then(next);
  return Promise.all(functions.slice(0, n).map((f) => f().then(next)));
};
// 2
const promisePool = async (functions, n) => {
  return new Promise((res) => {
    if (!functions.length) return res();

    let pool = 0;
    let done = 0;
    let index = 0;

    const onDone = () => {
      done++;
      pool--;

      if (done === functions.length) return res();
      else run();
    };

    const run = () => {
      while (pool < n && index < functions.length) {
        pool++;
        const func = functions[index++];
        func().then(onDone);
      }
    };

    run();
  });
};

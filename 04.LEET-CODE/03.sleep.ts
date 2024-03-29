// https://leetcode.com/problems/sleep/

const sleep = async (millis: number): Promise<void> =>
  new Promise((resolve) => setTimeout(resolve, millis));

const t = Date.now();
console.log(sleep(1200).then(() => console.log(Date.now() - t)));

// This is for pausing code
(async () => await new Promise((resolve) => setTimeout(resolve, 2500)))();

//
const sleep = async (millis: number) =>
  new Promise((resolve) => setTimeout(resolve, millis));
await sleep(2500);

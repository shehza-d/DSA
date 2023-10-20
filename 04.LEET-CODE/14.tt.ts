type P = Promise<number>;

const addTwoPromises = async (promise1: any, promise2: any): P => {
  const answers = await Promise.all([promise1, promise2]);
  console.log("answers", answers);

  const sum = answers[0] + answers[1];
  return new Promise((resolve) => resolve(sum));
};

const promise1 = new Promise((resolve) => setTimeout(() => resolve(10), 50));
const promise2 = new Promise((resolve) => setTimeout(() => resolve(-12), 30));

console.log(addTwoPromises(promise1, promise2));

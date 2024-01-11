const passThePillow = (n: number, time: number): number => {
  if (n > time) return time + 1;

  const cyclesCompleted = Math.floor(time / (n - 1));
  const jumpsLeft = time % (n - 1);

  // if no of cyclesCompleted are even we will go from start vice versa
  if (cyclesCompleted % 2 === 0) return 1 + jumpsLeft;
  else return n - jumpsLeft;
};

const n = 4,  time = 5;   // 2
const n = 4,  time = 10;  // 3
const n = 3,  time = 2;   // 3
const n = 10, time = 12;  // 7
const n = 10, time = 9;   // 10
const n = 18, time = 38;  // 5

console.log(passThePillow(n, time));

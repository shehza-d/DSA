const passThePillow = (n: number, time: number): number => {
  //   if (time < n) return time - n + 1;

  //   while (time) {
  //     if (personHoldingPillow > n) personHoldingPillow--;
  //     else personHoldingPillow++;
  //     time--;
  //   }
  let personHoldingPillow = 1;

  let cycles = Math.ceil(time / n);

  for (let i = 0; i < cycles; i++) {
    // if(!time)break
    if (cycles % 2 === 0) personHoldingPillow -= 4;
    else personHoldingPillow += 4;
    // time-n
  }

  return personHoldingPillow;
};

// const n = 4, time = 5; // 2
// const n = 4, time = 2; // 3
const n = 4,
  time = 10; // 3

console.log(passThePillow(n, time));

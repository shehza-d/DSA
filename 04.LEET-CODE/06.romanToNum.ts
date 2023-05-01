const romanToInt = (roman: string): number => {
  roman = roman.toUpperCase();
  const romanTable = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };
  let result = 0;
  for (let i = 0; i < roman.length; i++) {
    const curr = romanTable[roman[i]];
    const next = romanTable[roman[i + 1]];

    if (curr < next) result -= curr;
    else result += curr;
    // console.log(`curr=${curr}, next=${next} result=${result}`);
  }
  return result;
};

console.log(romanToInt("DCCXCVIII")); // 798

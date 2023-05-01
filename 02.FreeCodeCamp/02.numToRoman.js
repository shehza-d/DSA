const convertToRoman = (roman) => {
  const romanTable = {
    1: "I",
    4: "IV",
    5: "V",
    10: "X",
    50: "L",
    100: "C",
    500: "D",
    1000: "M",
  };

  let result = 0;
  for (let i = 0; i < roman.length; i++) {
    const curr = romanTable[roman[i]];
    const next = romanTable[roman[i + 1]];

    console.log(curr, next);

    if (curr < next) {
      result -= curr;
    } else {
      result += curr;
    }
  }
  return result;
};

console.log(convertToRoman(9));

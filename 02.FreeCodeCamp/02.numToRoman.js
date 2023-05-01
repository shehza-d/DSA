const convertToRoman = (num) => {
  const romanTable = {
    M: 1000,
    CM: 900,
    D: 500,
    CD: 400,
    C: 100,
    XC: 90,
    L: 50,
    XL: 40,
    X: 10,
    IX: 9,
    V: 5,
    IV: 4,
    I: 1,
  };

  let result = "";

  for (let key in romanTable) {
    const value = romanTable[key];

    while (num >= value) {
      result += key;
      num -= value;
    }
  }
  return result;
};

console.log(convertToRoman(798)); // DCCXCVIII

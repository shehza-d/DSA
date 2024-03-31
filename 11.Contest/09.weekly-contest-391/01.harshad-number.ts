const sumOfTheDigitsOfHarshadNumber = (x: number): number => {
  const sum:any = String(x)
    .split("")
    .reduce((prev, curr):any => +prev + +curr);

  console.log("🚀 ~ sumOfTheDigitsOfHarshadNumber ~ sum:", sum);

  return x % sum === 0 ? sum : -1;
};

const x = 18; // 9
// const x = 23// -1

console.log(sumOfTheDigitsOfHarshadNumber(x));

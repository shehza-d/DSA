// https://leetcode.com/problems/add-digits/

const addDigits = (num) => {
  let result = 0;
  const arr = num.toString().split("");
  arr.map((i) => (result += Number(i)));
  if (result.toString().length > 1) {
    return addDigits(result);
  }
  return result;
};

console.log(addDigits(24)); // 6
console.log(addDigits(2)); // 2
console.log(addDigits(242)); // 8
console.log(addDigits(209320)); // 7

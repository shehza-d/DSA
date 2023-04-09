//$$$$$$$$$$$$$$$$$$$$$$$$$$ First Problem $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
//Given an array of integers, find the sum of its elements. Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.
const arr = [2, 4, 2, 9, 6, 5, 9];

// OLD CODE ES5
function arraySum(ar) {
  let result = 0;
  for (let i = 0; i < ar.length; i++) {
    result = result + ar[i];
  }
  return result;
}

// NEW CODE ES6+
const arraySum = (arr) => arr.reduce((prev, curr) => prev + curr);

// log
console.log(arraySum(arr));

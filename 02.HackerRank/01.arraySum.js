//$$$$$$$$$$$$$$$$$$$$$$$$$$ First Problem $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
//Given an array of integers, find the sum of its elements. Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

function simpleArraySum(ar) {
  let result;
  for (let i = 0; i < ar.length; i++) {
    result = result + ar[i];
  }
  return result;
}

// NEW CODE
const arr = [2, 4, 2, 9, 6, 5, 9];
let total = 0;
arr.map((i) => (total += i));
// console.log(total);

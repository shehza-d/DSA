// https://leetcode.com/problems/chunk-array

const chunk = (arr: number[], size) => {
  let result: number[][] = [];
  let temp: number[] = [];

  for (let i = 0; i < arr.length; i++) {
    temp.push(arr[i]);

    if (temp.length === size) {
      result.push(temp);
      temp = [];
    }
  }
  if (temp.length) result.push(temp);
  return result;
};

const arr = [1, 2, 3, 4, 5], size = 1; // [[1],[2],[3],[4],[5]]
const arr = [1, 9, 6, 3, 2], size = 3; // [[1,9,6],[3,2]]
const arr = [8,5,3,2,6], 	size = 6 // [[8,5,3,2,6]]
const arr = [],			    size = 1 // []
console.log(chunk(arr, size));

//others solution
const chunk = (arr, size) => {
  const chunkedArray = [];
  while (arr.length) {
    chunkedArray.push(arr.splice(0, size));
  }
  return chunkedArray;
};

// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

// const  kWeakestRows=(mat: number[][], k: number): number[] =>{
const kWeakestRows = (mat, k) => {
  let result = [];
  for (let i = 0; i < mat.length; i++) {
    let temp = 0;
    for (let j = 0; j < mat[i].length; j++) {
      if (mat[i][j] === 1) temp += 1;
    }
    result.push(temp);
  }

  //   [2, 4, 1, 2, 5];

  let min = result[0];
  let minIndex = [];

  for (let l = 1; l < result.length; l++) {
    if (result[l] < min) {
      minIndex.push(l);
      min = result[l];
      console.log(" mat[i]", result[l]);
    }
  }
  return minIndex;
};

const mat = [
    [1, 1, 0, 0, 0],
    [1, 1, 1, 1, 0],
    [1, 0, 0, 0, 0],
    [1, 1, 0, 0, 0],
    [1, 1, 1, 1, 1],
  ],
  k = 3;

console.log(kWeakestRows(mat, k)); // [2,0,3]

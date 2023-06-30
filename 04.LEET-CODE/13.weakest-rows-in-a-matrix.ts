// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

const  kWeakestRows=(mat: number[][], k: number): number[] =>{
  const numberOfSoldiers: { countSoldiers: number; index: number }[] = [];

  for (let i = 0; i < mat.length; i++) {
    let temp = 0;
    for (let j = 0; j < mat[i].length; j++) {
      if (mat[i][j] === 1) temp++;
    }
    numberOfSoldiers.push({ countSoldiers: temp, index: i });
  }

  numberOfSoldiers.sort((a, b) => a.countSoldiers - b.countSoldiers);

  const result: number[] = [];

  for (let i = 0; i < k; i++) {
    result.push(numberOfSoldiers[i].index);
  }
  return result;
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

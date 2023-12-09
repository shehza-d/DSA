// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

// const countNegatives = (grid: number[][]): number => {
//   let negativeNumbers = 0;
//   for (let i = 0; i < grid.length; i++) {
//     const row = grid[i];
//     for (let j = 0; j < row.length; j++) {
//       if (row[j] < 0) negativeNumbers++;
//     }
//   }
//   return negativeNumbers;
// };

const countNegatives = (grid: number[][]): number => {
  let negativeNumbers = 0;
  let temp = 0;

  for (let i = 0; i < grid.length; i++) {
    const row = grid[i];
    let start = 0,
      end = row.length-1;

    const mid = Math.floor((start + end) / 2);

    if (mid < 0) {
		 
	}
    // for (let j = 0; j < row.length; j++) {
    //   console.log(`loop running ${++temp} times`);16

    //   if (row[j] < 0) negativeNumbers++;
    // }
  }
  return negativeNumbers;
};

const grid = [
  [4, 3, 2, -1],
  [3, 2, 1, -1],
  [1, 1,-1, -2],
 [-1,-1,-2, -3],
]; // 8
// const grid = [
//   [3, 2],
//   [1, 0],
// ]; // 0

console.log(countNegatives(grid));

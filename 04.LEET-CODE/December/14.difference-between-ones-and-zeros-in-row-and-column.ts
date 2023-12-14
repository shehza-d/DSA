// Solved by myself 💪🏻
const onesMinusZeros = (grid: number[][]): number[][] => {
  const onesRow: number[] = [];
  const onesCol: number[] = [];
  const zerosRow: number[] = [];
  const zerosCol: number[] = [];
  const diff: number[][] = []; // result

  // Iterate over rows
  for (let i = 0; i < grid.length; i++) {
    const row = grid[i];
    let onesInRow = 0, zerosInRow = 0;

    for (let j = 0; j < row.length; j++) {
      row[j] ? onesInRow++ : zerosInRow++;
    }
    onesRow[i] = onesInRow;
    zerosRow[i] = zerosInRow;
  }

  // Iterate over columns
  for (let i = 0; i < grid[0].length; i++) {
    let onesInCol = 0, zerosInCol = 0;

    for (let j = 0; j < grid.length; j++) {
      grid[j][i] ? onesInCol++ : zerosInCol++;
    }
    onesCol[i] = onesInCol;
    zerosCol[i] = zerosInCol;
  }

  for (let i = 0; i < grid.length; i++) {
    const row = grid[i];
    for (let j = 0; j < row.length; j++) {
      if (!diff[i]) diff.push([]);
      diff[i].push(onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j]);
    }
  }

  return diff;
};

const grid = [ [0, 1, 1], [1, 0, 1], [0, 0, 1] ]; // [[0,0,4],[0,0,4],[-2,-2,2]]
const grid = [ [1, 1, 1], [1, 1, 1] ]; // [[5,5,5],[5,5,5]]

console.log(onesMinusZeros(grid));

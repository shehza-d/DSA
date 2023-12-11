const transpose = (matrix: number[][]): number[][] => {
  let result: number[][] = [];

  for (let i = 0; i < matrix.length; i++) {
    const row = matrix[i];

    for (let j = 0; j < row.length; j++) {
      if (!Array.isArray(result[j])) result.push([]);

      result[j].push(row[j]);
    }
  }

  return result;
};

// const matrix = [ [1, 2, 3], [4, 5, 6] ]; // [[1,4],[2,5],[3,6]]
const matrix = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];

console.log(transpose(matrix));

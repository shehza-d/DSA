const question2 = (arr) => {
  let result = [];

  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      result.push(arr[j][i]);
    }
  }
  return result;
};

// Testing
console.log(
  question2([
    [12, -3, 2, 14],
    [11, -2, -8, 4],
    [3, 0, 0, -5],
  ])
);

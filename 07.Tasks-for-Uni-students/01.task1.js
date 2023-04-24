const question2 = (arr) => {
  let result = [];

  for (let i = 0; i < arr[0].length; i++) {
    for (let j = 0; j < arr.length; j++) {
      result.push(arr[j][i]);
    }
  }
  return result;
};

const question3 = (arr) => {
  let result = [];

  for (let i = 0; i < arr[0].length; i++) {
    result[i] = [];
    for (let j = 0; j < arr.length; j++) {
      result[i].push(arr[j][i]);
    }
  }
  return result;
};

const question4 = (arr) => {
  let result = [];

  const isPrime = (num) => {
    num = parseInt(num);
    if (num < 1) return false;
    if (num === 1) return null;

    for (let i = 2; i <= num / 2; i++) {
      if (num % i == 0) return false;
    }
    return true;
  };

  for (let i = 0; i < arr.length; i++) {
    result[i] = [];
    for (let j = 0; j < arr[i].length; j++) {
      result[i].push(isPrime(arr[i][j]));
    }
  }
  return result;
};

// Testing
console.log(
  question4([
    [12, -3, 2, 14],
    [11, -2, -8, 4],
    [3, 0, 0, -5],
  ])
);

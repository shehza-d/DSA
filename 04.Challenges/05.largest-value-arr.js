const arr = [-2, -5, -4, -12, -3, -7, -9, -6];

const myFun = (arr) => {
  let max = arr[0];
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > max) max = arr[i];
  }
  return max;
};

console.log(myFun(arr)); //-2
cds;

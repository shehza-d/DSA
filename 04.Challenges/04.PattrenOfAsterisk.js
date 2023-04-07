// 7. Write a JavaScript program to construct the following pattern, using a nested for loop.
// *
// **
// ***
// ****
// *****

const myFun = (n) => {
  let result = "";
  for (let i = 1; i <= n; i++) {
    for (let j = 0; j < i; j++) {
      result += "*";
    }
    result += "\n";
  }
  return result;
};

console.log(myFun(7));

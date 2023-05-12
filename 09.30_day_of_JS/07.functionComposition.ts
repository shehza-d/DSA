// https://leetcode.com/problems/function-composition/

function compose(functions) {
  if (functions.length === 0) return (x) => x;

  return (x) => {
    let result = x;
    // for (let i = functions.length - 1; i >= 0; i--) {
    for (let i = 0; i < functions.length; i++) {
      console.log(i);

      result = functions[i](result);
    }
    return result;
  };
}

// arguments
const functions = [(x) => x + 1, (x) => x * x, (x) => 2 * x];

// testing
const fn2 = compose(functions);
console.log(fn2(4)); //65

// type F = (x: number) => number;

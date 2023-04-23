// FizzBuzz problem solved
// console.log(fizzBuzz(15));
// fizzBuzz(15);

// Logging value
function fizzBuzz(n: number) {
  // Write your code here
  for (let i = 1; i <= n; i++) {
    if (i % 3 === 0 && i % 5 === 0) console.log("FizzBuzz");
    else if (i % 3 === 0) console.log("Fizz");
    else if (i % 5 === 0) console.log("Buzz");
    else console.log(i);
  }
}

//returning value
function fizzBuzz(n: number) {
  let result = "";

  for (let i = 1; i <= n; i++) {
    if (i % 3 === 0 && i % 5 === 0) {
      result += "FizzBuzz\n";
      continue;
    } else if (i % 3 === 0) {
      result += "Fizz\n";
      continue;
    } else if (i % 5 === 0) {
      result += "Buzz\n";
      continue;
    } else {
      result += `${i}\n`;
    }
  }
  return result;
}

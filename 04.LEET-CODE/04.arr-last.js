// https://leetcode.com/problems/array-prototype-last/
// not done
// constructor function
class Person {
  constructor(arr) {
    if (!arr.length) {
      return -1;
    }
  }
  // adding a method to the constructor function
  last() {
    return arr.pop();
  }
}

Array.prototype.last = function (arr) {
  console.log(arr);
  return 4;
};

// creating objects
const arr = [1, 2, 3];
const person = new Person(arr);
console.log(person);
arr.last(); // 3

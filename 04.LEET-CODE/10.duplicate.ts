// https://leetcode.com/problems/contains-duplicate/

const containsDuplicate = (nums: number[]): boolean =>
  new Set(nums).size !== nums.length;

console.log(containsDuplicate([1, 1, 1, 3, 3, 4, 3, 2, 4, 2])); //true
console.log(containsDuplicate([1, 2, 3, 4])); //false
console.log(containsDuplicate([5, 6, 7, 8])); //false
console.log(containsDuplicate([1, 2, 3, 1])); //true

// checking if array has duplicate values
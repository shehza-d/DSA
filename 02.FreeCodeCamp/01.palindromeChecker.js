// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/javascript-algorithms-and-data-structures-projects/palindrome-checker
// https://leetcode.com/problems/valid-palindrome/

const palindrome = (str) => {
  const regex = /[-(_).,\s]/g;
  str = str.replace(regex, "").toLowerCase();

  for (let i = 0; i < str.length; i++) {
    if (str[i] != str[str.length - (i + 1)]) return false;
  }
  return true;
};

// Testing
console.log(palindrome("121")); // true
console.log(palindrome("eye")); // true
console.log(palindrome("can")); // false
console.log(palindrome("My age is 0, 0 si ega ym.")); // true
console.log(palindrome("race car")); // true
console.log(palindrome("0_0 (: /- :) 0-0")); // true

//
// others solution
const palindrome2 = (str) => {
  let newStr = str.toLowerCase().replace(/[^a-z\d]/g, "");
  return newStr.split("").reverse().join("") === newStr;
};

// mane ak ak index ko check kiya hy (1 index ko last se)
//jabky inho ne string ko ulta karky real string se match karwa diya hy

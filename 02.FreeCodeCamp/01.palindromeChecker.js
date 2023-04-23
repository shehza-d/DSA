// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/javascript-algorithms-and-data-structures-projects/palindrome-checker

const palindrome = (str) => {
  const regex = /[-(_).,\s]/g;
  str = str.replace(regex, "").toLowerCase();

  for (let i = 0; i < str.length; i++) {
    if (str[i] != str[str.length - (i + 1)]) return false;
  }
  return true;
};

// Testing
console.log(palindrome("eye")); // true
console.log(palindrome("can")); // false
console.log(palindrome("My age is 0, 0 si ega ym.")); // true
console.log(palindrome("race car")); // true
console.log(palindrome("0_0 (: /- :) 0-0")); // true

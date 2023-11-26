// https://leetcode.com/problems/reverse-only-letters
// Reverse a string without changing the position of special char in string
// ab,c => cb,a

// https://youtu.be/0gOUxVKFv74

// Brute force
const reverseOnlyLetters = (str: string): string => {
  //
  const insertAtIndex = (str: string, substring: string, index: number) =>
    str.slice(0, index) + substring + str.slice(index);

  const alphabetRegex = /^[A-Za-z]+$/;
  const notAlphabetRegex = /[^a-zA-Z]/g;

  let reverseStringWithoutSpecialChar = str
    .replace(notAlphabetRegex, "")
    .split("")
    .reverse()
    .join("");

  // Injecting Special Characters
  for (let i = 0; i < str.length; i++) {
    const isAlphabet = str[i].match(alphabetRegex);
    if (!isAlphabet) {
      reverseStringWithoutSpecialChar = insertAtIndex(
        reverseStringWithoutSpecialChar,
        str[i],
        i
      );
    }
  }

  return reverseStringWithoutSpecialChar;
};

// Optimized Two Pointer Approach
const reverseOnlyLetters = (str: string) => {
  const alphabetRegex = /^[A-Za-z]+$/;
  let arrayOfStr = str.split("");

  let start = 0;
  let end = str.length - 1;

  while (start < end) {
    if (!str[start].match(alphabetRegex)) start++;
    else if (!str[end].match(alphabetRegex)) end--;
    else {
      let temp = arrayOfStr[start];
      arrayOfStr[start] = arrayOfStr[end];
      arrayOfStr[end] = temp;

      start++;
      end--;
    }
  }

  return arrayOfStr.join("");
};

const str = "abc-d"; // "dcb-a"
const str = "-aaa!bC-dEf-g-h!Ij"; // "-jIh!gf-EdC-b-a!aa"
const str = "7_28]"; // "7_28]"
const str = "z<*zj"; // "j<*zz"

console.log(reverseOnlyLetters(str));

// https://leetcode.com/problems/reverse-only-letters
// Reverse a string without changing the position of special char in string
// ab,c => cb,a

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

// const str = "ab-cd"; // "dc-ba"
const str = "aaa!bC-dEf-g-h!Ij"; // "j-Ih-gfE-dCba"

console.log(reverseOnlyLetters(str));

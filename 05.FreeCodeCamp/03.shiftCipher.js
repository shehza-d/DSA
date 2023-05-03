// https://leetcode.com/problems/decode-the-slanted-ciphertext/
const rot13 = (str) => {
  let result = "";
  let alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for (let i = 0; i < str.length; i++) {
    let index = alphabets.indexOf(str[i]);
    if (index === -1) {
      result += str[i];
      continue;
    }

    index += 13;
    if (index >= 26) index -= 26;

    result += alphabets[index];
  }
  return result;
};
console.log(rot13("SERR PBQR PNZC!#"));

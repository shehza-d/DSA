// https://leetcode.com/problems/decode-the-slanted-ciphertext/
//not done

const decodeCiphertext = (str, rows) => {
  let result = "";
  let alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for (let i = 0; i < str.length; i++) {
    let index = alphabets.indexOf(str[i]);
    // if (index === -1) {
    //   result += str[i];
    //   continue;
    // }

    index += rows;
    if (index >= 26) index -= 26;

    result += alphabets[index];
  }

  return result;
};
console.log(decodeCiphertext("iveo    eed   l te   olc", 4));

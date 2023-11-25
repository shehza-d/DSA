const findWordsContaining = (words: string[], x: string): number[] => {
  let result: number[] = [];

  for (let i = 0; i < words.length; i++) {
    const word = words[i];

    for (let j = 0; j < word.length; j++) {
      if (word[j] === x) {
        result.push(i);
        break;
      }
    }
  }
  return result;
};

const words = ["leet", "code"], x = "e"; // [0,1]
const words = ["abc","bcd","aaaa","cbc"], x = "a" // [0,2]
const words = ["abc", "bcd", "aaaa", "cbc"], x = "z"; // []

console.log(findWordsContaining(words, x));

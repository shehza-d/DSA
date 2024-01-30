const closeStrings = (word1: string, word2: string): boolean => {
    if (word1.length !== word2.length) return false;

  const hastTable1 = new Array(26).fill(0);
  const hastTable2 = new Array(26).fill(0);

  const getChrIndex = (ch) => ch.charCodeAt(0) - "a".charCodeAt(0);

  for (const chr of word1) {
    hastTable1[getChrIndex(chr)]++;
  }
  for (const chr of word2) {
    hastTable2[getChrIndex(chr)]++;
  }

  for (let i = 0; i < 26; i++) {
    if (
      (hastTable1[i] === 0 && hastTable2[i] !== 0) ||
      (hastTable1[i] !== 0 && hastTable2[i] === 0)
    )
      return false;
  }

  hastTable1.sort((a, b) => a - b);
  hastTable2.sort((a, b) => a - b);

  for (let i = 0; i < 26; i++) {
    if (hastTable1[i] !== hastTable2[i]) return false;
  }

  return true;
};

// const word1 = "abc", word2 = "bca"; // true
// const word1 = "a", word2 = "aa"// false
const word1 = "cabbbaez",
  word2 = "abbccc"; // true

console.log(closeStrings(word1, word2));

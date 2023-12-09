const countCharacters = (words: string[], chars: string): number => {
  let result = 0;
  const wordBank = new Array(26).fill(0);

  const getChrIndex = (ch) => ch.charCodeAt(0) - "a".charCodeAt(0);

  const canCompleteWord = (word) => {
    const wordChrCount = new Array(26).fill(0);

    // Step 2: Update Counts Array
    for (const ch of word) {
      const chrIndex = getChrIndex(ch);
      wordChrCount[chrIndex]++;

      if (wordChrCount[chrIndex] > wordBank[chrIndex]) return false;
    }

    return true;
  };

  // Step 1: Initialize Character Counts in wordBank Array
  for (const ch of chars) {
    wordBank[getChrIndex(ch)]++;
  }

  // Step 3: Check Words
  for (const word of words) {
    // Step 4: Calculate Lengths
    if (canCompleteWord(word)) result += word.length;
  }

  return result;
};

const words = ["cat", "bt", "hat", "tree"],
  chars = "atach"; // 6
// const words = ["cat","bt","hat","tree"], chars = "atach"// 6

console.log(countCharacters(words, chars));

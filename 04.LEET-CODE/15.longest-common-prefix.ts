// # Longest Common Prefix

// Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

const longestCommonPrefix = (strs: string[]): string => {
  strs.sort();

  const firstWord = strs[0];

  const lastWord = strs[strs.length - 1];

  let prefix = "";

  for (let i = 0; i < firstWord.length; i++) {
    if (firstWord[i] === lastWord[i]) {
      prefix += firstWord[i];
    } else {
      break;
    }
  }

  return prefix;
};

const strs = ["flower", "flow", "flight", "flowed"]; // fl
// const strs = ["dog", "racecar", "car"]; // ""

console.log(longestCommonPrefix(strs));

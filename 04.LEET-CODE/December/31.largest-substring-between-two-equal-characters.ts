// 1624 https://leetcode.com/problems/largest-substring-between-two-equal-characters

function maxLengthBetweenEqualCharacters(s: string): number {
  let result = -1;
  const hashTable = {};

  for (let i = 0; i < s.length; i++) {
    const char = s[i];

    if (!(char in hashTable)) hashTable[char] = i;
    else result = Math.max(result, i - hashTable[char] - 1);
  }

  console.log(hashTable);
  return result;
}

const s = "aa"; // 0
const s = "abca"; // 2
const s = "cbzxy"; // -1
const s = "mgntdygtxrvxjnwksqhxuxtrv"; // 18

console.log(maxLengthBetweenEqualCharacters(s));

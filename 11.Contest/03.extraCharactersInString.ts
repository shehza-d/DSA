// const minExtraChar = (s: string, dictionary: string[]): number => {
//undone
const minExtraChar = (s, dictionary) => {
  let result = s.length;
  s = s.split("").sort().join("");
  console.log("s", s);
  console.log(dictionary.join("").split("").sort().join(""));

  dictionary.map((item) => {
    if (s.indexOf(item) >= 0) {
      let a = s.slice(s.indexOf(item), item.length);
      console.log(a);
    }
  });

  return s.length;
};

//faltu char dhoond ky unka count batana hy
const s = "leetscode",
  dictionary = ["leet", "code", "leetcode"]; //1
// const  s = "sayhelloworld", dictionary = ["hello","world"] //3

console.log(minExtraChar(s, dictionary));

// https://leetcode.com/problems/extra-characters-in-a-string/solutions/3568827/bottom-up-dp/
// https://leetcode.com/problems/extra-characters-in-a-string/solutions/3568582/2-approach-dp-memoization-trie-approach-detailed-explanation/
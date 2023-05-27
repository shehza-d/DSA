// const minExtraChar = (s: string, dictionary: string[]): number => {
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

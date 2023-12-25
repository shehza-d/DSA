const numDecodings = (s: string): number => {
  let result = 0;
  let possibilities = [];

  //   const getChrIndex = (ch) => ch.charCodeAt(0) - "a".charCodeAt(0);
  const getLetters = (num: number) => String.fromCharCode(64 + num);

  for (const chr of s){
	  console.log(getLetters(+chr));

  }

  return result;
};

// const s = "12"; // 2
// const s = "226"// 3
const s = "06"// 0

console.log(numDecodings(s));

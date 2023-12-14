const check = (arr: number[]) => {

	const n = arr.length, t = n / 4;
	console.log("🚀 ~ file: 11.ts:4 ~ check ~ t:", t)


  let percentageOfOneElement = ((1 / arr.length) * 100);
  let hashMap = {};

  for (let i = 0; i < arr.length; i++) {
    if (!hashMap[arr[i]]) hashMap[arr[i]] = 1;
    else hashMap[arr[i]]++;
  }

  for (const element in hashMap) {
    const occurrence = hashMap[element];
    const occurringPercentage = occurrence * percentageOfOneElement;
    if (occurringPercentage > 25) return element;
  }
};

// const arr = [1, 3, 3, 6, 6, 6, 6, 7, 10]; // 6
// const arr = [1, 1];// 1
const arr = [1, 1, 2, 2, 3, 3, 3, 3]; // 3

console.log(check(arr));

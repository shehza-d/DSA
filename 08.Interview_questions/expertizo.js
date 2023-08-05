const addDigits = (num) => {
  let result = 0;
  const arr = num.toString().split("");
  arr.map((i) => (result += Number(i)));
  return result;
};

// console.log(addDigits(24)); // 6
// console.log(addDigits(2)); // 2
// console.log(addDigits(242)); // 8
// console.log(addDigits(209320)); // 16

// palandrom
// add 2 numbers together

// each api call takes 2s so total time will be 6s how to get passed in total 2s
// useEffect(async () => {
//   const call1 = await fetch(""); // 2s
//   const call2 = await fetch(""); // 2s
//   const call3 = await fetch(""); // 2s
// }, []);

// // solution
// useEffect(async () => {
//   const call1 = await fetch(""); // 2s
//   const call2 = await fetch(""); // 2s
//   const call3 = await fetch(""); // 2s

//   const [res1, res2, res3] = await Promise.all([call1, call2, call3]);
// }, []);

// what will be the output with let
// for (let i = 0; i < 5; i++) {
//   setTimeout(() => {
//     console.log("i",i);
//   }, 2000);
// }
// 0,1,2,3,4

// what will be the output with var
// for (var i = 0; i < 5; i++) {
//   setTimeout(() => {
//     console.log("i",i);
//   }, 2000);
// }
// ans 5,5,5,5,5
setTimeout(() => console.log("33333"), 0);

const a = async () => {
  for (let i = 0; i < 10000; i++) {
    for (let i = 0; i < 10000; i++) {
      for (let i = 0; i < 10000; i++) {}
    }
  }
  console.log("11111");
};
const b = () => {
  for (let i = 0; i < 10000; i++) {
    for (let i = 0; i < 10000; i++) {
      for (let i = 0; i < 10000; i++) {}
    }
  }
  console.log("22222");
}; 

a();
b();

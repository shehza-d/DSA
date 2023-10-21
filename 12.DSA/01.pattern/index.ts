// Pattern 1

const n = 6;

// for (let i = 0; i < n; i++) {
//   let row = "";
//   for (let j = 0; j < n; j++) {
//     row += `${i + 1} `;
//   }
//   console.log(row);
// }

// Pattern 2

// let row = "";

// for (let i = 0; i < n * n; i++) {
//   if (i % n === 0) row += "\n";

//   row += `${i + 1} `;
// }

// console.log(row);

// Pattern 3

// const patternOfAsterisk = (n) => {
//   let result = "";
//   for (let i = 1; i <= n; i++) {
//     for (let j = 0; j < i; j++) {
//       result += "*";
//     }
//     result += "\n";
//   }
//   return result;
// };

// console.log(patternOfAsterisk(7));

// Pattern 4

// let row = 3;

let count = 1;
let row = "";

for (let i = 1; i < n; i++) {
  for (let j = 1; j <= i; j++) {
    //   console.log(count,'count');

    row += `${count} `;
    count++;
  }
  row += "\n";
}

console.log(row);

// Pattern 5

// for (let i = 0; i < n; i++) {
// 	let row = "";
// 	for (let j = 0; j < i; j++) {
// 	  row += `${j+i} `;
// 	}
// 	console.log(row);
//   }

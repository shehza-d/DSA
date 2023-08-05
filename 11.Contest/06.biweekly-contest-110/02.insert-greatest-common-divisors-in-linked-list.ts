/**
 * Definition for singly-linked list.
// class ListNode {
    //   val: number;
    //   next: ListNode | null;
//   constructor(val?: number, next?: ListNode | null) {
//     this.val = val === undefined ? 0 : val;
//     this.next = next === undefined ? null : next;
//   }
// }
*/

// const insertGreatestCommonDivisors = (head: ListNode | null): ListNode | null => {;
const insertGreatestCommonDivisors = (head: number[]) => {
  if (typeof head !== "object") return [];

  const findGCD = (a, b) => {
    // Find Minimum of a and b
    let gcd = Math.min(a, b);
    while (gcd > 0) {
      if (a % gcd == 0 && b % gcd == 0) {
        break;
      }
      gcd--;
    }
    return gcd;
  };
  let result: number[] = [];
  head.reduce((acc, cur) => {
    result.push(acc);
    result.push(findGCD(acc, cur));
    return cur;
  });

  return [...result, head[head.length - 1]];
};

const head = [18, 6, 10, 3]; // [18,6,6,2,10,1,3]
// const head = [7]; // [7]

console.log(insertGreatestCommonDivisors(head));

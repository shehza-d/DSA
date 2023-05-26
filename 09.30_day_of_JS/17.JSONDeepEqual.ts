// https://leetcode.com/problems/json-deep-equal/

const areDeeplyEqual = (o1: Object, o2: Object): boolean => {
  if (typeof o1 !== "object") return JSON.stringify(o1) === JSON.stringify(o2);
  const sortableObj = (obj) =>
    Object.fromEntries(
      // Object.entries(obj).sort(([, a]: any, [, b]: any) => a - b)
      Object.entries(obj).sort(([, a], [, b]) => a - b)
    );

  o1 = sortableObj(o1);
  o2 = sortableObj(o2);
  console.log(o2);

  return JSON.stringify(o1) === JSON.stringify(o2);
};

// const o1 = { x: 1, y: 2 },  o2 = { x: 1, y: 2 }; //true
// const o1 = { y: 2, x: 1 },  o2 = { x: 1, y: 2 }; //true
// const o1 = { x: null, L: [1, 2, 3] },  o2 = { x: null, L: ["1", "2", "3"] };// false
// const o1 = true,  o2 = false; //false
// const o1 = [1],  o2 = { "0": 1 }; //false

console.log(areDeeplyEqual(o1, o2));

const areDeeplyEqual = (o1, o2) => {
  if (o1 === o2) return true;

  if (typeof o1 != "object" || typeof o2 != "object") return false;

  if (Array.isArray(o1) !== Array.isArray(o2)) return false;
kk
  if (Object.keys(o1).length != Object.keys(o2).length) return false;

  for (const key in o1) {
    if (!areDeeplyEqual(o1[key], o2[key])) return false;
  }
  return true;
};

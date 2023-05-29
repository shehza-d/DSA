// https://leetcode.com/problems/array-of-objects-to-matrix/

//undone
// const jsonToMatrix = (arr: any[]): (string | number | boolean | null)[] => {
const jsonToMatrix = (arr) => {
  // Helper function to check if a value is an object
  const isObject = (x) => x !== null && typeof x === "object";

  // Recursive function to extract keys from nested objects
  const getKeys = (object) => {
    if (!isObject(object)) return [""]; // If the value is not an object, return an empty key
    const result = [];
    for (const key of Object.keys(object)) {
      const childKeys = getKeys(object[key]); // Recursively get keys from nested objects
      for (const childKey of childKeys) {
        result.push(childKey ? `${key}.${childKey}` : key); // Append child keys with dot notation
      }
    }
    return result;
  };

  // Extract all unique keys from the array of objects and sort them
  const keys = [
    ...new Set(
      arr.reduce((acc, curr) => {
        getKeys(curr).forEach((k) => acc.add(k));
        return acc;
      }, new Set())
    ),
  ].sort();

  // Retrieve the value for a given key path in an object
  const getValue = (obj, path) => {
    const paths = path.split(".");
    let i = 0;
    let value = obj;
    while (i < paths.length && isObject(value)) {
      value = value[paths[i++]];
    }
    // If the value is not found or is an object, return an empty string
    return i < paths.length || isObject(value) || value === undefined
      ? ""
      : value;
  };

  // Create the matrix representation with keys as the first row and values as subsequent rows
  const matrix = [keys];
  arr.forEach((obj) => {
    matrix.push(keys.map((key) => getValue(obj, key)));
  });

  return matrix;

  //   let matrix = [];
  //   let columns = new Set();

  //   // Extract all unique keys from the array of objects and sort them
  //   arr.map((obj) => Object.keys(obj).map((keys) => columns.add(keys)));
  //   matrix.push([...columns].sort());

  //   return matrix;
};

// const arr = [ { b: 1, a: 2 }, { b: 3, a: 4 } ];
// const arr = [{ a: 1, b: 2 }, { c: 3, d: 4 }, {}];
const arr = [{ a: { b: 1, c: 2 } }, { a: { b: 3, d: 4 } }];
// const arr = [[{ a: null }], [{ b: true }], [{ c: "x" }]];
console.log(jsonToMatrix(arr));

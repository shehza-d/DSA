// Brute Force
// const destCity = (paths: string[][]): string => {
//   let destination = paths[0][1];

//   for (let i = 1; i < paths.length; i++) {
//     for (let j = 0; j < paths.length; j++) {
//       if (destination === paths[j][0]) destination = paths[i][1];
//     }
//   }
//   return destination;
// };

//

const destCity = (paths: string[][]): string => {
  const n = paths.length;
  const route: string[] = [];

  for (let i = 0; i < paths.length; i++) {
    const path = paths[i];
    if (i === 0) route.push(path[0], path[1]);

	// console.log(route.indexOf(path[1]))
	console.log('path[1]',route.indexOf('A'))

	


  }
  console.log("🚀 ~ destCity ~ path:", route.join(" => "));

  return route[route.length - 1];
};

// const paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]// "Sao Paulo"
const paths = [ ["B", "C"],["D", "B"],["C", "A"] ]; // "A"
// const paths = [["A","Z"]]// "Z"
// const paths = [["pYyNGfBYbm","wxAscRuzOl"],["kzwEQHfwce","pYyNGfBYbm"]]// "wxAscRuzOl"
// const paths = [
//   ["a", "b"],
//   ["d", "e"],
//   ["b", "c"],
//   ["c", "d"],
//   ["e", "last"],
// ]; // "OAxMijOZgW"

console.log(destCity(paths));

// [["B","C"],["C","A"],["D","B"]]

// d = b = c = a

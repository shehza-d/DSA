// Original Solution

const isPathCrossing = (path: string): boolean => {
  let [x, y] = [0, 0]; // Starting Position
  const positionsVisited = new Set(["0,0"]);

  for (const dir of path) {
    if (dir === "N") y++;
    if (dir === "S") y--;
    if (dir === "E") x++;
    if (dir === "W") x--;

    const position = `${x},${y}`;

    if (positionsVisited.has(position)) return true;

    positionsVisited.add(position);
  }
  return false;
};

// const path = "NES"; // false
// const path = "NESWW"; // true
// const path = "SN"; // true
// const path = "NNSWWEWSSESSWENNW"; // true
const path = "ENNNNNNNNNNNEEEEEEEEEESSSSSSSSSS"; // false

console.log(isPathCrossing(path));

// On line 13 adding , is necessary because 1,10 and 11,0 is indistinguishable

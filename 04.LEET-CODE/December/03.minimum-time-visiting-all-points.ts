// https://leetcode.com/problems/minimum-time-visiting-all-points

function minTimeToVisitAllPoints(points: number[][]): number {
  let time = 0;

  for (let i = 0; i < points.length - 1; i++) {
    const current = points[i];
    const target = points[i + 1];
    const nextX = Math.abs(target[0] - current[0]);
    const nextY = Math.abs(target[1] - current[1]);

    time += Math.max(nextX, nextY);
  }

  return time;
}

const points = [[1, 1],[3, 4], [-1, 0]]; // 7

console.log(minTimeToVisitAllPoints(points));

// console.log('aesdf' in 'a');

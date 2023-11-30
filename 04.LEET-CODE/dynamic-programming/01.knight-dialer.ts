// https://leetcode.com/problems/knight-dialer/?envType=daily-question&envId=2023-11-27

// unsolved
const knightDialer = (n: number = 10): number => {
  const MOD = 10 ** 9 + 7;
  let ans = n;

  return ans % MOD;
};

// const n = 1; // 10
// const n = 2; // 20
// const n = 3131; // 136006598

console.log(knightDialer(70));

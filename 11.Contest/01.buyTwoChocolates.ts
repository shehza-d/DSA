// https://leetcode.com/contest/biweekly-contest-105/problems/buy-two-chocolates

const buyChoco = (prices: number[], money: number): number => {
  let result = money;
  prices.sort((a, b) => a - b);

  for (let i = 0; i < 2; i++) {
    result -= prices[i];
    if (result < 0 && i < 2) {
      return money;
    }
  }
  return result;
};

const prices = [1, 2, 2], money = 3; //0
const prices = [3, 2, 3], money = 3; //3
const prices = [98, 54, 6, 34, 66, 63, 52, 39], money = 62; //22

console.log(buyChoco(prices, money));

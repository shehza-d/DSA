// https://leetcode.com/contest/biweekly-contest-110/problems/account-balance-after-rounded-purchase/

const accountBalanceAfterPurchase = (purchaseAmount: number): number => {
  let balance = 100;
  const roundedAmount = Math.round(purchaseAmount / 10) * 10;
  return balance - roundedAmount;
};

const purchaseAmount = 9; // 90
const purchaseAmount = 15; // 80

console.log(accountBalanceAfterPurchase(purchaseAmount));

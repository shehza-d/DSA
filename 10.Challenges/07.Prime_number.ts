const isPrime = (num: number): boolean => {
  num = Number(num);
  if (num < 2) return false;

  for (let i = 2; i <= num / 2; i++) {
    if (num % i === 0) return false;
  }
  return true;
};

// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 67, 71, 73, 79, 83, 89, 97
console.log(isPrime(71));

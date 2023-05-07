// https://leetcode.com/problems/counter-ii/

const createCounter = (init: number): ReturnObj => {
  let original = init;

  return {
    increment: () => ++init,
    reset: () => {
      init = original;
      return init;
    },
    decrement: () => --init,
  };
};

type ReturnObj = {
  increment: () => number;
  decrement: () => number;
  reset: () => number;
};

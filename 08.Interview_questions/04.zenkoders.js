// solved with useCallback() and Promise.allSettled

import React from "react";
import { fetchStudent, fetchSchool, fetchGuardian } from "";

export default function enkoders() {
  return <div>04.zenkoders</div>;
}

// Recursion

const fun = (a, b) => {
  if (b === 0) return a;
  return fun(a, b - 1) + b;
};

console.log(fun(3, 6)); // 24

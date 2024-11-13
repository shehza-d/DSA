const findSubArrays = (nums: number[]) => {
  const subArray: number[][] = [];
  for (let start = 0; start < nums.length; start++) {
    for (let end = start; end < nums.length; end++) {
      //remove start + 1
      subArray.push(nums.slice(start, end + 1));
    }
  }
  return subArray;
};

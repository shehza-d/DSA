const findSubArrays = (nums: number[]) => {
  const subArray: number[][] = [];
  for (let start = 0; start < nums.length; start++) {
    for (let end = start + 1; end < nums.length; end++) {
      //remove start + 1
      subArray.push(nums.slice(start, end + 1));
    }
  }
  return subArray;
};

function countAlternatingSubarrays(nums: number[]): number {
  let result = nums.length;

//   const subArray: number[][] = [];

  const isAlternatingBinaryArray = (arr: number[]) => {
    for (let i = 0; i < arr.length - 1; i++) {
      if (arr[i] === arr[i + 1]) return false;
    }
    return true;
  };

  for (let start = 0; start < nums.length; start++) {
    for (let end = start + 1; end < nums.length; end++) {
      // subArray.push(nums.slice(start, end + 1));
      // if(subarray[i]!==subarray[i+1])
      const subArray = nums.slice(start, end + 1);
      console.log("🚀 ~ countAlternatingSubarrays ~ subArray:", subArray);

      //   let b = subArray.reduce((prev, curr) => (prev === curr ? true : false));

    //   console.log(
    //     "🚀 ~ countAlternatingSubarrays ~ b:",
    //     isAlternatingBinaryArray(subArray)
    //   );

      if (isAlternatingBinaryArray(subArray)) result++;
    }
  }

  return result;
}

// g
function countAlternatingSubarrays(nums: number[]): number {
  let result = 0;

  for (let start = 0; start < nums.length; start++) {
    let end = start;
    while (end + 1 < nums.length && nums[end] !== nums[end + 1]) {
      end++;
    }
    const subArrayLength = end - start + 1;
    result += (subArrayLength * (subArrayLength + 1)) / 2;
    start = end; // Move the start pointer to the end of the alternating subarray
  }

  return result;
}

// const nums = [0, 1, 2, 3,4]; // 5
const nums = [0, 1, 1, 1]; // 5
const nums = [1, 0, 1, 0]; // 10

console.log(countAlternatingSubarrays(nums));

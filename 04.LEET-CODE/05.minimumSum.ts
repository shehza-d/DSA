// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/

const minimumSum = (num: number): number => {
  let sortedArrOfNum = num.toString().split("").sort();
  return (
    Number(sortedArrOfNum[0] + sortedArrOfNum[2]) +
    Number(sortedArrOfNum[1] + sortedArrOfNum[3])
  );
};

console.log(minimumSum(2932));


// Others Approach
// First off all we will split num 2932 into 2,9,3,2 and we will store them in vector a.
// Then we sort a , --------------> 2 , 2 , 3 , 9 .
// now, the min sum possible is 22 + 29 .
// 23 means 2*10+3 -----------------> a[0]10 + a[2];
// 29 means 210+9 -----------------> a[1]*10 + a[3];

// so we will return a[0]*10 + a[1]*10 + a[2] + a[3]

// Code
class Solution {
public:
    int minimumSum(int num) {
        vector<int>a(4);
        for(int i=0;i<a.size();i++){
            a[i] = num%10;
            num = num/10;  // splitting number into digits & pushing into vector a 
        }
        sort(a.begin(),a.end());
        return (a[0]+a[1])*10 + a[2]+a[3]; 
    }
};
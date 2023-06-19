// https://leetcode.com/contest/weekly-contest-350/problems/total-distance-traveled/

// undone
// const  distanceTraveled =(mainTank: number, additionalTank: number): number=> {
const distanceTraveled = (mainTank, additionalTank) => {
  let result = mainTank || 0;
  // let additionalTank=additionalTank
  for (let i = 1; i <= mainTank; i++) {
    if (i % 5 === 0) {
      //   let amountToAddFromAdditionalTank = mainTank / 5;
      console.log("test1", i);
      if (1 <= additionalTank) {
		
        result += 1;
        additionalTank-=1;
        console.log("left additionalTank", additionalTank);

        console.log("result", result);
      }
    }
  }
  if (1 <= additionalTank && result % 5 === 0) {
    console.log("i");
    return distanceTraveled(result, additionalTank);
  }
  return result * 10;
};

// const mainTank = 5,
//   additionalTank = 10; // 60
// const mainTank = 1,
//   additionalTank = 2; // 10
//   const mainTank = 5,
//   additionalTank = 1; // 60
// const mainTank = 6,
//   additionalTank = 1; // 70
// const mainTank = 9,
//   additionalTank = 2; // 110
// const mainTank = 9,
//   additionalTank = 1; // 100
//   const mainTank = 10,
//   additionalTank = 2; // 120
const mainTank = 9,
  additionalTank = 3; // 110


console.log('last',distanceTraveled(mainTank, additionalTank));

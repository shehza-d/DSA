// const jsonStringify = (obj: any): string => {
const jsonStringify = (obj) => {
  let result = "";
  const checkValue = (value) => {
    if (
      value === null ||
      typeof value === "boolean" ||
      typeof value === "number" ||
      typeof value === "undefined"
    ) {
      return String(value);
    }
  };

  result += checkValue(obj);

  if (Array.isArray(obj)) {
    result+= `[${obj.map((item) => checkValue(item))}]`;
  }
  //   if(obj)
  //   let result = `{`;
  //   //   console.log("keys order", Object.keys(obj));
  //   for (const key in obj) {
  //     if (typeof obj[key] === "object") {
  // 		result+=`"${key}":`
  //       result += jsonStringify(obj[key]);
  // 	  continue
  //     // }else if (typeof obj[key] === ""){
  // 	// 	result+=`[${}]`
  // 	}
  //     if (typeof obj[key] === "string") {
  //       result += `"${key}":"${obj[key]}",`;
  //       continue;
  //     }
  //     result += `"${key}":${obj[key]},`;
  //   }
  //   console.log("result", result.slice(0, -1));
  //   result = result.slice(0, -1);
  return `${result}`;
};

// const object = { y: 1, x: 2 };
// const object = { a: "str", b: -12, c: true, d: null };
// const object = { key: { a: 1, b: [{}, null, "Hello"] } };
// const object = null
const object = [1,2,'sheh']

console.log(jsonStringify(object));

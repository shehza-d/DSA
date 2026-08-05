function isValidIP(str) {
  const isValidOctet = (value) => {
    // checking if octet doesn't have any char other then numbers
    for (let ch of value) {
      if (ch < "0" || ch > "9") return false;
    }

    // checking if octet don't value leading zeros i.e 01 is invalid but only 0 is valid
    if (value.length > 1 && value[0] === "0") return false;

    const number = Number(value);

    if (!value) return false; // invalidating "" empty strings
    if (Number.isNaN(number)) return false;
    if (number < 0 || number > 255) return false;

    return true;
  };

  const octets = str.split(".");
  const n = octets.length;

  if (n !== 4) return false;

  return octets.every(isValidOctet);
}

// console.log(isValidIP("0.0.0.0")); // true
// console.log(isValidIP("12.255.56.1")); // true
// console.log(isValidIP("137.255.156.100")); // true
// console.log(isValidIP("")); // false
// console.log(isValidIP("abc.def.ghi.jkl")); // false
// console.log(isValidIP("123.456.789.0")); // false
// console.log(isValidIP("12.34.56")); // false
// console.log(isValidIP("01.02.03.04")); // false
// console.log(isValidIP("256.1.2.3")); // false
// console.log(isValidIP("1.2.3.4.5")); // false
// console.log(isValidIP("123,45,67,89")); // false
// console.log(isValidIP("1e0.1e1.1e2.2e2")); // false
// console.log(isValidIP(" 1.2.3.4")); // false
// console.log(isValidIP("1.2.3.4 ")); // false
// console.log(isValidIP("12.34.56.-7")); // false
// console.log(isValidIP("1.2.3.4\n")); // false
// console.log(isValidIP("\n1.2.3.4")); // false

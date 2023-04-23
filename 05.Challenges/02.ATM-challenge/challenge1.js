const transaction = (event) => {
  event.preventDefault();
  const inputAmount = Number(document.querySelector("#inputAmount").value);
  // console.log(inputAmount)

  let error_para = document.querySelector("#error_para");
  error_para.innerText = "";

  if (inputAmount < 100) return (error_para.innerText = `100 se kam nhi`);
  if (inputAmount > 100000)
    return (error_para.innerText = `1,00,000 se zada nhi`);

  const notePreference = Number(
    document.querySelector("#notePreference").value
  );

  switch (notePreference) {
    case 500:
      console.log(`500 in switch`);
      let a = inputAmount / 500;
      reminder = a - Math.floor(a);
      console.log(a);
      console.log(reminder);

      break;
    case 100:
      console.log(`100 in switch`);
      break;
    case 50:
      console.log(`50 in switch`);
      break;
    case 20:
      console.log(`20 in switch`);
      break;
    case 10:
      console.log(`10 in switch`);
      break;
    case 5:
      console.log(`5 in switch`);
      break;
    case 1:
      console.log(`1 in switch`);
      break;
    default:
      console.log(`error in switch`);
      break;
  }
};

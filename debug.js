//This is question's statement

// When the addToCart function will be called by passing a product
// object and cart, there are two case that need to be handled in
// this function. Case-I is when a product is being added first time
// in the cart and Case-II is when the product already exists in the
// cart.

//  Case-I: If the product object does not exist already in cart
// array, then it should be added to the cart along with two new
// properties in the object, i.e., quantity and total. The default
// value of quantity for new product is 1. The total should be
// calculated based on the price and discount of the product. Please
// note that the discount of each product is already stored in each
// object as shown in the products array e.g., for the first four
// products the discount is 0.10 (10%) and for the last product it
// is 0.05 (5%).

//  Case-II: If the product already exists in the cart, then it
// should not be added in the cart. Only its quantity will be
// increment by 1 and its total should also be recalculated ad its
// quantity has been changed.
//  React State Immutability Constraint: The ‘addToCart’, function
// should never modify the cart array or product object directly
// that are passed them as parameters. They should be treated as
// immutable.

let products = [
  { id: 1, price: 100, discount: 0.1 },
  { id: 2, price: 200, discount: 0.1 },

  { id: 3, price: 300, discount: 0.1 },
  { id: 4, price: 400, discount: 0.1 },
  { id: 5, price: 500, discount: 0.05 },
];
let quantity = 0;
let total = 0;
let cart = [];

function addToCart(cart, product) {
  let newCart = [...cart];
  let found = newCart.find((p) => p.id !== product.id);
  console.log("found", found);
  if (found) {
    let notExistingProduct = { ...product };
    found.quantity = 1;
    found.total = product.price * (1 - product.discount);
    let newProduct = [{ notExistingProduct, quantity, total }];
    cart.push(newProduct);
  } else {
    total = product.price * (1 - product.discount);
    let newproduct = [{ ...product, quantity: 1, total }];
    cart.push(newproduct);
  }
  return cart;
}
// console.log(cart);
// output: []
let product = products[2];
cart = addToCart(cart, product);
// console.log(cart);
//output:  [ { id: 3, price: 300, discount: 0.1, qty: 1, total: 270 } ]

product = products[4];
cart = addToCart(cart, product);
// console.log(cart);
//   { id: 3, price: 300, discount: 0.1, qty: 1, total: 270 },
//   { id: 5, price: 500, discount: 0.05, qty: 1, total: 475 }
// ]

product = products[2];
cart = addToCart(cart, product);
// console.log(cart);
//output: [
//   { id: 3, price: 300, discount: 0.1, qty: 2, total: 540 },
//   { id: 5, price: 500, discount: 0.05, qty: 1, total: 475 }
// ]
product = products[0];
cart = addToCart(cart, product);
// console.log(cart);
//output: [
//   { id: 3, price: 300, discount: 0.1, qty: 2, total: 540 },
//   { id: 5, price: 500, discount: 0.05, qty: 1, total: 475 },
//   { id: 1, price: 100, discount: 0.1, qty: 1, total: 90 }
// ]
product = products[4];
cart = addToCart(cart, product);
// console.log(cart);
//output: [
//   { id: 3, price: 300, discount: 0.1, qty: 2, total: 540 },
//   { id: 5, price: 500, discount: 0.05, qty: 2, total: 950 },
//   { id: 1, price: 100, discount: 0.1, qty: 1, total: 90 }
// ]

// Original

let products = [
  { id: 1, price: 100, discount: 0.1 },
  { id: 2, price: 200, discount: 0.1 },
  { id: 3, price: 300, discount: 0.1 },
  { id: 4, price: 400, discount: 0.1 },
  { id: 5, price: 500, discount: 0.05 },
];

let cart = [];
function addToCart(cart, product) {
  let newCart = [...cart];
  let index = newCart.findIndex((p) => p.id === product.id);
  if (index === -1) {
    let newProduct = { ...product };
    newProduct.quantity = 1;
    newProduct.total = (1 - newProduct.discount) * newProduct.price;
    newCart.push(newProduct);
  } else {
    let newProduct = { ...newCart[index] };
    newProduct.quantity += 1;
    newProduct.total =
      newProduct.quantity * (1 - newProduct.discount) * newProduct.price;
    newCart[index] = newProduct;
  }
  return newCart;
}

console.log("Initial Cart:", cart);
cart = addToCart(cart, products[2]);
console.log("After adding first product:", cart);
cart = addToCart(cart, products[4]);
console.log("After adding same product again:", cart);
cart = addToCart(cart, products[2]);
console.log("After adding a different product:", cart);

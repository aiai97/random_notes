2667. Create Hello World Function
Write a function createHelloWorld. It should return a new function that always returns "Hello World".
```
var createHelloWorld = function() {
    return function() {
        return "Hello World";
    }
};
```

arrow syntax
var createHelloWorld = function() {
    return () => "Hello World";
};
function sum(x, y, z) {
  return x + y + z;
}
#### spread syntax
const numbers = [1, 2, 3];

console.log(sum(...numbers));
// Expected output: 6

console.log(sum.apply(null, numbers));
// Expected output: 6

arrow + rest syntax
var createHelloWorld = function(){
return (...args) =>"Hello World";
}

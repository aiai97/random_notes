2667. Create Hello World Function
Write a function createHelloWorld. It should return a new function that always returns "Hello World".
var createHelloWorld = function() {
    return function() {
        return "Hello World";
    }
};
arrow syntax
var createHelloWorld = function() {
    return () => "Hello World";
};
arrow + rest syntax
var createHelloWorld = function(){
return (...args) =>"Hello World";
}

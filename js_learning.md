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
```
var createHelloWorld = function() {
    return () => "Hello World";
};
function sum(x, y, z) {
  return x + y + z;
}
```



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
总结：this是JavaScript中一个特殊的关键字，它代表当前执行代码的上下文。this的值由代码的调用方式和上下文决定。在全局作用域中，this通常指向全局对象（例如window）。在函数作为对象的方法调用时，this指向调用该方法的对象。当通过new关键字调用构造函数时，this指向新创建的对象。通过显式绑定，我们可以手动指定函数的this。
closures. In JavaScript, functions have a reference to all variables declared in the same scope as well as any outer scopes. These scopes are known as the function's lexical environment. The combination of the function and it's environment is known as a closure.
var createCounter = function(n) {
    return function() {
        return n++;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */

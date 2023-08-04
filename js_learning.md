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
```
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
```
在JavaScript中，原型函数指的是在对象的原型（prototype）上定义的函数。每个JavaScript对象都有一个原型对象，它包含了共享的属性和方法。当你在一个对象上调用一个方法时，JavaScript会先查找该对象本身是否有该方法，如果没有，它会沿着原型链向上查找，直到找到匹配的方法或到达原型链的顶部（通常是Object.prototype）。

原型函数可以通过给对象的原型添加属性和方法来实现。通常，我们会使用构造函数创建对象，并且将一些共享的方法和属性放在构造函数的原型上，这样所有由该构造函数创建的对象都可以共享这些方法和属性。
```
// 构造函数 Person
function Person(name) {
  this.name = name;
}

// 在 Person 的原型上添加方法 sayHello
Person.prototype.sayHello = function() {
  console.log("Hello, my name is " + this.name);
};

// 使用构造函数创建对象
const person1 = new Person("Alice");
const person2 = new Person("Bob");

// 调用原型方法
person1.sayHello(); // Output: "Hello, my name is Alice"
person2.sayHello(); // Output: "Hello, my name is Bob"
```

// Approach 1: setTimeout + clearTimeout + Class Syntax
// class TimeLimitedCache{
//   cache = new Map();
  
//   set (key, value, duration) {
//     const valueInCache = this.cache.get(key);
//     if (valueInCache) {
//       clearTimeout(valueInCache.timeout);
//     }
//     const timeout = setTimeout(() => this.cache.delete(key), duration);
//     this.cache.set(key, { value, timeout });
//     return Boolean(valueInCache);
//   }

//   get (key) {
//     return this.cache.has(key) ? this.cache.get(key).value : -1;
//   }

//   count () {
//     return this.cache.size;
//   }
// }


// Approach 2: setTimeout + clearTimeout + Function Syntax
// function TimeLimitedCache () {
//   this.cache = new Map();
// }

// TimeLimitedCache.prototype.set = function (key, value, duration) {
//   const valueInCache = this.cache.get(key);
//   if (valueInCache) {
//     clearTimeout(valueInCache.timeout);
//   }
//   const timeout = setTimeout(() => this.cache.delete(key), );
//   this.cache.set(key, { value, timeout });
//   return Boolean(valueInCache);
// }

// TimeLimitedCache.prototype.get = function (key) {
//   return this.cache.has(key) ? this.cache.get(key).value : -1;
// }

// TimeLimitedCache.prototype.count = function () {
//   return this.cache.size;
// }
// Approach 3: Maintain Expiration Times
// class TimeLimitedCache{
//   cache = {};
//   set (key, value, druation) {
//     const hasUnexpiredValue = key in this.cache && Date.now() < this.cache[key].expiration;
//     this.cache[key] = { value, expiration: Date.now() + duration };
//     return hasUnexpiredValue;
//   }
// // 总的来说，=== 是严格相等运算符，要求类型和值都相等才返回 true。而 == 是相等运算符，会进行类型转换再进行比较，可能会产生一些不直观的结果，因此建议在条件判断时使用 === 进行严格相等比较。
//   get (key) {
//     if (this.cache[key] === undefined) {
//       return -1;
//     }
//     if (Date.now() > this.cache[key].expiration) {
//       return -1;
//     }
//     return this.cache[key].value;
//   }
//   count () {
//     let count = 0;
//     for ()
//   }
// }


var obj = new TimeLimitedCache()
console.log(obj.set(1, 42, 1000))
console.log(obj.get(1))
obj.count()
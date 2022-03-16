JavaScript Varient
========

Usage
-----
Here are some examples of how to hash CRC32C using this library.

```JavaScript
var crc = new CRC32C();
var b = [ 127, 0, 0, 1 ];
crc.update(b, 0, 4);
console.log(crc.getValue());
```

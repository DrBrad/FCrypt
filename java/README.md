Java Varient
========

Usage
-----
Here are some examples of how to hash CRC32C using this library.

```Java
byte[] b = { 127, 0, 0, 1 };

CRC32C crc = new CRC32C();
crc.update(b, 0, 4);
System.out.println(crc.getValue());
```

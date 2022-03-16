C++ Varient
========

Usage
-----
Here are some examples of how to hash CRC32C using this library.

```C++
char ip[] = {127, 0, 0, 1};
CRC32C crc;
crc.update(ip, 0, 4);
cout << crc.getValue() << '\n';
```

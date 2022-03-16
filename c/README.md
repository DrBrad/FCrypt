Java Varient
========

Usage
-----
Here are some examples of how to hash CRC32C using this library.

```C
char ip[] = {127, 0, 0, 1};
crc32c crc = crc32c_init;
update(ip, 0, 4, &crc);
printf("%ld\n", getValue(&crc));
```

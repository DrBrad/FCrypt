PHP Varient
========

Usage
-----
Here are some examples of how to hash CRC32C using this library.

```Java
$crc = new CRC32C();
$b = array(127, 0, 0, 1);
$crc->update($b, 0, 4);
print $crc->getValue();
```

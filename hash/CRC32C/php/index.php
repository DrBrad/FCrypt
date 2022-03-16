<?php
    require 'crc32c.php';

    $crc = new CRC32C();
    $b = array(127, 0, 0, 1);
    $crc->update($b, 0, 4);
    print $crc->getValue();
?>

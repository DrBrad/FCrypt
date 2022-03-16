package unet.crc32c;

import unet.crc32c.CRC32C;

public class Main {

    public static void main(String[] args){
        byte[] b = { 127, 0, 0, 1 };

        CRC32C crc = new CRC32C();
        crc.update(b, 0, 4);
        System.out.println(crc.getValue());
    }
}

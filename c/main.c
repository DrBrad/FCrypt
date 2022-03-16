#include <stdio.h>

#include "crc32c.c"

int main(int argc, char **argv){
    char ip[] = {127, 0, 0, 1};
    crc32c crc = crc32c_init;
    update(ip, 0, 4, &crc);
    printf("%ld\n", getValue(&crc));
}

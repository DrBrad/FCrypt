#include <iostream>

#include "crc32c.cpp"

using namespace std;

int main(int argc, char **argv){
    char ip[] = {127, 0, 0, 1};
    CRC32C crc;
    crc.update(ip, 0, 4);
    cout << crc.getValue() << '\n';
}

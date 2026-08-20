#include <iostream>
// #include <cstdint>

using namespace std;

typedef unsigned char uint8_t;
typedef unsigned int uint32_t;

// static_assert(sizeof(uint8_t) == 1);
// static_assert(sizeof(uint32_t) == 4);

union IPv4
{
    uint32_t address;
    uint8_t octets[4];
};

void ip_print(const IPv4 &ip);

int main()
{
    IPv4 ip, mask;

    ip.octets[0] = 192;
    ip.octets[1] = 168;
    ip.octets[2] = 1;
    ip.octets[3] = 100;

    mask.octets[0] = 255;
    mask.octets[1] = 255;
    mask.octets[2] = 255;
    mask.octets[3] = 0;

    ip_print(ip);
    ip_print(mask);

    ip.address &= mask.address;

    ip_print(ip);
}

void ip_print(const IPv4 &ip)
{
    cout << (int)ip.octets[0] << '.'
         << (int)ip.octets[1] << '.'
         << (int)ip.octets[2] << '.'
         << (int)ip.octets[3] << endl;
}

#include<iostream>

using namespace std;

int main()
{
    system("netsh interface ipv4 set address name=\"Wi-Fi\" static 192.168.1.51 255.255.255.0 192.168.1.1 ");
    cout << "Attempting to switch to static with ip as 192.168.1.51";
    return 0;
}
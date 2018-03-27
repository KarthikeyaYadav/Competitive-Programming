#include <iostream>
#include <bitset>
#include <string>
#include <bits/stdc++.h>

int main()
{
    std::string binary = std::bitset<32>(2147483647).to_string(); //to binary
    std::cout<<binary<<"\n";

    unsigned long decimal = std::bitset<32>(binary).to_ulong();
    std::cout<<decimal<<"\n";
    std::string bin="10101010";
    unsigned long decimaal = std::bitset<32>(bin).to_ulong();
    std::cout<<decimaal<<"\n";
    return 0;
}

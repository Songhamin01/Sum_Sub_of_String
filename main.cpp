#include <iostream>
#include <string>
#include <cstring>

using std::string;

void sum(string a, string b);
void sub(string a, string b);

int main()
{
    string a, b;
    std::cout << "First number  >> ";
    getline(std::cin, a);
    std::cout << "Second number >> ";
    getline(std::cin, b);

    sum(a, b);
    sub(a, b);
}
#include <iostream>
#include <string>
#include <cstring>

using std::string;


void sum(string a, string b)
{
    string re;
    int num = 0;
    int a_length = a.length()-1;
    int b_length = b.length()-1;

    while(1)
    {
    
        if (a_length < 0)
        {
            num += ((int)b[b_length] - 48);
        }
        else if (b_length < 0)
        {
            num += ((int)a[a_length] - 48);
        }
        else
        {
            num += (((int)a[a_length] - 48) + ((int)b[b_length] - 48));
        }
    
        if (num > 9)
        {
            num -= 10;
            re = std::to_string(num) + re;
            num = 1;
        }
        else
        {
            re = std::to_string(num) + re;
            num = 0;
        }

        a_length--;
        b_length--;

        if (a_length < 0 && b_length < 0)
        {
            break;
        }
    }

    if (num == 1)
    {
        re = std::to_string(num) + re;
    }

    std::cout << "Sum           >> " << re << std::endl;

}
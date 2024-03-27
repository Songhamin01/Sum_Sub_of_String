#include <iostream>
#include <string>
#include <cstring>

using std::string;


void sub(string a, string b)
{
    string re;
    int num = 0;
    int a_length = a.length()-1;
    int b_length = b.length()-1;
    bool isSmall = true;

    while(1)
    {
        if (a_length < b_length)
        {
            if (a_length < 0)
            {
                num = ((int)b[b_length] - 48) - num;
            }
            else if (b_length < 0)
            {
                num = ((int)a[a_length] - 48) - num;
            }
            else
            {
                if (abs(((int)b[b_length] - 48)) - num < abs(((int)a[a_length] - 48)))
                {
                    num = (abs(((int)b[b_length] - 48)) + 10) - abs(((int)a[a_length] - 48)) - num;
                    isSmall = false;
                }
                else
                {
                    num =  abs(((int)b[b_length] - 48)) - abs(((int)a[a_length] - 48)) - num;
                }
                
            }
        
            if (isSmall == false)
            {
                re = std::to_string(num) + re;
                num = 1;
                isSmall = true;
            }
            else
            {
                re = std::to_string(num) + re;
                num = 0;
            }
        }
        else
        {
            if (a_length < 0)
            {
                num = ((int)b[b_length] - 48) - num;
            }
            else if (b_length < 0)
            {
                num = ((int)a[a_length] - 48) - num;
            }
            else
            {
                num = abs(((int)a[a_length] - 48)) - abs(((int)b[b_length] - 48)) - num;
            }
        
            if (num < 0)
            {
                num = abs(num);
                re = std::to_string(num) + re;
                num = 1;
            }
            else
            {
                re = std::to_string(num) + re;
                num = 0;
            }
        }

        a_length--;
        b_length--;

        if (a_length < 0 && b_length < 0)
        {
            break;
        }
    }

    bool isFalse = true;
    for(int i = 0; i < re.length(); i++)
    {
        if (re[i] != '0')
        {
            isFalse = false;
            break;
        }
    }

    if (isFalse == true)
        re = '0';

    if(a_length < b_length)
    {
        re = '-' + re;
    }

    std::cout << "Sub           >> " << re << std::endl;

}
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int count = 0, max = 0;
    char string[10000000];
    cin.getline(string, 10000000);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == string[i + 1])
        {
            count++;
            if (count >= max)
                max = count;
        }
        else
        {
            count = 0;
        }
    }
    if (max == 0)
        cout << "1";
    else
    {
        cout << max + 1;
    }
}
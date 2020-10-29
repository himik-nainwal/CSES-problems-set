#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (ll i = 1; i <= testCases; i++)
    {
        ll totalPositions = (i * i) * (i * i - 1) / 2;
        ll attackingPositions = 4 * (i - 1) * (i - 2);
        cout << totalPositions - attackingPositions << endl;
    }
}
#include <iostream>
using namespace std;
int main()
{
    long n, count = 0;
    cin >> n;
    long arr[n];

    for (long i = 0; i < n; i++)
        cin >> arr[i];

    for (long i = 1; i < n; i++)
    {
        while (arr[i - 1] > arr[i])
        {
            count++;
            arr[i]++;
        }
    }
    cout << count;
}

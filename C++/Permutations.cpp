#include <iostream>
using namespace std;
void algo(int arr[], int n)
{
    if (n == 2 || n == 3)
        cout << "NO SOLUTION";
    else
    {
        for (int i = 1; i < n; i = i + 2)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i < n; i = i + 2)
        {
            if (abs(arr[i] - arr[i + 2]) != 1)
                cout << arr[i] << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    algo(arr, n);
}
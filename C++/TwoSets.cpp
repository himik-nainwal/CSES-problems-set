#include <iostream>
#define ll long long
using namespace std;
typedef struct dynamicArray
{
    ll info;
    struct dynamicArray *next;
} arr;
arr *add(arr *tp, ll n)
{
    arr *temp = NULL;
    temp = (arr *)malloc(sizeof(arr *));
    temp->info = n;
    temp->next = tp;
    return tp;
}
void display(arr *tp)
{
    while (tp != NULL)
    {
        cout << tp->info << " ";
        tp = tp->next;
    }
}
int main()
{
    ll n;
    cin >> n;
    arr *a1 = NULL, *a2 = NULL, *temp1, *temp2;
    ll count1 = 0, count2 = 0;
    for (int i = n; i > 0; i--)
    {
        if (i == n)
        {
            temp1 = add(a1, i);
            count1++;
        }
        if (a1 > a2)
        {
            count1++;
            temp1 = add(a1, i);
        }
        else
        {
            count2++;
            add(a2, i);
        }
        if (a1 = a2)
        {
            cout << "YES" << endl;
            cout << count1 << endl;
            display(a1);
            cout << count2 << endl;
            display(a2);
        }
    }
}
#include <iostream>
using namespace std;
bool is_sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    bool is_smallersorted = is_sorted(a + 1, size - 1);
    return is_smallersorted;
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << is_sorted(arr, n);
   
}
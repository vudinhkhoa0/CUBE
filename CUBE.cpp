#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[1001];
    cin >> n;
    a[1] = 1;
    a[0] = 0;
    int i = 1;
    while (a[i] < n)
    {
        i ++;
        a[i] = a[i-1] + (a[i-1] -  a[i-2] + i);
    }
    if (a[i] > n) cout << i - 1;
    else cout << i;
    return 0;
}


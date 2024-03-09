#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k)
    {
        int n;
        cin >> n;
        int a[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int index = -1;
        int s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            s2 += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            s2 -= a[i];
            if (s1 == s2)
            {
                index = i;
                break;
            }
            s1 += a[i];
        }
        if (index != -1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        k--;
    }
    return 0;
}


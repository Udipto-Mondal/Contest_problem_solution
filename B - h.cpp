/**
 *    author:  Udipto
 *    created:Saturday
11 May 2024
Dhaka, Bangladesh
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());

    for (int j = 0; j < m; ++j)
    {
        int count = upper_bound(a.begin(), a.end(), b[j]) - a.begin();
        cout << count << " ";
    }

    return 0;
}

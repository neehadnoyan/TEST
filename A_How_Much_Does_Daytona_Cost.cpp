#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == k)
            cnt++;
    }
    if(cnt >= 1)
        cout << "YES" << "\n";

    else
        cout << "NO" << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}
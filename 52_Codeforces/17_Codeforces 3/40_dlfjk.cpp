#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define v2i vector<vi>
#define ii pair<int, int>
#define F first
#define S second
#define all(X) (X).begin(), (X).end()
#define quicksilver ios_base::sync_with_stdio(0), cin.tie(0)

int tc = 1;

signed main()
{
    quicksilver;
    cin >> tc;
    vi sqrs;
    for (int i = 0; i <= 2e5; i++)
        sqrs.push_back(i * i);

    while (tc--)
    {
        int n;
        cin >> n;
        vi a(n), b(n);
        for (int i = 0; i < n; i++)
            a[i] = i;

        b = a;

        int idx = n - 1;
        while (idx >= 0)
        {

            int curr_num = a[idx];
            int actual_num = *lower_bound(all(sqrs), a[idx]);

            int dist = actual_num - curr_num;
            reverse(b.begin() + dist, b.begin() + curr_num + 1);

            idx = dist - 1;
        }

        for (auto x : b)
            cout << x << ' ';
        cout << '\n';
    }

    return 0;
}
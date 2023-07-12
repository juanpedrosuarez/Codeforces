#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char en = '\n';
const ll mod = 1e9 + 7;
void solve()
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> mp;
        bool t = true;
        map<int, vector<int>> mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            if (mp[a[i]] > k)
                t = false;
            mp2[a[i]].push_back(i);
        }
        if (!t)
            cout << "NO";
        else
        {
            cout << "YES" << en;
            vector<int> res(n);
            int j = 1;
            for (auto x : mp2)
            {
                if (j > k)
                    j = 1;
                for (int i = 0; i < x.second.size(); i++)
                {
                    res[x.second[i]] = j;
                    j++;
                    if (j > k)
                        j = 1;
                }
            }
            for (int i = 0; i < n; i++)
                cout << res[i] << " ";
        }
    }
     
int main()
    {
     
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
     
        int t = 1;
        // cin >> t;
        while (t--)
        {
            solve();
            cout << "\n";
        }
    }

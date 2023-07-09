#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int mul;
	cin >> mul;
	while(mul-- > 0) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int cnt[100]={};
		for(char& c:s) cnt[c-'A']++;
 
		int res = 0;
		for(int i=0;i<26;i++) {
			int mn = min(cnt[i], cnt[i+32]);
			res += mn;
			int t = min(k, abs(cnt[i]-cnt[i+32])/2);
			k -= t;
			res += t;
		}
		cout << res << endl;
	}
    return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
	
    int n, k, i, x, s, a[2000];
	pair<int, int> p[2000];
 
	for (cin >> n >> k; i < n; i++)
		cin >> x, p[i] = { x,i };
	sort(p, p + n);
	for (i = n - k; i < n; i++)
		s += p[i].first, a[i - n + k] = p[i].second;
	sort(a, a + k);
	cout << s << endl;
	for (i = 0; i < k - 1; i++)
	{
		if (i == 0)
			cout << a[0] + 1 << " ";
		else
			cout << a[i] - a[i - 1]<<" ";
	}
	if (k > 1)
		cout << n - 1 - a[k - 2];
	else
		cout << n;
}
 
 
int main(){
	
	f();
	
}

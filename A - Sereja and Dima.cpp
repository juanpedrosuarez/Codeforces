#include <bits/stdc++.h>
 
using namespace std;
 
 
    
void f(){
    
    int n, t = 0, count = 0, x; cin >> n;
	vector<int>s;
 
	for (int i = 0; i < n; i++) {
		cin >> x;
 
		s.push_back(x);
		count += s[i];
	}
	for (int i = 0; i < n; ) {
 
		if (s[i] > s[n - 1]) {
			t += s[i];
			i++;
			if (s[i] > s[n - 1]) {
				i++;
			}
			else
				n--;
 
		}
 
 
 
		else {
 
			t+= s[n - 1];
			n--;
			if (s[i] > s[n - 1])
				i++;
			else
				n--;
 
 
		}
	}
	
	cout << t << " " << abs(count - t) << endl;
}    
 
 
int main(){
    
    
      f();
    
    
}

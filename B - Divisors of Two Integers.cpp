#include <bits/stdc++.h>
    
using namespace std;
 
void f(){
        
    	int n;
    	cin >> n;
    	int arr[n];
    	map<int, int> mp;
    	for(int i = 0; i < n; i++){
    		cin >> arr[i];
    		mp[arr[i]]++;
    	}	
    	
    	sort(arr, arr + n);
    	
    	int mx = arr[n - 1];
    	int d = INT_MIN;
    	for(int i = 0; i < n - 1; i++) {
    		if(mp[arr[i]] > 1 or mx % arr[i]) {
    			d = max(d, arr[i]);
    		}
    	}
    	cout << mx << " " << d << endl;
    }
 
int main(){
        
        f();
        
    }

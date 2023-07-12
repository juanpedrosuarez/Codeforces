#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
 
	int n;
	cin>>n;
	vector<int> v(n+1);
	vector<int> v1(n);
	vector<int> v2(n);
 
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
    int s1 = 0, s2 = n - 1;
    for(int i = 0; i < n; i ++){
    	if(s1 <= s2){
        	if(i % 2 == 0){
            	cout << v[s1] << " ";
                   s1++;
                }
                else{
                    cout<<v[s2]<<" ";
                    s2--;
                }
            }
	}
    cout<<endl;
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}

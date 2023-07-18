#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int x,n,maxv=0,minv=110,min=0,max=0;
	cin>>n;
	
    for (int i = 0; i<n; i++){
		cin>>x;
		if(x>maxv){
			max=i;
			maxv = x;
		}
		if(x<=minv){
			min=i;
			minv=x;
		}
	}
	 if(max>min){
        cout<<(max-1)+(n-min)-1;
    }else{
        cout<<(max-1)+(n-min);
    }
	
	return 0;
}

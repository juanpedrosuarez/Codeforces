#include <iostream>
 
using namespace std;
 
int main(){
	int n, p,a[100],s=0;
	cin>>n>>p;
	
	for(int i = 1;i<=n; i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n; i++){
		if(a[i]>=a[p] and a[i]>0){
			s++;
		}
	}
	cout<<s<<endl;
}

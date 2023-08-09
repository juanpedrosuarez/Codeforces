#include <bits/stdc++.h>

using namespace std;


int main(){

    int n,a,b,c;
    cin>>n;
	
    for(int i = 0; i<n; i++){
		cin>>a>>b>>c;
        if(a+b>=10 or a+c>=10 or b+c>=10){
			cout<<"YES"<<endl;

		}else{
			cout<<"NO"<<endl;

		}
    }

}

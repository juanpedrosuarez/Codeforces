#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    string sn1,sn2,sn3;
    cin>>sn1>>sn2;
	sn3 = sn1;
    for(int i = 0; i<sn1.size(); i++){    
        if(sn1[i] == '1' and sn2[i] == '1'){
			sn3[i] = '0';
		}
		if(sn1[i] == '0' and sn2[i] == '1'){
			sn3[i] = '1';
		}
		if(sn1[i] == '1' and sn2[i] == '0'){
			sn3[i] = '1';
		}
		if(sn1[i] == '0' and sn2[i] == '0'){
			sn3[i] = '0';
		}
    }
	cout<<sn3<<endl;
    
}

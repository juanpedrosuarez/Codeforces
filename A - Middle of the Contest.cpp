#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
    int h1,m1,h2,m2;
	scanf("%d:%d", &h1, &m1); 
	scanf("%d:%d", &h2, &m2); 
    
    int s = (h1*60)+(h2*60)+m1+m2;
    int media = s/2;
    
    int hf = media/60;
    int mf = media%60;
 
    if(hf<=9){
		cout<<"0";
	}
	cout<<hf<<":";
	if(mf<=9){
		cout<<"0";
	}
    cout<<mf<<endl;
    
    
}
 
int main(){
    
    f();
    
}

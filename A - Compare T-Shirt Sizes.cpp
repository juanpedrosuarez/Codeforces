#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
 
 string s1,s2;
	
 cin>>s1>>s2;
	
 int n1 = s1.length();
 int n2 = s2.length();
	
 if(s1==s2){
        cout<<"="<<endl;
 }
 
 else if(s1[n1-1]=='M'&&s2[n2-1]=='S'){
        cout<<">"<<endl;
 }
  else if(s1[n1-1]=='S'&&s2[n2-1]=='M'){
        cout<<"<"<<endl;
 }
  else if(s1[n1-1]=='L'&&s2[n2-1]=='M'){
        cout<<">"<<endl;
 }
  else if(s1[n1-1]=='M'&&s2[n2-1]=='L'){
        cout<<"<"<<endl;
 }
  else if(s1[n1-1]=='L'&&s2[n2-1]=='S'){
        cout<<">"<<endl;
 }
  else if(s1[n1-1]=='S'&&s2[n2-1]=='L'){
        cout<<"<"<<endl;
 }
 
 else if(s1[n1-1]==s2[n2-1]){
        int cnt1= count(s1.begin(),s1.end(),'X');
        int cnt2= count(s2.begin(),s2.end(),'X');
        
        if(s1[n1-1]=='L')
        {
        if(cnt1>cnt2){
             cout<<">"<<endl;   
        }
        else{
              cout<<"<"<<endl;     
        }
        }
        else if(s1[n1-1]=='S')
        {
                if(cnt1>cnt2){
                cout<<"<"<<endl;   
        }
        else{
              cout<<">"<<endl;     
        }
        }
 }
 
 
 
}
 
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){		
		f();
	}
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;
 
void impossivel(){
	
}
 
int f(vector <int> &p){
	int tam = p.size();
	int resul=0;
	for(int i = tam-1; i>0; i--){
		while(p[i-1]>=p[i] && (p[i-1]>0)){
			p[i-1]/=2;
			resul++;
		}
		if(p[i]<i){
			return -1;
		}
	}
	return resul;
}
 
int main(){
	int t; cin>>t;
	while(t--){
	 int n; cin>>n;
	 vector <int> p(n);
	 int imp=0;
	 for(int i=0; i<n; i++){
		cin>>p[i];
		}
		cout<<f(p)<<endl;
	}
	return 0;
}

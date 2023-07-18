#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
const int TEM = 1;
const int NTEM = 0;
const int INC = 2;
 
string ba(string &s){
	string resul;
	bool flag=false;
	for(char c: s){
		if(c!= '?'){
			resul+=c;
			flag=true;
		}else{
			if(flag){
				resul+=resul.back();
			}else{
				resul+='#';
			}
		}
	}
	return resul;
}
 
string bd(string s){
	reverse(s.begin(),s.end());
	string resul= ba(s);
	reverse(resul.begin(),resul.end());
	return resul;
}
 
int antes(string &s, string &sa, int i){
	if(i==0){
		return 2;
	}else{
		i--;
		if(i>=0){
			if(sa[i]=='1'){
				return TEM;
			}else{
				if(sa[i]=='0'){
				 return NTEM;
				}else{
					return INC;
				}
			}
		}else{
			return INC;
		}
	}
}
 
int depois(string &s, string &sd, int i){
	if(i==s.size()-1){
		return 2;
	}else{
		i++;
		if(i<s.size()){
			if(sd[i]=='1'){
				return TEM;
			}else{
				if(sd[i]=='0'){
				 return NTEM;
				}else{
					return INC;
				}
			}
		}else{
			return INC;
		}
	}
	
	if(i==(s.size()-1)){
		return 2;
	}else{
		int num=++i;
		while(s[num]=='?' && num < s.size()-1){
			num++;
		}
		if(s[num]=='1'){
			return TEM;
		}else{
			if(s[num]=='0'){
				return NTEM;
			}else{
				return INC;
			}
		}
	}
}
 
bool suspeito(int i, string &s, string &sa, string &sd){
	if(antes(s,sa,i)== NTEM){
		return false;
	}else{
		if(antes(s,sa,i)==TEM){
			if(depois(s,sd,i)==TEM){
				return false;
			}else{
				return true;
			}
		}else{
			if(depois(s, sd,i)==TEM){
				return false;
			}else{
				return true;				
			}
		}
	}
}
 
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		int tam =s.size();
		int resul=0;
		string sa = ba(s);
		string sd = bd(s);
 
		for(int i=0; i<tam; i++){
			if(suspeito(i, s, sa,sd)){
				resul++;
			}
		}
		
		cout<<resul<<endl;
	}
	return 0;
}

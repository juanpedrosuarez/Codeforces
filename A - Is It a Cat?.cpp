#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
   
    int n;
    cin>>n;
    string s;
    cin>>s;
   
    for(int i = 0; i<n; i++){
        if(s[i]>='A' and s[i]<='Z'){
            s[i] +=32;
        }
    }
    int i = 0;
    bool m = false, e = false, o = false, w = false;
    if(s[i] =='m'){
        m = true;
    }
    while(i<n and s[i] == 'm'){
            i++;
    }
    
    if (s[i] == 'e'){
		e = true;
    }
	while (i < n && s[i] == 'e'){
		i++;
	}
	if (s[i] == 'o'){
		o = true;
	}
	while (i < n && s[i] == 'o'){
		i++;
	}
	if (s[i] == 'w'){
		w = true;
	}
	while (i < n && s[i] == 'w'){
			i++;
	}
		if(i==n and m and e and o and w){
		cout <<"YES"<<endl;
		}else{
		    cout<<"NO"<<endl;
		}
    
 
}
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    }
    
}

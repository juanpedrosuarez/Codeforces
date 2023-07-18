#include<bits/stdc++.h>
#define int	long long
 
using namespace std;
 
int32_t main(){
	ios_base:: sync_with_stdio(false),cin.tie(NULL);
	
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.length()-1;i+=2){
            cout<<s[i];
        }
        cout<<s[s.length()-1]<<endl;
    }
    return 0;
}

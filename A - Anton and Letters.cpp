#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set <char> c;
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            c.insert(s[i]);
        }
    }
    cout<<c.size()<<endl;
 
}

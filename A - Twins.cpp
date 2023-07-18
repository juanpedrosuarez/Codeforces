#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s,z,b;
    while(cin>>n){
        long long a[n];
        s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        s=s/2;
        sort(a,a+n);
        z=0;
        b=0;
        for(int i=n-1;i>=0;i--){
            b+=a[i];
            z++;
            if(b>s)
                break;
        }
        cout<<z<<endl;
    }
    return 0;
}

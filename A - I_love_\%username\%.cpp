#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, p;
    cin >>n>>p;
    int min(p), max(p), s=0;
	for(int i = 0; i<n; i++){
        cin>>p;
        if (p<min){
            min = p;
            s++;
        }
        if (p>max)
        {
            max = p;
            s++;
        }
    }
    cout <<s<<endl;
    return 0;
}

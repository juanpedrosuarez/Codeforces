#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int x;
    cin>>x;
                  
    int res=0;
    if(x==1 || x==11 || x==111 || x==1111){
    	switch(x){
        	case 1: { res+=1; break; }
            case 11: { res+=3; break; }
            case 111: { res+=6; break; }
            case 1111: { res+=10; break; }
        }
        cout<<res<<endl;
   }
	else if(x==2 || x==22 || x==222 || x==2222){
   		switch(x){
        	case 2: { res+=11; break; }
            case 22: { res+=13; break; }
            case 222: { res+=16; break; }
            case 2222: { res+=20; break; }
           }
           cout<<res<<endl;
  }
	else if(x==3 || x==33 || x==333 || x==3333){
         switch(x){
            case 3: { res+=21; break; }
            case 33: { res+=23; break; }
            case 333: { res+=26; break; }
            case 3333: { res+=30; break; }
         }
         cout<<res<<endl;
  }
	else if(x==4 || x==44 || x==444 || x==4444){
    	switch(x){
        	case 4: { res+=31; break; }
           	case 44: { res+=33; break; }
            case 444: { res+=36; break; }
            case 4444: { res+=40; break; }
            }
            cout<<res<<endl;
    }
	else if(x==5 || x==55 || x==555 || x==5555){
    	switch(x){
        	case 5: { res+=41; break; }
            case 55: { res+=43; break; }
            case 555: { res+=46; break; }
            case 5555: { res+=50; break; }
            }
            cout<<res<<endl;
    }
	else if(x==6 || x==66 || x==666 || x==6666){
    	switch(x){
        	case 6: { res+=51; break; }
            case 66: { res+=53; break; }
            case 666: { res+=56; break; }
            case 6666: { res+=60; break; }
            }
            cout<<res<<endl;
    }
	else if(x==7 || x==77 || x==777 || x==7777){
    	switch(x){
        	case 7: { res+=61; break; }
            case 77: { res+=63; break; }
            case 777: { res+=66; break; }
            case 7777: { res+=70; break; }
           	}
           cout<<res<<endl;
    }
	else if(x==8 || x==88 || x==888 || x==8888){
		switch(x){
        	case 8: { res+=71; break; }
            case 88: { res+=73; break; }
            case 888: { res+=76; break; }
            case 8888: { res+=80; break; }
            }
            cout<<res<<endl;
    }
	else{
		switch(x){
        	case 9: { res+=81; break; }
            case 99: { res+=83; break; }
            case 999: { res+=86; break; }
            case 9999: { res+=90; break; }
            }
            cout<<res<<endl;
	   }
	}
}

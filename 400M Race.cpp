#include <iostream>
using namespace std;

int main() {
	int t,x,y,z,temp;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(x<y){
	        if(x<z){cout<<"ALICE"<<"\n";}
	        else if(z<x){cout<<"CHARLIE"<<"\n";}
	    }
	    else if(y<=x){
	        if(y<z){cout<<"BOB"<<"\n";}
	        else if(z<y){cout<<"CHARLIE"<<"\n";}
	    }
	  
	}
	
	return 0;
}

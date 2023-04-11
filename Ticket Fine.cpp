#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(y>z){cout<<(y-z)*x<<"\n";}
	    else{cout<<0<<"\n";}
	}
	return 0;
}

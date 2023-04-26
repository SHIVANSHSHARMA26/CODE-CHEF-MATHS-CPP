#include <iostream>
using namespace std;

int main() {
	int t,x,y,z,cap;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    cap=10*x;
	    if(cap>=y){cout<<y*z<<"\n";}
	    else{cout<<cap*z<<"\n";}
	}
	return 0;
}

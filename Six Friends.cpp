#include <iostream>
using namespace std;

int main() {
    int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(3*x<2*y){cout<<x<<"\n";}
	    else{cout<<2*y<<"\n";}
	}
	return 0;
}

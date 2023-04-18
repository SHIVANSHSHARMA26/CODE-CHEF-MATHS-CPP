#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y){cout<<y<<"\n";}
	    else{cout<<x+(y-x)*2<<"\n";}
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y){cout<<7-x<<"\n";}
	    else{cout<<7-y<<"\n";}
	}
	return 0;
}

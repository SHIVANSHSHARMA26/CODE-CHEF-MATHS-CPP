#include <iostream>
using namespace std;

int main() {
	int t,a,b,x,y;
	cin>>t;
	while(t--){
	    cin>>a>>b>>x>>y;
	    if((a*b)<=(x*y)){cout<<"YES"<<"\n";}
	    else{cout<<"NO"<<"\n";}
	}
	return 0;
}

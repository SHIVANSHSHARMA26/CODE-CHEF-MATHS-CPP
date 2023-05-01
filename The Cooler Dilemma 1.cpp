#include <iostream>
using namespace std;

int main() {
	int t,x,y,m;
	cin>>t;
	while(t--){
	    cin>>x>>y>>m;
	    if((x*m)>=y){cout<<"NO"<<"\n";}
	    else{cout<<"YES"<<"\n";}
	}
	return 0;
}

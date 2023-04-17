#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y || x+200<y){cout<<"NO"<<"\n";}
	    else {cout<<"YES"<<"\n";}
	}
	return 0;
}

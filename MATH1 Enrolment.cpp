#include <iostream>
using namespace std;

int main() {
	int t,t1,t2;
	cin>>t;
	while(t--){
	    cin>>t1>>t2;
	    if(t2>t1){cout<<t2-t1<<"\n";}
	    else{cout<<0<<"\n";}
	}
	return 0;
}

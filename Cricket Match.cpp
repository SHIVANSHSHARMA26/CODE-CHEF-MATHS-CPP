#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(n<=(m*36)){cout<<"YES"<<"\n";}
	    else{cout<<"NO"<<"\n";}
	}
	return 0;
}

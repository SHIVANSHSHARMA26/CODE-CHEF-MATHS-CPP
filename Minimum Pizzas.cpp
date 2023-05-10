#include <iostream>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if((n*x)%4==0){
	    cout<<(n*x)/4<<"\n";}
	    else{cout<<((n*x)/4)+1<<"\n";}
	}
	return 0;
}

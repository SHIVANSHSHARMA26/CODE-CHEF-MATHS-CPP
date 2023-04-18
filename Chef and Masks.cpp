#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x*100>=y*10){cout<<"CLOTH"<<"\n";}
	    else{cout<<"DISPOSABLE"<<"\n";}
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t,R1,R2,R3;
	cin>>t;
	while(t--){
	    cin>>R1>>R2>>R3;
	    if(R1>R2+R3){cout<<"YES"<<"\n";}
	    else if(R2>R1+R3){cout<<"YES"<<"\n";}
	    else if(R3>R1+R2){
	        cout<<"YES"<<"\n";
	    }
	    else{cout<<"NO"<<"\n";}
	}
	return 0;
}

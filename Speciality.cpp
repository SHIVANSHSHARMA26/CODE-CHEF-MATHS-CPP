#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(x>y && x>z){cout<<"SETTER"<<"\n";}
	    else if(y>x && y>z){cout<<"TESTER"<<"\n";}
	    else if(z>x && z>y){cout<<"EDITORIALIST"<<"\n";}
	    else{cout<<"NONE"<<"\n";}
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(x<=(z*2)+y){cout<<"Qualify"<<"\n";}
	    else {cout<<"NotQualify"<<"\n";}
	}
	return 0;
}

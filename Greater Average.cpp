#include <iostream>
using namespace std;

int main() {
	int t;
	float a,b,c,avg;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    avg=(a+b)/2;
	    if(avg>c){cout<<"YES"<<"\n";}
	    else{cout<<"NO"<<"\n";}
	}
	return 0;
}

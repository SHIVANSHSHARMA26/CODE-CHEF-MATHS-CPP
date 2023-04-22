#include <iostream>
using namespace std;

int main() {
	int t,x1,x2,x3;
	cin>>t;
	while(t--){
	    cin>>x1>>x2>>x3;
	    if(x1<=(x2*x3)){
	        cout<<"YES"<<"\n";
	    }
	    else{cout<<"NO"<<"\n";}
	    
	}
	return 0;
}

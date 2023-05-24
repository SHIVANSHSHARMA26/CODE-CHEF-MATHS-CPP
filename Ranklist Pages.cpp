#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x%25==0){
	        cout<<(x/25)<<"\n";
	    }
	    else{cout<<(x/25)+1<<"\n";}
	}
	return 0;
}

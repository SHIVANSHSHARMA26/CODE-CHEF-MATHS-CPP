#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(((a+b)/2)<35){cout<<"Fail"<<"\n";}
	    else if(((c+b)/2)<35){cout<<"Fail"<<"\n";}
	    else if(((a+c)/2)<35){cout<<"Fail"<<"\n";}
	    else{cout<<"Pass"<<"\n";}
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    x=x*10;
         y=y*5;
	    if(x>y){cout<<"FIRST"<<"\n";}
	    else if(x<y){cout<<"SECOND"<<"\n";}
	    else if(y=x){cout<<"ANY"<<"\n";}
	}
	return 0;
}

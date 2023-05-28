#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    x=x*10;
         y=y*5;
	    cout<<x<<"\n"<<y;
	   
	    if(x>y){cout<<"FIRST"<<"\n";}
	    else if(x=y){cout<<"ANY"<<"\n";}
	    else if(x<y){cout<<"SECOND"<<"\n";}
	}
	return 0;
}

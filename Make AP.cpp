#include <iostream>
using namespace std;

int main() {
    int t,x,y,sep;
    cin>>t;
    while(t--){
        cin>>x>>y;
        sep=y-x;
        if(sep%2==0){cout<<(sep/2)+x<<"\n";}
        else{cout<<-1<<"\n";}
    }
	
	return 0;
}

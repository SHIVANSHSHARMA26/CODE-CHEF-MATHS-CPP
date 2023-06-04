#include <iostream>
using namespace std;

int main() {
int t,x,ans;
cin>>t;
ans=1;
while(t--){
    
    cin>>x;
    for(int i=1;i<=x;i++){
        ans=ans*i;
        
    }cout<<ans<<"\n";
    ans=1;
}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t,x,y,buying_price,new_selling_price;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    buying_price=x-y;
	    new_selling_price =(x*0.1)+x;
	    cout<<new_selling_price-buying_price<<"\n";
	    
	}
	return 0;
}

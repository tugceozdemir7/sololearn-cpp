#include <iostream>
using namespace std;

int main() {
    int ages[5];
    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
   }
   float minage=ages[0];
    for(int x=0;x<5;++x){
    	
    	if (minage>ages[x]){
    		minage=ages[x];
		}
		
	}
	    
	    cout<<"the ticket's price for one customer is=10"<<endl;
	    cout<<"there is 5 customer. so the price must be="<<5*10<<endl;
	   cout<<"the youngest customer's age is="<<minage<<endl;
	   cout<<"the discount is %"<<minage<<endl;
	   float price=50-(minage/100);
	   cout<<"so that's the price="<<price<<endl;
    

    
    return 0;
}

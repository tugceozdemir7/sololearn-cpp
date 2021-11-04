#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    
    int ud=x %10;
	//cout<<"units digit="<<ud<<endl;
	int td = ((x %100) - ud)/10;
	//cout<<"tens digit="<<td<<endl;
	int hd = (((x %1000) - ud -(10*td))/100);
	//cout<<"hundreds digit="<<hd<<endl;
	int thd = ((x%10000) - ud -(10*td + 100*hd))/1000;
	//cout<<"thousands digit="<<thd<<endl;
	int tthd = ((x%100000) - ud -(10*td + 100*hd + 1000*thd))/10000;
	//cout<<"ten thousands digit="<<tthd<<endl;
		if(x<10){
		
		return 1;
	}
	

	
		if(x<100){
		
	
	if(ud==td){
		return 1;
	}
	else{
		return 0;
	}
}
	if(x<1000){
		
	
	if(ud==hd||ud==hd==td){
		return 1;
	}
	else{
		return 0;
	}
}
	if(x<10000){
		
	
	if(ud==thd&td==hd||ud==td==hd==thd){
		return 1;
	}
	else{
		return 0;
	}
}
if(x<100000){
		
	
	if(ud==tthd&td==thd||ud==td==hd==thd){
		return 1;
	}
	else{
		return 0;
	}
}
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
	/*int array[]={1,2,3,4};
	int *ptr=array;
	cout<<ptr<<endl;
	ptr=ptr+1;
	cout<<"pointerın yeni değeri"<<ptr<<endl;
	ptr=&array[2];
	cout<<"2.indexin adresi"<<ptr<<endl;*/
	
	string array[]={"Mustafa","Murat","Coşkun"};
	string *ptr=array;
	cout<<ptr+1<<endl;//adresi gösterir
	cout<<*(ptr+1)<<endl;//1.veriyi gösterir
	cout<<ptr[1]<<endl;//"""
	cout<<array[1]<<endl;//"""
	
	return 0;
}

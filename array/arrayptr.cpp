#include<iostream>
using namespace std;
int main(){
	/*int array[]={1,2,3,4};
	int *ptr=array;
	cout<<ptr<<endl;
	ptr=ptr+1;
	cout<<"pointer�n yeni de�eri"<<ptr<<endl;
	ptr=&array[2];
	cout<<"2.indexin adresi"<<ptr<<endl;*/
	
	string array[]={"Mustafa","Murat","Co�kun"};
	string *ptr=array;
	cout<<ptr+1<<endl;//adresi g�sterir
	cout<<*(ptr+1)<<endl;//1.veriyi g�sterir
	cout<<ptr[1]<<endl;//"""
	cout<<array[1]<<endl;//"""
	
	return 0;
}

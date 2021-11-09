#ifndef BIRTHDAY_H
#define BIRTHDAY_H
using namespace std;
#include<iostream>

class Birthday
{
	public:
		Birthday(int d,int m,int y)
		:day(d),month(m),year(y)
		{
				
	}
			void printdate(){
				cout<<day<<"/"<<month<<"/"<<year<<"/"<<endl;
			
}
	
	private:
		int day;
		int month;
		int year;
		
};
#endif

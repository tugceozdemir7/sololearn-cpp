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

class Person{
	public:
		Person(string n,Birthday b)
		:name(n),bd(b)
		{
		}
		void printinfo(){
			cout<<name<<endl;
			
		}
	private:
		string name;
		Birthday bd;
};
#endif

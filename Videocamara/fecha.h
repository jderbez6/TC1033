#include<string>
#include<iostream>


using namespace std;

#pragma once  

class fecha
{
	protected:
		int day;
		string month;
		int year;

	
	public:
		fecha();
		fecha(int theDay, string theMonth, int theYear);
		
		void setDay(int theDay);
		int getDay();
	
		void setMonth(string theMonth);
		string getMonth();
		
		void setYear(int theYear);
		int getYear();
		
		void printDate();
};
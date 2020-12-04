#include"fecha.h"
using namespace std;

fecha::fecha()
{
	setDay(01);
	setMonth("enero");
	setYear(1990);
}
	
fecha::fecha(int theDay, string theMonth, int theYear)
{
	setDay(theDay);
	setMonth(theMonth);
	setYear(theYear);
}
		
void fecha::setDay(int theDay)
{
	day = theDay;
}

int fecha::getDay()
{
	return day;
}
	
void fecha::setMonth(string theMonth)
{
	month = theMonth;
}

string fecha::getMonth()
{
	return month;
}

void fecha::setYear(int theYear)
{
	year = theYear;
}

int fecha::getYear()
{
	return year;
}

void fecha::printDate()
{
	cout << day << "/" << month << "/" << year;
}



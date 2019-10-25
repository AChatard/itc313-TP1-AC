#ifndef _date_h
#define _date_h

class Date {
public: 
	Date(int day, int month, int year); //constructeur classe Date
	int getMonth();						//accesseurs variables privées
	int getDay();
	int getYear();


private:
	int m_month;
	int m_day;
	int m_year; 

};

#endif
#include <string>
#include "Date.h" //intègre le fichier .h


Date::Date(int day, int month, int year) { //implementation du constructeur
m_month=month;
m_day=day;
m_year=year;
}

int Date::getMonth(){ 			//déclaration méthodes 
	return m_month;
} 

int Date::getDay(){
	return m_day;
}

int Date::getYear(){
	return m_year;
}
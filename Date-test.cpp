#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Date.h"

using namespace std;



int main(){

int a=0, j=0, m=0, y=0;

	Date anniv(1,10,1999);
	cout << "Je suis né le " << anniv.getDay() << " " 
	<< anniv.getMonth() << " " << anniv.getYear() <<
	endl;

cout << "voulez vous modifier la date ? (Appuyer sur 1)" << endl;
cin >> a;

if (a==1)
 {
 	cout << "Entrez un jour" << endl;
 	cin >> j;

 	cout << "Entrez un mois" << endl;
 	cin >> m;

 	cout << "Entrez une année" << endl;
 	cin >> y;

 	Date NewDate(j,m,y);

 	cout << "la nouvelle date est " << NewDate.getDay() << " " 
	<< NewDate.getMonth() << " " << NewDate.getYear() <<
	endl;
 } 



return 0;
}
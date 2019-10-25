#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Date.h"

using namespace std;

int main(){
	Date anniv(1,10,1999);
	cout << "Je suis né le " << anniv.getDay() << " " 
	<< anniv.getMonth() << " " << anniv.getYear() <<
	endl;

return 0;
}
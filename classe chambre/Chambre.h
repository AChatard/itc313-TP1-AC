#include <iostream>
#include <string>
#ifndef _chambre_h
#define _chambre_h 


class Chambre{

public:
	Chambre(int id, std::string type, int prix);
	void setChambre(int id, std::string type, int prix); 


private:
	int m_id;
	std::string m_type;
	int m_prix;

};
#endif
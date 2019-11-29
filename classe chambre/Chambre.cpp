#include "Chambre.h"

Chambre::Chambre(int id, std::string type, int prix) {

	m_id = id;
	m_type = type; 
	m_prix = prix;

	std::cout << "Voici l'id de la chambre: " << id << std::endl; 
	std::cout << "Voici le prix de la chambre: " << prix << std::endl;
	std::cout << "Voici le type de la chambre: " << type << std::endl;
	std::cout << " " << std::endl;
}

void Chambre::setChambre(int id, std::string type, int prix){

	m_id = id;
	m_type = type; 
	m_prix = prix;

	std::cout << "Voici le nouvel id de la chambre: " << id << std::endl; 
	std::cout << "Voici le nouveau prix de la chambre: " << prix << std::endl;
	std::cout << "Voici le nouveau type de la chambre: " << type << std::endl;

}
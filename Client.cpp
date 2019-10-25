/*
	file: Client.cpp
	author: hugo
	date: 25/10/19
	course: c/c++
	summury: definition de la classe Client
*/

#include "Client.h"
#include <string>

// definition du constructeur
Client::Client(int id, string nom, string prenom){		
	m_id=id;
	m_nom=nom;
	m_prenom=prenom;
	m_nbReservation=0;
}

// definition des accesseurs
int Client::getId(){
	return m_id;
}

string Client::getNom(){
	return m_nom;
}

string Client::getPrenom(){
	return m_prenom;
}

int Client::getNbReservation(){
	return m_nbReservation;
}


/*
	file: Client.h
	author: hugo
	date: 25/10/19
	course: c/c++
	summury: declaration de la classe Client
*/

#ifndef _Client_h 
#define _Client_h

	#include <string>
	using namespace std;

	class Client{
	  public:
		Client(int id, string nom, string prenom);		// constructeur
		int getId();				// 
		string getNom();			//	accesseur x4
		string getPrenom();			//
		int getNbReservation(); 	//


	  private:
		int m_id; 		//identifiant unique
		string m_nom;
		string m_prenom;
		int m_nbReservation;		// nombre de reservation deja effectuée par le client

	};	// fin class

#endif
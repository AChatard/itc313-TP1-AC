/** 
  * File:     library.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Library class declaration for managing books
  */

#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>
#include "book.h"

class Library {
public:
	Library(std::string name="Default library");
	std::string getName() const;
	void addBook(Book b);
	void display() const;
	int getBooksNumber() const;
	Book& getBook(int i);
	void updateBookAuthor(Book& b, std::string author);
	void printAd(std::string msg, int i);
private:
	std::vector<Book> m_books;
	std::string m_name;
};


#endif // LIBRARY_H



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:01:53 by mg                #+#    #+#             */
/*   Updated: 2025/10/03 16:52:04 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


// Create a program that takes three parameters in the following order: a filename and
// two strings, s1 and s2.
// It must open the file <filename> and copy its content into a new file
// <filename>.replace, replacing every occurrence of s1 with s2.
// Using C file manipulation functions is forbidden and will be considered cheating. All
// the member functions of the class std::string are allowed, except replace. Use them
// wisely!
// Of course, handle unexpected inputs and errors. You must create and turn in your
// own tests to ensure that your program works as expected.


//  ./exec <file a lire> <mot a trouver> <mot a remplacer>


// [1] ouvrir le fichier test, check si possible sinon message d'erreur

// [2] check si empty -> message d'erreur

// [3] lire le fichier complet + copy

// [4] cree un fihcier ayant le meme nom que le file lu et ajouter [.replace]

// [5] copier le contenu du file de lecture

// [6] check si s1 est dans le fichier si oui s1 = s2


// [DOC] :
//
// ofstream -> crée + ecrire
// ifstream -> read only
//
// std::istream::peak() -> examine le char et le gare dans le flux :: peak() == EOF au start c'est que empty voir .empty
//

int main(int , char **av) {
	
	// if (ac != 4)
	//	return 0;
	
 // apre cree un nouveau fihcier pour output
	
	std::string outputTest; 

	std::ifstream myReadFile(av[1]);

	if (!myReadFile.is_open()) {
		std::cout << "cannot open this file" << std::endl;
		return -1;
	}

	if (myReadFile.peek() == EOF) {
		std::cout << "File is empty" << std::endl;
		return -1;
	}

	
	while (std::getline(myReadFile, outputTest)) {
		std::cout << outputTest << std::endl;
	}

	myReadFile.close();
}
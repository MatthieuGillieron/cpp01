/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:01:53 by mg                #+#    #+#             */
/*   Updated: 2025/10/08 11:46:09 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// [DOC] :
//
// ofstream -> crée + ecrire
// ifstream -> read only
//
// std::istream::peak() -> examine le char et le gare dans le flux :: peak() == EOF au start c'est que empty voir .empty
//



int	parseFile(char *file) {

	std::ifstream readFile(file);

	if (!readFile.is_open()) {
		std::cout << "Cannot open this file" << std::endl;
		return -1;
	}

	if (readFile.peek() == EOF) {
		std::cout << "File is empty !" << std::endl;
		return -1;
	}
	return 0;
}



int main(int ac, char **av) {
	
	if (ac != 4) {
		std::cout << "exec: <filename> <s1> <s2>" << std::endl;
		return 0;
	}
	
	
	
	parseFile(av[1]);
	std::ifstream file(av[1]);
	
	std::string fileName = av[1];
	std::ofstream createFile(fileName + ".replace");
	
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string line; 

	while (std::getline(file, line)) {

		std::string replacedLine;
		std::string::size_type lastPos = 0;
		std::string::size_type pos = line.find(s1, lastPos);


		while (pos != std::string::npos)
		{
			replacedLine.append(line, lastPos, pos - lastPos);
			replacedLine += s2;

			lastPos = pos + s1.size();
			pos = line.find(s1, lastPos);
		}
		
		replacedLine.append(line, lastPos, std::string::npos);
		std::cout << replacedLine;
		if (!file.eof())
			std::cout << std::endl;

		createFile << line << "\n";
	}


	file.close();
}



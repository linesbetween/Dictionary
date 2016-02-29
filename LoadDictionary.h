// Load binary file into vector of objects.
// LoadFile.h
// Hanfei Xu

#ifndef LOADDIC_H
#define LOADDIC_H

#include "EntryStruct.h"
#include "EntryClass.h"
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void loadDictionary(string fileName, std::vector<Entry> &dic){
	  
	ifstream binFile;
	EntryStruct buffer;

	binFile.open(fileName, ios::in | ios::binary);
	if (!binFile){
		cout << "binary file not exist.\n";
		return;
	}

	while (!binFile.eof()){
		binFile.read(reinterpret_cast<char *>(&buffer), sizeof(buffer));
		cout << left;
		cout << setw(4) << buffer.prefix  << setw(20) << buffer.word 
			<< setw(20) << buffer.meaning  << setw(20) << buffer.type << "\n";
		dic.emplace_back(Entry(buffer));
		auto it = dic.end() - 1;
		cout
			<< setw(4) << it->getEntry().prefix << setw(20) << it->getEntry().word
			<< setw(20) << it->getEntry().meaning << setw(20) << it->getEntry().type
			<< "Added to vecter \n";
	}


	binFile.close();

}


#endif
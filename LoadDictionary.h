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
		//cout << buffer.prefix << " " << buffer.word << " " << buffer.type << " " << buffer.meaning << "\n";
		dic.emplace_back(Entry(buffer));
		cout << "one record read into vector\n";
	}


	binFile.close();

}


#endif
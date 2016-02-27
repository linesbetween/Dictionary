// Display menu of multi language dictionary
// Print content or search. 
// DictionaryMain.cpp
// Hanfei Xu

#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>
#include <conio.h>

#include "Txt2Bin.h"
#include "LoadDictionary.h"

char menu1();
char menu2(char);
void displayDictPart(char dictType, char wordType[]);

int main(){


	vector<Entry> dictGeEn, dictFrEn, dictLaEn, dictHeEn;

	/* test loading
	if (txt2Bin("dic1.txt", "dic1.dat"))
		loadDictionary("dic1.dat", temp);
	*/

	char choice1, choice2;
	char type[TYPE_SIZE], all[] = {'a','l', 'l'};
	int dictionaryCode;

	for (;;){
		choice1 = menu1();
		if (int(choice1) == 1){

			cout << "choice 1 selected\n";
			/*
			//check if loaded

			//load dictionaries, check file exis 
			if (txt2Bin("dictGeEn.txt", "dictGeEn.dat"))
				loadDictionary("dictGeEn.dat", dictGeEn);
			if (txt2Bin("dictFrEn.txt", "dicFrEn.dat"))
				loadDictionary("dicFrEn.dat", dictFrEn);
			if (txt2Bin("dictLaEn.txt", "dicLaEn.dat"))
				loadDictionary("dicLaEn.dat", dictLaEn);
			if (txt2Bin("dicHeEn.txt", "dicHeEn.dat"))
				loadDictionary("dictHeEn.dat", dictHeEn);
				*/
			//break, back to main menu
			continue;
		}
		else if (choice1 == 'A'){
			//search
			cout << "choice 10 selected \n";
		}
		else if (choice1 == 'B'){ //quit
			system("cls");
			cout << "See you next time \n";
			exit(0);
		}
		else{ 
			choice2 = menu2(choice1);
			switch (choice1){
			
			}
		}
	}

	_getch();
	return 0;
}



char menu1(){
	char choice1 = '\0', sndDigit ='\0';
	while (true){
		system("cls");
		cout << "***Dictionary*** \n";
		cout << "(1) Create the word list \n";
		cout << "(2) German to English \n";
		cout << "(3) French to English \n";
		cout << "(4) Latin to English \n";
		cout << "(5) Hebrew to English \n";
		cout << "(6) English to German \n";
		cout << "(7) English to French \n";
		cout << "(8) English to Latin \n";
		cout << "(9) English to Hebrew \n";
		cout << "(10) Search for a word in one language and return in another language \n";
		cout << "(11) Quit \n\n";
		cout << "Please enter your choice: ";
		choice1 = _getch();
		sndDigit = _getch();
		cin.ignore(100, '\n');

		//convert 10 and 11 into one character, 
		if (choice1 == '1' && sndDigit == '0'){
			choice1 = 'A';
		}
		else if (choice1 == '1' && sndDigit == '1'){
			choice1 = 'B';
		}
		//validate for 1-9 input
		else if (int(choice1) <49 || int(choice1) >57){
			cout << "Please entner integer between 1 to 11 \n";
			_getch();
			continue;
		}
		//retunr 1 - 9 and discard sndDigit
		else return choice1;
	};
}

char menu2(char choice1){
	char choice2;
	switch (choice1){
	case '2': cout << "German to English \n"; break;
	case '3': cout << "French to English \n"; break;
	case '4': cout << "Latin to English \n"; break;
	case '5': cout << "Hebrew to English \n"; break;
	case '6': cout << "English to German \n"; break;
	case '7': cout << "English to French \n"; break;
	case '8': cout << "English to Latin \n"; break;
	case '9': cout << "English to Hebrew \n"; break;
	default: cout << "No such choice"; return '\0';
	}

	while (true){
		cout << "(1) nouns \n";
		cout << "(2) verbs \n";
		cout << "(3) prepositions \n";
		cout << "(4) adjectives \n";
		cout << "(5) adverbs \n";
		cout << "(6) cardinal numbers \n";
		cout << "(7) all \n";
		cout << "(8) return to level 1 menu \n";
		choice2 = _getch();
		cin.ignore(100, '\n');
		if (int(choice2) < 50 || int(choice2) > 57){
			cout << "Please entner integer between 1 to 8\n";
			_getch();
			continue;
		}
		else return choice2;
	};

}

void displayDictPart(char dictType, char wordType[]){

}
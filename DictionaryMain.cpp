
#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>
#include <conio.h>

#include "Txt2Bin.h"
#include "LoadDictionary.h"

char menu1();
char menu2(char);

int main(){


	vector<Entry> dict;

	if (txt2Bin("dic1.txt", "dic1.dat"))
		loadDictionary("dic1.dat", dict);

	_getch();
	return 0;
}

/*
void showMene(){ // should be main()

	char choice1, choice2;

	for (;;){
		choice1 = menu1();
		if (int(choice1) == 1){
			//load dictionaries
		}
		else if (int(choice1) == 11){
			//quit
		}
		else{
			choice2 = menu2(choice1);
		}
	}
}


char menu1(){
	char choice1;
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
		cin.ignore(100, '\n');
		if (int(choice1) <= 1 || int(choice1) >= 11){
			cout << "Please entner integer between 1 to 11 \n";
			continue;
		}
		else return choice1;
	};
}

char menu2(char choice1){
	char choice2;
	switch (choice1){
	case '2': cout << "German to English \n";
	case '3': cout << "French to English \n";
	case '4': cout << "Latin to English \n";
	case '5': cout << "Hebrew to English \n";
	case '6': cout << "English to German \n";
	case '7': cout << "English to French \n";
	case '8': cout << "English to Latin \n";
	case '10': cout << "English to Hebrew \n";
	default: cout << "No such choice";
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
		if (int(choice2) <= 1 || int(choice2) >= 8){
			cout << "Please entner integer between 1 to 8\n";
			continue;
		}
		else return choice2;
	};

}*/
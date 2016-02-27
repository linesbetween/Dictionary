#ifndef ENTRYCLASS_H
#define ENTRYCLASS_H
#include "EntryStruct.h";
#include <cstring>

class Entry{
private:
	EntryStruct data;

public:

	Entry(EntryStruct en){

		strncpy_s(data.meaning, en.meaning, MEANING_SIZE);
		data.meaning[MEANING_SIZE - 1] = '\0';
		strncpy_s(data.prefix, en.prefix, PRE_SIZE);
		data.meaning[PRE_SIZE - 1] = '\0';
		strncpy_s(data.type, en.type, TYPE_SIZE);
		data.meaning[TYPE_SIZE - 1] = '\0';
		strncpy_s(data.word, en.word, WORD_SIZE);
		data.meaning[WORD_SIZE - 1] = '\0';
		
	}

	/*
	virtual ~Entry(){
		delete data.meaning;
		delete data.prefix;
		delete data.type;
		delete data.word;
	}
	*/

	EntryStruct getEntry() const{
		return data;
	}

	// Less-than operator
	bool operator< (const Entry& en) const
	{
		int result{ strcmp(data.word, en.data.word) };
		return (result < 0 );
	}


};

#endif
#pragma once
#include <iostream>
#include <string>
// Tam
#include "WORD.h"

using namespace std;

class Dictionary
{
private:
	WORD* Dic;
	int Size;

	int Hash();
	int Insert();
	int Delete();
	int Search();
public:
	Dictionary& SortAsc();
	Dictionary& SortDes();
	int ImportDictionary(const char* local);
	int ExportDictionary(const char* local);
	int SearhWord(string key);
	void Print();

	Dictionary();
	~Dictionary();
};


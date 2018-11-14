#pragma once
#include <iostream>
#include <string>

using namespace std;

class WORD
{
private:
	string Key;
	string Meaning;
public:
	// Getter
	string GetKey()
	{
		return Key;
	}
	string GetMeaning()
	{
		return Meaning;
	}

	// Setter
	WORD* SetKey(string Key)
	{
		this->Key = Key;
		return this;
	}
	WORD* SetMeaning(string Meaning)
	{
		this->Meaning = Meaning;
		return this;
	}

	void Import();
	void Export();
	void Input();
	void Output();

	WORD();
	WORD(string key, string meaning);
	~WORD();
};


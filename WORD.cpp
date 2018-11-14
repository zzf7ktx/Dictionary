#include "WORD.h"

void WORD::Output()
{
	cout << "Key: " << Key << endl;
	cout << "Meaning: " << endl << Meaning << endl;
}

void WORD::Input()
{
	cout << "Input key: ";
	cin >> Key;
	cout << "Meaning: ";
	cin >> Meaning;
}

void WORD::Import()
{
	string temp = "t";
	int i = 0;

	while (temp == "" || temp == "t")
		getline(cin, temp);

	i = temp.find("  ");

	Key = temp.substr(0, i);
	Meaning = temp.substr(i + 2);
}

void WORD::Export()
{
	cout << Key << "  " << Meaning;
}

WORD::WORD()
{
	Key = "";
	Meaning = "";
}

WORD::WORD(string key, string meaning)
{
	Key = key;
	Meaning = meaning;
}

WORD::~WORD()
{
}

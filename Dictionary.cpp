#include "Dictionary.h"

int Dictionary::ImportDictionary(const char* local)
{
	FILE* f;
	WORD* tam = new WORD;
	string blank;
	
	freopen_s(&f, "Dictionary.txt", "r", stdin);

	cin >> Size;

	Dic = new WORD[Size];

	getline(cin, blank);
	getline(cin, blank);
	int i = 0;
	while (!cin.eof())
	{
		
		Dic[0].Import();
		i++;
		getline(cin, blank);
		cout << i << " ";
		Dic[0].Output();
	}

	return 1;
}

void Dictionary::Print()
{
	for (int i = 0; i < Size; i++)
	{
		Dic[i].Output();
		cout << endl << endl;
	}
}

Dictionary& Dictionary::SortAsc()
{
	return *this;
}

Dictionary& Dictionary::SortDes()
{
	return *this;
}

Dictionary::Dictionary()
{
}


Dictionary::~Dictionary()
{
}

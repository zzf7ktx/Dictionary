#include "Dictionary.h"

int main()
{
	Dictionary newDic;
	newDic.ImportDictionary("Dic");
	newDic.Print();

	cin.ignore();
	cin.get();
	return 0;
}
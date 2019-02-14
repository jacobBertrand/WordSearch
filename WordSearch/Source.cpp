#include <iostream>
#include <string>
#include <vector>
#include "WordSearch.h"

using namespace std;

void main()	{
	//WordSearch object
	WordSearch compareFiles;
	//file names to be given to WordSearch object
	string keywordFileName;
	string compareWordFileName;
	//Size of the vectors stored in the WordSearch object
	int keywordSize;
	int compareWordSize;
	//vector for holding the number of times each keyword appears
	vector<int> keywordCount;


	cout << "Enter the file name of the keywords\n";
	cout << ">";
	cin >> keywordFileName;

	compareFiles.readKeywords(keywordFileName);
	keywordSize = compareFiles.getKeywordSize();

	cout << "Enter the file name of the words being compared\n";
	cout << ">";
	cin >> compareWordFileName;

	compareFiles.readKeywords(compareWordFileName);
	compareWordSize = compareFiles.getCompareWordSize();

	//make a spot for each keyword in the vector
	for (int i = 0; i < keywordSize; i++) { keywordCount.push_back(0); }

	for (int i = 0; i < keywordSize; i++)
	{
		for (int r = 0; r < compareWordSize; r++)
		{
			if (compareFiles.compare(i, r))
			{
				keywordCount[i]++;
			}
		}
	}

	for (int i = 0; i < keywordSize; i++)
	{
		cout << compareFiles.getKeyword(i) << ":" << keywordCount[i];
	}

	system("pause");

}
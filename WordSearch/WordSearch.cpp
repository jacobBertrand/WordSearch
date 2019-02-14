#include "WordSearch.h"

//using namespace std;

//Define constructor and deconstructor
WordSearch::WordSearch() {}
WordSearch::~WordSearch() {}

void WordSearch::readKeywords(string fileName) 
{
	//clear out the vector so it is ready for the new file
	keywords.clear();

	//open the given file
	ifstream inFile(fileName);
	string inWord;
	//add each word to the vector one at a time
	for (int i = 0; i < maxWords; i++)
	{
		if (inFile.eof()) { break; }
		inFile >> inWord;
		transform(inWord.begin(), inWord.end(), inWord.begin(), toupper);
		keywords.push_back(inWord);
	}
	//close the file
	inFile.close();
}

void WordSearch::readCompareWords(string fileName)
{
	//clear the vector so it is ready for the new file
	compareWords.clear();

	//open the given file
	ifstream inFile(fileName);
	string inWord;
	//add each word to the vector one at a time
	for (int i = 0; i < maxWords; i++)
	{
		if (inFile.eof()) { break; }
		inFile >> inWord;
		transform(inWord.begin(), inWord.end(), inWord.begin(), toupper);
		compareWords.push_back(inWord);
	}
	//close the file
	inFile.close();
}

int WordSearch::getKeywordSize() { return keywords.size(); }
int WordSearch::getCompareWordSize() { return compareWords.size(); }

string WordSearch::getKeyword(int position)
{
	return keywords[position];
}

bool WordSearch::compare(int keywordPlace, int compareWordPlace)
{
	//compare the words in the given position
	if (keywords[keywordPlace] == compareWords[compareWordPlace])
	{
		return true;
	}
	else
	{
		return false;
	}
}
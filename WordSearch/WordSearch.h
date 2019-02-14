#ifndef WordSearch_h
#define WordSearch_h

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

class WordSearch{
public:
	//basic constructor and deconstructor
	WordSearch();
	~WordSearch();

	//read in a file with given name
	void readKeywords(string fileName);
	void readCompareWords(string fileName);

	//get the size of the private vectors
	int getKeywordSize();
	int getCompareWordSize();

	//returns the keyword of the given vector position
	string getKeyword(int position);

	//compare the words in the given vector positions
	bool compare(int keywordPlace, int comparewordPlace);

private:
	//vectors holding the keywords and words to be compared to
	vector<string> keywords;
	vector<string> compareWords;
	//maximum number of readable words
	const int maxWords = 1024;

}



#endif
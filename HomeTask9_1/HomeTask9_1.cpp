#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Words;
	string BiggestWord;
	string CurrentWord;
	int BiggestWordLenth = 0;
	int WordLenth = 0;

	getline(cin, Words);

	for (int i = 0; i < Words.length(); i++)
	{
		if (Words[i] == ',' || Words[i] == ' ' || Words[i] == '.' || Words[i] == '!' || Words[i] == '?' || Words[i] == '-')
		{
			if (WordLenth > BiggestWordLenth)
			{
				BiggestWord = CurrentWord;
				BiggestWordLenth = WordLenth;
			}

			CurrentWord = "";
			WordLenth = 0;
		}
		else
		{
			CurrentWord += Words[i];
			WordLenth++;
		}
	}
	cout << BiggestWord;
}
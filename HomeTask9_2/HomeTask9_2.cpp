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
	bool isUnic = true;

	getline(cin, Words);

	for (int i = 0; i < Words.length(); i++)
	{
		if (Words[i] == ',' || Words[i] == ' ' || Words[i] == '.' || Words[i] == '!' || Words[i] == '?' || Words[i] == '-')
		{
			if (WordLenth > BiggestWordLenth && isUnic)
			{
				BiggestWord = CurrentWord;
				BiggestWordLenth = WordLenth;
			}

			CurrentWord = "";
			WordLenth = 0;
			isUnic = true;
		}
		else
		{
			CurrentWord += Words[i];
			WordLenth++;
		}

		if (Words[i] == Words[i+1])
		{
			isUnic = false;
		}
	}
	cout << BiggestWordLenth;
}
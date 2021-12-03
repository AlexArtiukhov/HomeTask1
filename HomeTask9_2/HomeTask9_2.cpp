#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string  Word;
    string BiggestWord;
    string CurrentWord;
    int BiggestWordLenth = 0;
    int WordLenth = 0;

    getline(cin, Word);

    for (int i = 0; i < Word.length(); i++)
    {
        if (Word[i] == ',' || Word[i] == ' ' || Word[i] == '.' || Word[i] == '!' || Word[i] == '?' || Word[i] == '-')
        {
            if (WordLenth > BiggestWordLenth)
            {
                BiggestWord = CurrentWord;
                BiggestWordLenth = WordLenth;
            }

            CurrentWord = "";
            WordLenth = 0;
        }
        else if (i < Word.length())
        {
            CurrentWord += Word[i];
            WordLenth++;
        }
    }

    cout << BiggestWordLenth;
}
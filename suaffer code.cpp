#include <iostream>
using namespace std;

int main()
{
    string word;
    int key;

    cout << "Enter one word: ";
    cin >> word;

    cout << "Enter key (shift number): ";
    cin >> key;

    for (int i = 0; i < word.length(); i++)
    {
        word[i] = word[i] + key;
    }

    cout << "Encoded word: " << word << endl;

    for (int i = 0; i < word.length(); i++)
    {
        word[i] = word[i] - key;
    }

    cout << "Decoded word: " << word << endl;

    return 0;
}

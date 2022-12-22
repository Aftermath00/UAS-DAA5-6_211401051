// This is non dynamic programming codes

#include <iostream>
#include <string>

using namespace std;

int KnuthMorrisPratt(string pattern, string randomWord)
{
    int m = pattern.length();
    int n = randomWord.length();
 
    int i = 0;
    int j = 0;
 
    cout << "Initial values: i = " << i << ", j = " << j << endl;
 
    while (i < n) {
        if (pattern[j] == randomWord[i]) {
            j++;
            i++;
            cout << "i = " << i << ", j = " << j << endl;
        }
 
        if (j == m)
            return i - j;
 
        else if (i < n && pattern[j] != randomWord[i]) {
            if (j != 0) {
                j = j - 1;
                cout << "i = " << i << ", j = " << j << endl;
            }
            else {
                i = i + 1;
                cout << "i = " << i << ", j = " << j << endl;
            }
        }
    }
    return -1;
}

int main()
{
    system("CLS");
    string pattern;
    string randomWord = "kufaraflwokhfjkxhxqvzclbqxasdazmiycenjdzvwmtgegegegweabav";
    cout << "Input pattern u wanna find : ";
    cin >> pattern;
    int index = KnuthMorrisPratt(pattern, randomWord);
 
    if (index != -1)
        cout << "Pattern found at position " << index << endl;
    else
        cout << "Pattern not found" << endl;
 
    return 0;
}
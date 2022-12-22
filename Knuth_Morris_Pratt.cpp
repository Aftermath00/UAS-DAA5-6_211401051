#include <iostream>
#include <string>

using namespace std;

int KnuthMorrisPratt(string pattern, string randomWord)
{
    int m = pattern.length();
    int n = randomWord.length();
 
    // Create the KMP table
    int kmpTable[m];
    int i = 0;
    kmpTable[0] = 0;
    int j = 1;
 
    while (j < m) {
        if (pattern[i] == pattern[j]) {
            kmpTable[j] = i + 1;
            i++;
            j++;
        } 
        else {
            if (i != 0) {
                i = kmpTable[i - 1];
            } else {
                kmpTable[j] = 0;
                j++;
            }
        }
    }
 
    // Print the KMP Table
    for(int i = 0; i < m; i++)
    {
        cout << pattern[i] << ": " << kmpTable[i] << endl;
    }

    // Search for the pattern in the random word 
    i = 0;
    j = 0;
    while (i < n) {
        if (pattern[j] == randomWord[i]) {
            j++;
            i++;
        }
 
        if (j == m) {
            cout << "Found pattern at position ";
            for (int k = 0; k < m; k++) {
                cout << i - j + k << " ";
            }
            cout << endl;
            return i - j;
        }
 
        else if (i < n && pattern[j] != randomWord[i]) {
            if (j != 0)
                j = kmpTable[j - 1];
            else
                i = i + 1;
        }
        // Print out each step
        cout << "i: " << i << ", j: " << j << endl;
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
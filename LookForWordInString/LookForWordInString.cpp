#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <vector>


using namespace std;
int main() {
    string text;
    string word;
    int count = 0;
    cout << "Input text, then word: \n";
    getline(cin, text);
    getline(cin, word);
    
     for (int startPos = 0; startPos + word.length() <= text.length(); startPos++) {
        bool match = true;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] != text[i + startPos]) {
                match = false;
                break;
            }
        }
        if (match) {
            count++;
        }
    }

    cout << "Answer is: " <<count;
}




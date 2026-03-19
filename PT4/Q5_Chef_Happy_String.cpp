/*
Q5: Chef and Happy String
Check if string has a contiguous substring of length > 2 where ALL characters are vowels.
Strategy: Count consecutive vowels. If count > 2 at any point -> HAPPY.
*/

#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count = 0;
        bool happy = false;
        for (int i = 0; i < (int)s.size(); i++) {
            if (isVowel(s[i])) {
                count++;
                if (count > 2) {
                    happy = true;
                    break;
                }
            } else {
                count = 0;
            }
        }
        cout << (happy ? "Happy" : "Sad") << "\n";
    }
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool ifAnagrams(string a, string b){

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    
    if(a.length() != b.length()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();  // Ignore the newline character after the integer input
    while(t--){
        string a, b;
        getline(cin, a);
        getline(cin, b);
        if(ifAnagrams(a, b)){
            cout << "Anagrams\n";
        }
        else{
            cout << "Not Anagrams\n";
        }

    }
}
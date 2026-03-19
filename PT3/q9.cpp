#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

bool isacronym(const string &word){
    for(char c  : word){
        if(!isupper(c)){
            return false;
        }
    }
    return true;
}

string totitlecase(const string &word){
    if(word.empty()){
        return "";
    }

    string result = word;
    result[0] = toupper(result[0]);
    for(int  i = 1; i < result.size(); i++){
        result[i] = tolower(result[i]);
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        string word = "", result = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                word += s[i];
            }else{
                if(!word.empty()){
                    if(isacronym(word)){
                         result += word + " ";
                    }
                    else {
                        result += totitlecase(word) + " ";
                    }
                    word = "";
                }
            }
        }
        if(!word.empty()){
            if(isacronym(word)){
                result += word;
            }
            else{
                result += totitlecase(word);
            }
        }
        cout << result << "\n";
    }
}
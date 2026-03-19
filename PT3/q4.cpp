#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

void modifiedword(string s, string t){
    for(int i = 0; i < 5; i++){
        if(s[i] == t[i]){
            cout << "G";
        }
        else{
            cout << "B";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string S, T;
        cin >>  S >> T;
        modifiedword(S, T);
    }
}
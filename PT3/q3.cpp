#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

void binaryconverter(string s, int n){
    for(int i = 0; i < n; i += 2){
        if(s[i] == '0' && s[i+1] == '0'){
            cout << "A";
        }
        else if(s[i] == '0' && s[i+1] == '1'){
            cout << "T";
        }
        else if(s[i] == '1' && s[i+1] == '1'){
            cout << "C";
        }
        
        else if(s[i] == '1' && s[i+1] == '1'){
            cout << "G";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string bntext;
        cin >> n;
        cin.ignore();
        getline(cin, bntext);
        binaryconverter(bntext, n);
        cout << "\n";
    }
}
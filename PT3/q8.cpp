#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

void consbreak(string s, int n){
    int count = 0;
    for(int i = 0; i< n; i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout << count<< "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        consbreak(s, n);
    }
}
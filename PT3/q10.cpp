#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

void winner(string s, int prize){
    int carlsen = 0, chef = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'C'){
            carlsen += 2;
        }
        else if(s[i] == 'N'){
            chef += 2;
        }
        else{
            carlsen += 1;
            chef += 1;
        }
    }
    if(carlsen > chef){
        cout << 60*(prize) << "\n";
    }
    else if(carlsen < chef){
        cout << 40*(prize) << "\n";
    }
    else{
        cout << 55*(prize) << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        string s;
        cin >> x;
        cin >> s;
        int prize = x;
        winner(s, prize);
    }
}
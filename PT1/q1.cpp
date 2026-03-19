#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    int x;
    for(int i = 0; i < T; i++){
        cin >> x;
        if(x > 50){
            cout << "Right\n";
        }
        else{
            cout << "Left\n";
        }
}
   } 
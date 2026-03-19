#include <iostream>
using namespace std;
int main(){
    int n, n1, n2;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> n1 >> n2;
        int sum = 0;
        for(int j = n1; j <= n2; j++){
            if(j % 2 == 0){
                sum += j;
            }
        }
        cout << sum << "\n";
    }
}
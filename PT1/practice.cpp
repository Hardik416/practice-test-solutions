#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int index = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] != 0){
                arr[index++] = arr[i];
            }
        }
        while(index < n){
            arr[index++] = 0;
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
    }
}
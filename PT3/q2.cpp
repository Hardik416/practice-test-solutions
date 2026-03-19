#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

int maxielement(int arr[], int n){
    int maxvalue = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxvalue){
            maxvalue = arr[i];
        }
    }
    return maxvalue; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << maxielement(arr, n) << "\n";
    }
}
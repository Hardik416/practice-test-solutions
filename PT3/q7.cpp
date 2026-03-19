#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

void minstepreq(int arr[], int n){
    int minvalue = INT_MAX;
    int maxvalue = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxvalue) maxvalue = arr[i];
        if(arr[i] < minvalue) minvalue = arr[i];
    }
    if(minvalue == maxvalue){
        cout << "0\n";
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != minvalue) count++;
    }
    cout << count << "\n";
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
        minstepreq(arr, n);
    }
}

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

void buyornot(int arr1[], int arr2[], int n, int x){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i] >= x){
            sum += arr2[i];
        }
    }
    cout << sum << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int arr1[n], arr2[n];
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }
        buyornot(arr1, arr2, n, x);
    }
}
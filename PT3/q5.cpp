#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

void discountcheck(int arr[], int n, int x, int y){
    int sum = 0;
    int disum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(arr[i] <= y){
            arr[i] = 0;
        }
        else{
            arr[i] -= y;
        }
        disum += arr[i];
    }
    disum += x;
    if(disum < sum){
        cout << "COUPON\n";
    }
    else{
        cout << "NO COUPON\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        discountcheck(arr, n, x, y);
    }
}
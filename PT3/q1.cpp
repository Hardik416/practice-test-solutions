#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

int searchelement(int arr[], int n, int k){
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            return 1;
        }
    }
    return -1;
}
int main(){
    int n, x;
    int arr[n];
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(searchelement(arr, n, x) == -1){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }

}
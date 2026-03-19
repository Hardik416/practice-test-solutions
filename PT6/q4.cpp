#include <iostream>
#include <string>
using namespace std;

class Date{
    public:
    int month = 0, day = 0;
    Date(int m, int d) : month(m), day(d){}
    int daysInMonth(){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            return 31;
        }
        else if(month == 2) return 28;
        else return 30;
    }
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int nextDay(){
        day++;
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day > 31){
                day = 1;
                month++;
            }
        }
        else if(month == 2 && day > 28){
            day = 1;
            month++;
        }
        else if(day > 30){
            day = 1;
            month++;
        }
        if(month > 12) month = 1;
        return day;
    }
    string toString(){
        string s = to_string(month) + "/" + to_string(day);
        return s;
    }
    int absoluteDay(){
        int ad = day;
        if(month >= 2) ad += 31;
        if(month >= 3) ad += 28;
        if(month >= 4) ad += 31;
        if(month >= 5) ad += 30;
        if(month >= 6) ad += 31;
        if(month >= 7) ad += 30;
        if(month >= 8) ad += 31;
        if(month >= 9) ad += 31;
        if(month >= 10) ad += 30;
        if(month >= 11) ad += 31;
        if(month >= 12) ad += 30;

        return ad;
    }
    
};
int main(){
    int m, d;
    cin >> m >> d;
    Date obj(m, d);
    cout << obj.absoluteDay() << "\n";
    cout << obj.daysInMonth() << "\n";
    cout << obj.getDay() << "\n";
    cout << obj.getMonth() << "\n";
    cout << obj.nextDay() << "\n";
    cout << obj.getMonth() << "\n";
    cout << obj.toString() << "\n";
}
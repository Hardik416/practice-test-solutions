/*
Q1: Add Two Times using class
- Input: h1, m1, s1, h2, m2, s2 (each on separate line)
- Output: [ h1:m1:s1 ] then [ h2:m2:s2 ] then [ sum ]
- Handle carry: 60 sec = 1 min, 60 min = 1 hour
- Note: space after '[' and before ']'
*/

#include <iostream>
using namespace std;

class Time {
public:
    int hour, min, sec;

    void getTime(int h, int m, int s) {
        hour = h;
        min = m;
        sec = s;
    }

    void display() {
        cout << "[ " << hour << ":" << min << ":" << sec << " ]" << endl;
    }

    Time addTime(Time t2) {
        Time result;
        result.sec  = sec + t2.sec;
        result.min  = min + t2.min + result.sec / 60;
        result.sec  = result.sec % 60;
        result.hour = hour + t2.hour + result.min / 60;
        result.min  = result.min % 60;
        return result;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

    Time t1, t2, t3;
    t1.getTime(h1, m1, s1);
    t2.getTime(h2, m2, s2);
    t3 = t1.addTime(t2);

    t1.display();
    t2.display();
    t3.display();

    return 0;
}

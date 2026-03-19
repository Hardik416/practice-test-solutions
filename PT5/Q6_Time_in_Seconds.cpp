/*
Q6: Time in Seconds
- Input: hours, minutes, seconds (each on separate line)
- Convert to total seconds using class
- Formula: total = hours*3600 + minutes*60 + seconds
*/

#include <iostream>
using namespace std;

class Time {
    int hour, min, sec;
public:
    void getTime(int h, int m, int s) {
        hour = h;
        min = m;
        sec = s;
    }

    int toSeconds() {
        return hour * 3600 + min * 60 + sec;
    }
};

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    Time t;
    t.getTime(h, m, s);
    cout << t.toSeconds() << endl;

    return 0;
}

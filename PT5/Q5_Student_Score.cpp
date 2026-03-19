/*
Q5: Student Score
- N students, each has 5 scores on one line
- First student is Kristen
- Find students who have HIGHER total than Kristen
- Output: count followed by their totals
- Each student's scores are space-separated on one line
*/

#include <iostream>
using namespace std;

const int MAXN = 105;
const int SCORES = 5;

class Student {
public:
    int marks[SCORES];
    int total;

    void input() {
        total = 0;
        for (int i = 0; i < SCORES; i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }
};

void find_larger(Student students[], int n) {
    int kristenTotal = students[0].total;
    int count = 0;
    int higherTotals[MAXN];

    for (int i = 1; i < n; i++) {
        if (students[i].total > kristenTotal) {
            higherTotals[count++] = students[i].total;
        }
    }

    cout << count;
    for (int i = 0; i < count; i++) {
        cout << " " << higherTotals[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Student students[MAXN];
    for (int i = 0; i < n; i++) {
        students[i].input();
    }

    find_larger(students, n);
    return 0;
}

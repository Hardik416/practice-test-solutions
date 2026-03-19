#include <iostream>
using namespace std;

class Person{
    public:
    int age;
};
class Professor : public Person{
    public:
    int publications;
    static int cur_id;
    void getdata(){
        cin >> age >> publications;
    }
    void putdata(){
        cout << age << " " << publications << " " << cur_id << "\n";
        cur_id++;
    }
};

int Professor::cur_id = 1;

class Student : public Person{
    public:
    static int cur_id;
    int marks[6];
    int sum = 0;
    void getdata(){
        cin >> age;
        for(int i = 0; i < 6; i++){
            cin >> marks[i]; 
            sum += marks[i];
        }
    }
    void putdata(){
        cout << age << " " << sum << " " << cur_id << "\n";
        cur_id++;
    }
};
int Student::cur_id = 1;

int main(){
    int t;
    cin >> t;
    while(t--){
        int choice;
        cin >> choice;
        switch(choice){
            case 1:
            Professor pro;
            pro.getdata();
            pro.putdata();
            break;
            case 2:
            Student st;
            st.getdata();
            st.putdata();
            break;
        }
    }
}
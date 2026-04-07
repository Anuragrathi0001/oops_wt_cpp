#include<bits/stdc++.h>
using namespace std;
class Student{
    int roll;
    string name;
    public:
    Student(int roll,string name){
        this->roll = roll;
        this->name = name;
    }
    void disp(Student s){
        cout << s.roll << " " << s.name << endl;
    }
};
int main(){
    Student s(123, "Anurag");
    s.disp(s);
}
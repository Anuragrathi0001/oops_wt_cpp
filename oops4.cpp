#include<bits/stdc++.h>
using namespace std;
class Student{private: 
    int roll;
    string name;
    float cgpa;
    public:
    void setter(int roll,string name,float cgpa){
        this->roll = roll;
        this->name = name;
        this->cgpa = cgpa;
    }
    void getter(){
        cout << roll << " " << name << " " << cgpa << endl;
    }
    void printfunk(Student s){
        cout << s.roll << " " << s.name << " " << s.cgpa << endl;
    }
};
int main(){
    Student s;
    s.setter(123, "Anurag", 9.4);
    s.printfunk(s);
    s.getter();
}
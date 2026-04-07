#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    Student(string n,int r){
        name = n;
        roll = r;
    }
};
int main(){
    Student s1("Anurag", 123);
    cout << s1.name << " " << s1.roll;
}

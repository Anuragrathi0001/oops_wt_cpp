#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    string name;
};
int main(){
    Student s1;
    s1.name = "Anurag";
    s1.roll = 123;
    cout << s1.name <<" "<< s1.roll << endl;
}
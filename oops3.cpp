#include<bits/stdc++.h>
//getter and setter
using namespace std;
class Student {
    private:
        int roll;
        string name;
    public:
        void sett(int roll,string name){
            this->name=name;
            this->roll = roll;
        }
        void gett(){
            cout << name << " " << roll<<endl;
        }
};
int main(){
    Student s1,s2;
    s1.sett(123,"Anurag");
    s2.sett(124, "Abhay");
    s1.gett();
    s2.gett();
}
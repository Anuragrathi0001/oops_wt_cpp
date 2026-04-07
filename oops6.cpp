#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    public:
    Cricketer(string name,int runs){
        this->name = name;
        this->runs = runs;
    }
};
void changeRuns(int run,Cricketer* ptr){
     ptr->runs= run;
}
int main(){
    Cricketer c1("chokli", 45);
    cout << c1.runs<<endl;
    changeRuns(56,&c1);
    cout << c1.runs;
}
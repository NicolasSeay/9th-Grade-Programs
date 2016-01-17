#include <iostream>
#include <iomanip>

using namespace std;

const int classsize=4;

struct myclass{
    string name;
    int age;
    double gpa;
};
int main(){
    myclass period5[classsize];
    for(int a=0; a<classsize; a++){
        cout<<"Name: ";
        cin>>period5[a].name;
        cout<<"Age: ";
        cin>>period5[a].age;
        cout<<"GPA: ";
        cin>>period5[a].gpa;
        cout<<endl;
    }
    for(int b=0; b<classsize; b++){
        cout<<period5[b].name;
        cout<<" ";
        cout<<period5[b].age;
        cout<<" ";
        cout<<period5[b].gpa;
        cout<<" "<<endl;
    }
}

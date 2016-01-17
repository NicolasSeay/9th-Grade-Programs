#include <iostream>
#include <iomanip>

using namespace std;

void input(int &seed1, int &seed2, int &term){
    cout<<"Hello!"<<endl;
    cout<<"Enter seed #1: ";
    cin>>seed1;
    cout<<"Enter seed #2: ";
    cin>>seed2;
    cout<<"Enter a term: ";
    cin>>term;
}
void output(int &seed1, int &seed2, int &term){
    int a1, a2, a3;
    cout<<seed1<<", "<<seed2;
    a1=seed1;
    a2=seed2;
        for(int i=0; i<=term-3; i++){
        cout<<", ";
        a3=a1+a2;
        cout<<a3;
        a1=a2;
        a2=a3;
        }
}
int main(){
    int seed1, seed2, term;
    input(seed1, seed2, term);
    output(seed1, seed2, term);
}

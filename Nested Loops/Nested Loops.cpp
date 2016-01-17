#include <iostream>
#include <iomanip>

using namespace std;

void input(int &num){
    cout<<"Hello!"<<endl;
    cout<<"Enter a number: ";
    cin>>num;
}

void output(int &num){
    for(int r=1; r<=num; r++){
        for(int c=1; c<=r; c++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int num;
    input(num);
    output(num);
    return 0;
}

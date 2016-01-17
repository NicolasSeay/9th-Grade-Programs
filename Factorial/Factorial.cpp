#include <iostream>
#include <iomanip>

using namespace std;

void input(int &integer){
    cout<<"Hello!"<<endl;
    cout<<"Enter an integer: ";
    cin>>integer;
}

void output(int integer, int factorial){
    cout<<"The factorial is: ";
    for(int i=0; i<integer; i++){
        factorial=factorial*(i+1);
    }
    cout<<factorial<<endl;
}

int main(){
    int integer;
    int factorial=1;
    input(integer);
    output(integer, factorial);
    return 0;
}

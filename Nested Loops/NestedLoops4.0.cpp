#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

void input(int &num, int &seed){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
    FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout<<"Hello!"<<endl;
    cout<<"Enter number of rows: ";
    cin>>num;
    cout<<"Enter a seed: ";
    cin>>seed;
}

void output(int &num, int &seed){
    for(int r=0; r<num; r++){

        for(int tabs=num-1-r; tabs>0; tabs--){
            cout<<"   ";
        }
        for(int c=0; c<=r; c++){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
            FOREGROUND_GREEN);
            cout<<"*";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
            FOREGROUND_RED);
            cout<<seed;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
            FOREGROUND_GREEN);
            cout<<(char)244<<"   ";
            seed++;
            if(seed>9){                 //(char)244 is candy cane. (char)245 is upside down candy cane.
                seed=0;
            }
        }
        cout<<endl;
    }
}

int main(){
    int num;
    int seed;
    input(num, seed);
    output(num, seed);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
    FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    return 0;
}

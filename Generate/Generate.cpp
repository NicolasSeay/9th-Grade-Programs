#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    int count=0, x;
    double guess;
    srand(time(NULL));
    x=(rand()%100)+1;
    //cout<<x<<endl;
    cout<<"Hello. Would you like to play a game?"<<endl;
    do{
        count++;
        cout<<"Guess a number(1-100): ";
        cin>>guess;
        if(x<guess){
            cout<<"Lower"<<endl;
        }
        else if(x>guess){
            cout<<"Higher"<<endl;
        }
        else{
            cout<<"CORRECT!"<<endl;
        }
    }while(x!=guess);
    cout<<"It took you "<<count<<" tries!";
}

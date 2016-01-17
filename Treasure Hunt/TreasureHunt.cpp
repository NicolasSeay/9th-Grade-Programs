#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    char covarray[5][5], solarray[5][5];
    int gold=0, count=0;
    int x, y, guessx, guessy;
    srand(time(NULL));
    for(int m=0; m<5; m++){
        for(int n=0; n<5; n++){
            solarray[m][n]=' ';
            covarray[m][n]='#';
        }
    }
    for(int i=0; i<10; i++){
        x=(rand()%5);
        y=(rand()%5);
        if(solarray[x][y]=='$'){
            i=i-1;
        }
        else if(solarray[x][y]!='$'){
            solarray[x][y]='$';
        }
    }
        cout<<"-------------------------"<<endl;
        cout<<"|   | 1 | 2 | 3 | 4 | 5 |"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 1 | ";
        for(int c=0; c<5; c++){
            cout<<solarray[0][c]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 2 | ";
        for(int d=0; d<5; d++){
            cout<<solarray[1][d]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 3 | ";
        for(int e=0; e<5; e++){
            cout<<solarray[2][e]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 4 | ";
        for(int f=0; f<5; f++){
            cout<<solarray[3][f]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 5 | ";
        for(int g=0; g<5; g++){
            cout<<solarray[4][g]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
    do{
        cout<<"-------------------------"<<endl;
        cout<<"|   | 1 | 2 | 3 | 4 | 5 |"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 1 | ";
        for(int c=0; c<5; c++){
            cout<<covarray[0][c]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 2 | ";
        for(int d=0; d<5; d++){
            cout<<covarray[1][d]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 3 | ";
        for(int e=0; e<5; e++){
            cout<<covarray[2][e]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 4 | ";
        for(int f=0; f<5; f++){
            cout<<covarray[3][f]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"| 5 | ";
        for(int g=0; g<5; g++){
            cout<<covarray[4][g]<<" | ";
        }
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Coordinate X: ";
        cin>>guessx;
        cout<<"Coordinate Y: ";
        cin>>guessy;
        guessx--;
        guessy--;
        if(solarray[guessy][guessx]=='$'){
            covarray[guessy][guessx]='$';
            gold=gold+1;
        }
        else if(solarray[guessy][guessx]!='$'){
            covarray[guessy][guessx]=' ';
        }
        count++;
    }while(gold<10);
    cout<<"CONGRATULATIONS! It took you "<<count<<" guesses!";
}

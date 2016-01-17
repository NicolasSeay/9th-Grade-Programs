#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    char covarray[5][5], solarray[5][5];
    int gold=0, glod=0, count=0;
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
        else if((solarray[x][y]!='$')&&(solarray[x][y]!='X')){
            solarray[x][y]='$';
        }
    }
    for(int b=0; b<5; b++){
        x=(rand()%5);
        y=(rand()%5);
        if(solarray[x][y]=='$'){
            b=b-1;
        }
        else if(solarray[x][y]==(char)2){
            b=b-1;
        }
        else{
            solarray[x][y]=(char)2;
        }
    }
        /*cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<"   "<<(char)179<<" 1 "<<(char)179<<" 2 "<<(char)179<<" 3 "<<(char)179<<" 4 "<<(char)179<<" 5 "<<(char)179<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 1 "<<(char)179<<" ";
        for(int c=0; c<5; c++){
            cout<<solarray[0][c]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 2 "<<(char)179<<" ";
        for(int d=0; d<5; d++){
            cout<<solarray[1][d]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 3 "<<(char)179<<" ";
        for(int e=0; e<5; e++){
            cout<<solarray[2][e]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 4 "<<(char)179<<" ";
        for(int f=0; f<5; f++){
            cout<<solarray[3][f]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 5 "<<(char)179<<" ";
        for(int g=0; g<5; g++){
            cout<<solarray[4][g]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;*/
    do{
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<"   "<<(char)179<<" 1 "<<(char)179<<" 2 "<<(char)179<<" 3 "<<(char)179<<" 4 "<<(char)179<<" 5 "<<(char)179<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 1 "<<(char)179<<" ";
        for(int c=0; c<5; c++){
            cout<<covarray[0][c]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 2 "<<(char)179<<" ";
        for(int d=0; d<5; d++){
            cout<<covarray[1][d]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 3 "<<(char)179<<" ";
        for(int e=0; e<5; e++){
            cout<<covarray[2][e]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 4 "<<(char)179<<" ";
        for(int f=0; f<5; f++){
            cout<<covarray[3][f]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
        cout<<(char)179<<" 5 "<<(char)179<<" ";
        for(int g=0; g<5; g++){
            cout<<covarray[4][g]<<" "<<(char)179<<" ";
        }
        cout<<endl;
        cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<endl;
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
        else if((solarray[guessy][guessx]!='$')&&(solarray[guessy][guessx]!=(char)2)){
            covarray[guessy][guessx]=' ';
        }
        else if(solarray[guessy][guessx]==(char)2){
            covarray[guessy][guessx]=(char)2;
            glod=glod+1;
        }
        if(glod>=5){
            gold=10;
        }
        count++;
    }while(gold<10);
    if(glod<5){
        cout<<"CONGRATULATIONS! It took you "<<count<<" guesses."<<endl;
        cout<<"And you got "<<(gold-glod)<<" pieces of gold!";
    }
    else{
        cout<<"The Bandits got you! It took you "<<count<<" guesses.";
    }
}

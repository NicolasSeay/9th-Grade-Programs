#include <iostream>
#include <iomanip>

using namespace std;

const int arraylength=5;

int main(){
    int Bubble[arraylength], placeholder;
    for(int a=0; a<arraylength; a++){
        cout<<"Enter number "<<a+1<<": ";
        cin>>Bubble[a];
    }
    for(int b=0; b<arraylength-1; b++){
        for(int c=(b+1); c<(arraylength); c++){
            if(Bubble[b]>Bubble[c]){
                placeholder=Bubble[b];
                Bubble[b]=Bubble[c];
                Bubble[c]=placeholder;
            }
        }
    }
    for(int d=0; d<arraylength; d++){
        cout<<Bubble[d]<<" ";
    }
}

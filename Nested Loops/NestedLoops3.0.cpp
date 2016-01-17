#include <iostream>
#include <iomanip>

using namespace std;

void input(int &num, int &seed){
    cout<<"Hello!"<<endl;
    cout<<"Enter number of rows: ";
    cin>>num;
    cout<<"Enter a seed: ";
    cin>>seed;
}

void output(int &num, int &seed){
    for(int r=0; r<num; r++){

        for(int tabs=num-1-r; tabs>0; tabs--){
            cout<<"  ";
        }
        for(int c=0; c<=r; c++){
            cout<<seed<<"   ";
            seed++;
            if(seed>9){
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
    return 0;
}

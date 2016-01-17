#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string palin;
    int counter=0;
    int end;
    cout<<"Enter the string: ";
    getline(cin, palin);
    end=palin.length();
    for(int i=0; i<end/2; i++){
        if(palin[i]==palin[(end-1)-i]){
            counter++;
        }
    }
    if(counter==(end/2)){
        cout<<"It's a palindrome!"<<endl;
    }
    else{
        cout<<"It's not a palindrome"<<endl;
    }
}

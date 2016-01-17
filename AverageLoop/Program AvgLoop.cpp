#include <iostream>
#include <iomanip>

using namespace std;

void input(int &number, int &sum){
    int grade;
    char answer;
    number=0;
    cout<<"Hello!"<<endl;
    do{
        cout<<"Enter "<<number+1;
        if(number%100==10){
            cout<<"th";
        }
        else if(number%100==11){
            cout<<"th";
        }
        else if(number%100==12){
            cout<<"th";
        }
        else if(number%10==0){
            cout<<"st";
        }
        else if(number%10==1){
            cout<<"nd";
        }
        else if(number%10==2){
            cout<<"rd";
        }
        else{
            cout<<"th";
        }
        cout<<" Grade: ";
        cin>>grade;
        sum=sum+grade;
        cout<<"Would you like to enter another Grade?Y/N: ";
        cin>>answer;
        //answer='Y';
        number++;
    }while(answer=='Y');
}

void math(int sum, int number, double &average){
    average=((double)(sum)/number);
}

void output(double &average){
    cout<<"Your Average is: "<<average<<endl;
    cout<<"Your letter grade is: ";
    if(average>=92.5){
        cout<<"A"<<endl;
    }
    else if((average>=84.5)&&(average<92.5)){
        cout<<"B"<<endl;
    }
    else if((average>=76.5)&&(average<84.5)){
        cout<<"C"<<endl;
    }
    else if((average>=69.5)&&(average<76.5)){
        cout<<"D"<<endl;
    }
    else if(average<69.5){
        cout<<"F"<<endl;
    }
}

int main(){
    int number=0;
    int sum=0;
    double average;
    cout<<setprecision(2)<<fixed;
    input(number, sum);
    math(sum, number, average);
    output(average);
    return 0;
}

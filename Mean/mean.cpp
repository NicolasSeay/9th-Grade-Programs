#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void input(int &grade1, int &grade2){
    cout<<"Hello!"<<endl;
    cout<<"Enter Grade 1: ";
    cin>>grade1;
    cout<<"Enter Grade 2: ";
    cin>>grade2;
}

void ArithMean(int grade1, int grade2, double &AMean){
    AMean=(((double)grade1+grade2)/2);

}

double GeoMean(int grade1, int grade2, double &GMean){
    GMean=(sqrt(grade1*grade2));
    return GMean;
}

double HarMean(int grade1, int grade2, double &HMean){
    HMean=(2/((1/(double)grade1)+(1/(double)grade2)));
    return HMean;
}

void output(int grade1, int grade2, double AMean, double GMean, double HMean){
    cout<<"Your Arithmetic mean is: "<<AMean<<endl;
    cout<<"Your Geometric mean is: "<<GMean<<endl;
    cout<<"Your Harmonic mean is: "<<HMean<<endl;
}

int main(){
    cout<<setprecision(3)<<fixed;
    int grade1;
    int grade2;
    double AMean;
    double GMean;
    double HMean;
    input(grade1, grade2);
    ArithMean(grade1, grade2, AMean);
    GeoMean(grade1, grade2, GMean);
    HarMean(grade1, grade2, HMean);
    output(grade1, grade2, AMean, GMean, HMean);
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

class Cube{
    private:
        double Side;
    public:
        Cube();
        Cube(int);
        void setSide(double s);
        double getSide();
        double Area();
        double Volume();
        void print();
};
Cube::Cube(){
    Side=5;
}
Cube::Cube(int value){
    Side=value;
}
void Cube::setSide(double s){
    Side=s;
}
double Cube::getSide(){
    return Side;
}
double Cube::Area(){
    return(6*Side*Side);
}
double Cube::Volume(){
    return(Side*Side*Side);
}
void Cube::print(){
    cout<<"Side "<<getSide()<<endl;
    cout<<"Area "<<Area()<<endl;
    cout<<"Volume "<<Volume()<<endl;
}
int main(){
    Cube c;
    c.print();
    return 0;
}

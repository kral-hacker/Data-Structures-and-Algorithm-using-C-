// To calculate the area of the given circle
#include <iostream>
using namespace std;
class Circle{
    private:
    int radius;
    public:
        Circle(int r){
            radius=r;
        }
        void setRadius(int radius){
            this->radius=radius;
        }
        int getRadius(){
            return radius;
        }
};
class Utility{
    public:
    double calculateArea(Circle c){
        int r;
        r=c.getRadius();
        return 3.14*r*r;
    }
};
int main(){
    int radius;
    cout<<"Enter the radius of the circle "<<endl;
    cin>>radius;
    Circle obj(radius);
    Utility c1;
    cout<<"Area of the circle is "<<endl;
    cout<<c1.calculateArea(obj);
    return 0;
}
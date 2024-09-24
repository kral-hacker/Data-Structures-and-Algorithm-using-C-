//friend functions can be used to access any data members whether they are private and protected
#include <iostream>
using namespace std;
class marks{
    private:int m1,m2,m3;
    public:void getdata();
    friend int total(marks);
};
void marks::getdata(){
    cout<<"Enter 3 subject marks: ";
    cin>>m1>>m2>>m3;
}
int total(marks m){
    return m.m1+m.m2+m.m3;
}
main(){
    marks m;
    m.getdata();
    cout<<"Total"<<total(m);
}
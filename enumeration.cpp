#include <iostream>
using namespace std;
enum week{
    Mon,
    Tue,
    Wed,
    Thr,
    Fri,
    Sat,
    Sun
};
int main(){
    enum week day;
    day = Tue;
    cout<<day;
}
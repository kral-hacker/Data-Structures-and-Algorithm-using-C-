#include <iostream>
#include <vector>
using namespace std;
int main()
{ 
 float s_i,y;
 float c_r;
 cout<<"Enter the starting investment (a): ";
 cin>>s_i;
 cout<<"Enter the ratio(r): ";
 cin>>c_r;
 cout<<"Enter the number of years(n)";
 cin>>y;
 cout<<"Investment Growth Over Time (GP with common ratio 1.1):"<<endl;
 for (int i=1; i<=y;i++){
 cout<<"Year "<<i<<" : "<<s_i<<endl;
 s_i=s_i*c_r;
 }
 return 1;
}
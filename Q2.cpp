#include<iostream>
#include<cmath>
using namespace std;
double area(double r)
{
    double area = 3.17* pow(r,2);
    return area;
}
int main()
{
    double r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    cout<<"The area is: "<<area(r);
    return 0;
}
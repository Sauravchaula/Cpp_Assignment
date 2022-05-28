// Write a program to find the area of a triangle (when its sides are
// given) using the concept of overloaded constructor.

#include <iostream>
#include <cmath>
using namespace std;
class A
{
    int side1, side2, side3;

public:
    A(int s1, int s2, int s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        int s = (s1 + s2 + s3) / 2;
        int area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        cout << "The area of triangle is: " << area << endl;
        cout<<"--------------------------------------"<<endl;
    }
};
int main()
{
    A obj1(33, 21, 24);
    return 0;
}

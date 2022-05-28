/*: Write a program to input two vectors coordinates from a base class
named ‘Base’. Class ‘Derived’ inherits all the properties of class Base. Class
‘Derived’ must contain a function named add_vector( ) that add the two vectors
input from the base class and finally display the result from a function
display() that is friend with the base class.*/
#include<iostream>
using namespace std;

class base{
public:
    int x;
    int y;
    void input()
    {
        cout << "Enter the coordinate of Vector x-axis"<<endl;
        cin >> x;
        cout << "Enter the coordinate of Vector y-axis" << endl;
        cin >> y;
    }
    friend void display(base);
};
class derived : public base{
public:
    void add_vector(base &s1, base &s2)
    {
        s1.x += s2.x;
        s1.y += s2.y;
    }
};
void display(base s1)
{
    cout << "Sum of two vector is:" << s1.x << "i+" << s1.y << "j" << endl;
}
int main()
{
    base s1, s2;
    s1.input();
    s2.input();
    derived obj;
    obj.add_vector(s1, s2);
    display(s1);
    return 0;
}

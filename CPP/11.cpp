// Create a class time having hour, minute and second as data
// members. The constructor is used to initialize these members. Define a
// function add that takes two class objects as arguments and add them
// respectively then display the aggregate result.
#include <iostream>
using namespace std;
class time
{
    int hr;
    int min;
    int sec;

public:
    time(int h = 0, int m = 0, int s = 0)
    {
        hr = h;
        min = m;
        sec = s;
    }
    time add(time obj1,time obj2)
    {
        obj1.hr += obj2.hr;
        obj1.min += obj2.min;
        obj1.sec += obj2.sec;
    if (obj1.min > 60)
        {
            obj1.hr += 1;
            obj1.min -= 60;
            cout << "The time is:" << endl;
            cout << obj1.hr << ":" << obj1.min<< ":" << obj1.sec<< endl;
        }
        else
        {
            cout << "The time is:" << endl;
             cout << obj1.hr << ":" << obj1.min << ":" << obj1.sec<< endl;
        }
    }
    
};
int main()
{
    time obj1(4, 45, 44);
	time obj2(6, 34, 52);
    time obj3;
	obj3.add(obj1,obj2);
    return 0;
}

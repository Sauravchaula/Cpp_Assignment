/*Create a class called Mountain with data members name, height,
location, a constructor initializes the members to the values passed to it as
parameters, a function called CmpHeight( ) to compare two objects and
DisplayInf( ) to display the information of Mountain. In main, create two objects
of the class mountain and print the information of the mountain which is of
greatest height. */
#include<iostream>
using namespace std;

class Mountain{
string name;
float height;
string location;
public:
	Mountain(){
		
	}
	Mountain(string n,float h,string l){
	name=n;
	height=h;
	location=l;
	}
		
    void display(Mountain s1, Mountain s2)
    {
        cout << "The first Mountain is: " << endl;
        cout << "Name:" << s1.name << endl;
        cout << "Height:" <<s1.height << endl;
        cout << "Location" <<s1.location << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "The Second Mountain is: " << endl;
        cout << "Name:" << s2.name << endl;
        cout << "Height:" << s2.height << endl;
        cout << "Location" <<s2.location << endl;
    }
     void compare(Mountain s1, Mountain s2)
    {
        if (s1.height > s2.height)
        {
            cout << "\n\n" <<s1.name << " is the highest mountain" << endl;
        }
        else
        {
            cout << "\n\n" <<s2.name << " is the highest mountain" << endl;
        }
    }
	
};
int main(){
	Mountain s3;
	Mountain s1("Mt.Everest",8848.48,"Solukhumbhu");
	Mountain s2("Mt.Kanchunja",7847.55,"Mustang");
    s3.display(s1,s2);
    s3.compare(s1,s2);
    return 0;
}

/*Create a class called Employee with data member Code, Name,
Address and Salary. Create a constructor to initialize the member of the class.
Also create another constructor so that we can create an object from another
object. Define member function display( ) to display the information of the
class.*/
#include<iostream>
using namespace std;

class Employee
{
    int code;
    string name;
    string address;
    float salary;

public:
    Employee(int c,string n,string a,float s){
        code = c;
        name = n;
        address = a;
        salary = s;
    }
    Employee(Employee &obj){
        code = obj.code;
        name = obj.name;
        address = obj.address;
        salary = obj.salary;
    }
    void display(){
        cout<<"Code: "<<code<<endl;
		cout<< "Name: " <<name<<endl;
        cout<<"Address: "<<address<<endl;
		cout<<"Salary: "<<salary<<endl; 
    }
};
int main(){
    Employee e1(5678,"Saurav","Chitwan",500000);
   Employee e2=e1;
   e1.display();
   e2.display();
   return 0;
}

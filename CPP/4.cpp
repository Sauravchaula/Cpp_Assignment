/*Write a program according to the specification given below:
? Create a class Teacher with data members, tid & subject and member
functions for reading and displaying data members.
? Create another class Staff with data members, sid & position, and
member functions for reading and displaying for data members.
? Derive a class Coordinator from the Teacher and Staff and the class must
have its own data member department and member functions for reading
and displaying data members.
? Create two objects of the Coordinator class and read and display their
details. */
#include<iostream>
using namespace std;

class Teacher{
	int tid;
	string subject;
	public: 
	void reading(){
		cout<<"Enter the teacher id number: "<<endl;
		cin>>tid;
		cout<<"Enter the respective subject: "<<endl;
		cin>>subject;
	}
	void display(){
		cout<<"The teacher id is: "<<tid<<endl;
		cout<<"The subject is: "<<subject<<endl;
	}
};
class Staff{
	int sid;
	string position;
	public:
		void reading(){
		cout<<"\nEnter the staff id number: "<<endl;
		cin>>sid;
		cout<<"Enter the position: "<<endl;
		cin>>position;
	}
		void display(){
		cout<<"The staff id is: "<<sid<<endl;
		cout<<"The position is: "<<position<<endl;
	}
};
class Coordinator:public Teacher, public Staff{
	string department;
	public:
		void read(){
			cout<<"Department"<<endl;
			cin>>department;
		}
		void disp(){
			cout<<"\nDepartment: "<<department<<endl;
		}
};
int main(){
	Coordinator s1, s2;
	s1.read();
	s1.Teacher::reading();
	s1.disp();
	s1.Teacher::display();
	s2.read();
	s2.Staff::reading();
	s2.disp();
	s2.Staff::display();
	
	return 0;
}

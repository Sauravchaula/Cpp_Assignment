/*Using a class write a program that receives inputs, principle
amount, time and rate. Keeping rate 8% as the default argument, calculate the
simple interest for three customers.*/
#include<iostream>
using namespace std;

class saurav{
    float principle;
	float rate;
	float time;
	public:
		void getdata(float r=8){
		cout<<"Enter Principle: "<<endl;
		cin>>principle;
		cout<<"Enter time: "<<endl;
		cin>>time;
		rate=r;
		}
		void display(){
			float SI;
			SI=(principle*time*rate)/100;
			cout<<"The simple interest is: "<<SI<<endl;
		}
};
int main(){
	saurav s1;
	s1.getdata(8);
	s1.display();
	return 0;
}

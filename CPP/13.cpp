/*Write a program to add two complex numbers using the concept
of constructor*/
#include<iostream>
using namespace std;

class complex{
	int real;
	int img;
	public: 
	 complex(){
	 	
	 }
	 complex(int a, int b){
	 	real=a;
	 	img=b;
	 }
	 void display(complex s1,complex s2){
	 	s1.real+=s2.real;
	 	s1.img+=s2.img;
	 	cout<<"The sum is: "<<endl;
	 	cout<<s1.real<<" + "<<s1.img<<"i"<<endl;
	 }
	 
};
int main(){
	complex s1(2,4),s2(4,1),s3;
	s3.display(s1,s2);
}

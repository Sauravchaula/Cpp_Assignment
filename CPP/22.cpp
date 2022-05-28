/*Write a program to find the sum and difference of any two
complex numbers by overloading ‘+’ and ‘-‘ operator*/
#include<iostream>
using namespace std;

class saurav{
	int x;
	int y;
	public:
	 void getdata(int a,int b){
	 	x=a;
	 	y=b;
	 }
	 void display(){
	 	cout<<"The value is: "<<x<<" + "<<y<<"i"<<endl;
	 }
	 saurav operator+(saurav d){
	 	saurav temp;
	 	temp.x=x+d.x;
	 	temp.y=y+d.y;
	 	return temp;
	 }
	 saurav operator-(saurav d){
	 	saurav temp;
	 	temp.x=x-d.x;
	 	temp.y=y-d.y;
	 	return temp;
	 }
};
int main(){
	saurav s1,s2,s3,s4;
	s1.getdata(3,4);
	s1.display();
	s2.getdata(5,8);
	s2.display(); 
	cout<<"\n\n--------Their SUM-------"<<endl;
	s3=s1+s2;
	s3.display();
	cout<<"\n\n--------Their Difference-------"<<endl;
	s4=s1-s2;
	s4.display();
	return 0;
	
}

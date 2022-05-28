/*Write a program to overload multiplication operator(*) showing
the multiplication of two objects.*/
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
	saurav operator*(saurav e){
  	saurav temp;
  	temp.x=x*e.x;
  	temp.y=y*e.y;
  	return temp;
  }
};
    

int main(){
	saurav s1,s2,s3;
	s1.getdata(2,6);
	s1.display();
	s2.getdata(3,2);
	s2.display();
	cout<<"\n\n-------Their Multiplication-------"<<endl;
	s3=s1*s2;
	s3.display();
	return 0;
}



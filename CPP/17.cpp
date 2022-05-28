//Write a program to add two complex numbers using friend function. 
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
		friend saurav operator+(saurav d,saurav e);
};
    
  saurav operator+(saurav d,saurav e){
  	saurav temp;
  	temp.x=d.x+e.x;
  	temp.y=d.y+e.y;
  	return temp;
  }
int main(){
	saurav s1,s2,s3;
	s1.getdata(2,6);
	s1.display();
	s2.getdata(3,2);
	s2.display();
	cout<<"\n\n-------Their Sum-------"<<endl;
	s3=s1+s2;
	s3.display();
	return 0;
}

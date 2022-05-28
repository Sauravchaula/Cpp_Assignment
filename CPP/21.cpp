#include<iostream>
using namespace std;
class saurav{
	int real;
	int imaginary;
	public:
		void getdata(int a,int b){
			real=a;
			imaginary=b;
		}
		void display(){
			cout<<"The value is: "<<real<<" + "<<imaginary<<"i"<<endl;
		}
	saurav operator+(saurav e){
  	saurav temp;
  	temp.real=real+e.real;
  	temp.imaginary=imaginary+e.imaginary;
  	return temp;
  }
};
    

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


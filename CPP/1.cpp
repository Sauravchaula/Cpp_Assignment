/*Write a program to find the cube of given integer using inline
function
*/
#include<iostream>
using namespace std;
int cube(int x);
int main(){
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	cout<<"The cube root of is :"<<cube(a)<<endl;
}
inline int cube(int x){
	int cb;
	cb=x*x*x;
	return cb;
}

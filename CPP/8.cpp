/*: Write a program to create a class called Room in which data items
are length, breadth and height. Create an array of objects in the room. And
finds its area and volume. */
#include<iostream>
using namespace std;

class Room{
    int length;
	int breadth;
	int height;
    public:
    void display(int l, int b, int h){
        length = l;
		breadth = b;
		height = h;
        cout <<"\nArea: "<<length*breadth<<endl;
        cout <<"Volume: "<< length * breadth * height << endl;
    }
};
int main(){
    Room obj[3];
    obj[0].display(4,3,2);
    obj[1].display(3,4,5);
    obj[2].display(6,2,4);
    return 0;
}

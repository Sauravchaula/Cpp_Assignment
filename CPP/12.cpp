// Write base class that asks the user to enter Time (hour, minute
// and second) and derived class adds the Time of its own with the base. Finally,
// make third class that is friend of derived and calculate the difference of base
// class time and its own time.
#include <iostream>
using namespace std;

class time{
public:
    int hr;
    int min;
    int sec;
    void getdata()
    {
        cout << "Enter Hour: "<<endl;
        cin >> hr;
        cout<<" Minute: "<<endl;
        cin >> min;
        cout<<"Second: " << endl;
        cin >> sec;
    }
};
class addtime : public time{
	int hrs;
	int mins;
	int secs;
public:
	void getdata(){
		        cout << "Enter Hour: "<<endl;
        cin >> hrs;
        cout<<" Minute: "<<endl;
        cin >> mins;
        cout<<"Second: " << endl;
        cin >> secs;
	}
	void add(time s){
		hrs+=s.hr;
		mins+=s.min;
		secs+=s.sec;
	}
	void display(){
		cout << "Hour: " << hrs << endl;
        cout << "Minute: " << mins << endl;
        cout << "Second: " << secs<< endl;
	}
	friend class diff;
};
class diff{
	int hrss;
	int minss;
	int secss;
public:
	void getdata(){
		        cout << "Enter Hour: "<<endl;
        cin >> hrss;
        cout<<" Minute: "<<endl;
        cin >> minss;
        cout<<"Second: " << endl;
        cin >> secss;
	}
	void dispdiff(time s){
		hrss=s.hr-hrss;
		minss=s.min-minss;
		secss=s.sec-secss;
	}
	void display(){
		cout << "Hour: " <<hrss << endl;
        cout << "Minute: " <<minss<< endl;
        cout << "Second: " <<secss<< endl;
	}
};
int main(){
	time s1;
	s1.getdata();
	
	cout<<"\n--------------ADD---------------------"<<endl;
	addtime obj1;
	obj1.getdata();
	obj1.add(s1);
	obj1.display();
	
	cout<<"\n--------------Difference---------------------"<<endl;
	diff d1;
	d1.getdata();
	d1.dispdiff(s1);
	d1.display();
	
	return 0;
}

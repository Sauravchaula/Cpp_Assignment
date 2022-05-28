/*Create a class Account with data members acc no, balance, and
min_balance(static).
? Include methods for reading and displaying values of objects
? Define static member function to display min_balance
? Create array of objects to store data of 5 accounts and read and display
values of each object.
*/
#include<iostream>
using namespace std;
class Account {
float acc_no;
float balance;
static float min_balance;
public:
void reading(){
    cout <<"Acc_no: "<<endl;
	cin>>acc_no;
    cout <<"Balance: "<<endl;
	cin>>balance;
}
void displaying(){
   if(balance>min_balance){ 
    cout <<"Acc_no: "<<acc_no<<endl;
    cout <<"Balance: "<<balance<<endl;
   }
   else{
   	cout<<"Insufficient Balance: "<<endl;
   }
}
static void get_min(int m){
    min_balance=m;
}
static void display_min(){
    cout<<"Min_balance: "<<min_balance<<endl;
}
};
float Account::min_balance ;
int main(){
    Account A[5];
    Account::get_min(300);
    Account::display_min();
    for(int i=0;i<5;i++){
    cout<<"\n Enter the "<<i+1<<" data:"<<endl;
      A[i].reading();
    cout<<"Data: "<<i+1<<endl;
      A[i].displaying();
    }
    return 0;
}

/*Design a class to represent a bank account with data members
name, account-number, account-type, and balance. Define functions to assign
initial values, to deposit an amount, to withdraw an amount after checking
balance, and to display the name and balance. */
#include<iostream>
using namespace std;

class bank_acc{
	char name[32];
	int acc_no;
	string acc_type;
	float balance;
	public:
		void initial_value(){
		cout<<"-------Please fill up the information------------"<<endl;
		cout<<"Enter Your name: "<<endl;
		cin>>name;
		cout<<"Enter new account number: "<<endl;
		cin>>acc_no;
		cout<<"Enter account type: "<<endl;
		cin>>acc_type;
		cout<<"Enter your balance: "<<endl;
		cin>>balance;
		cout<<"------Your Account is created successfully------"<<endl;
	}
		void deposit(){
			cout<<"\n\n--------------------------------------------------------------------------"<<endl;
			int ac;
			float dep;
				cout<<"Enter your account number: "<<endl;
			cin>>ac;
			if(ac==acc_no){
			cout<<"Your amount is: "<<balance<<endl;
			cout<<"Amount to deposit: "<<endl;
			cin>>dep;
			balance+=dep;
			cout<<"Your New Balance is: "<<balance<<endl;
				display();
		}
			else{
			cout<<"------Invalid Account Number-------"<<endl;
		}
		}
		void withdraw(){
			cout<<"\n\n--------------------------------------------------------------------------"<<endl;
			int acc;
			float wit;
			cout<<"Enter your account number: "<<endl;
			cin>>acc;
			if(acc==acc_no){
			cout<<"Your amount is: "<<balance<<endl;
			cout<<"Amount to withdraw: "<<endl;
			cin>>wit;
			balance-=wit;
			cout<<"Your New Balance is: "<<balance<<endl;
			display();
		}
		else{
			cout<<"------Invalid Account Number-------"<<endl;
		}
		}
		void display(){
			cout<<"\n\n--------------------------------------------------------------------------"<<endl;
			cout<<"--------Your Current Information---------"<<endl;
			cout<<"Account number: "<<acc_no<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Account Type: "<<acc_type<<endl;
			cout<<"Balance: "<<balance<<endl;
		}
	};
	int main(){
		char d;
		bank_acc saurav;
		saurav.initial_value();
	loop:
		int s;
		 cout << "Please choose the appropriate numbers";
        cout << "\n1.Deposit" << "\n2.Withdraw" << "\n3.Check Balance" << "\n4.Exit\n"<<endl;
		 cout << "what you want.\n";
		cin>>s;
		switch(s){
		case 1:	
		saurav.deposit();
		break;
		case 2:
		saurav.withdraw();
		break;
		case 3:
		saurav.display();
		break;
		case 4:
		cout << "Are you want to exit.(y/n)" << endl;
            cin >> d;
            if (d == 'y' || d == 'Y')
            {
                exit(32);
            }
            else
            {
                goto loop;
            }
		default:
			cout<<"---------INVALID OPERATION---------"<<endl;
		}
		
	}

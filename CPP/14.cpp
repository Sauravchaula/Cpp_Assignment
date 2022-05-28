/*Write a program to enter the information of n students and then
display it using the concept of multilevel inheritance*/
#include<iostream>
using namespace std;

class Student
{
    public:
    int symbol;
    string name, address;
    void getData()
    {
        cout << "Enter name, symbol no and address of the student: " << endl;
        cin >> name >> symbol >> address;
    }
    void displayData()
    {
        cout << "Name: " << name<<endl;
        cout << "Symbol no: " << symbol << endl;
        cout << "Address: " << address << endl;
    }
};
class Exam : public Student
{
public:
    int m1, m2, m3, m4, m5;
    void getData()
    {
        cout << "Enter marks in 3 subjects as, " << endl;
        cout << "--------------------------------------" << endl;
        cout << "Science: " << endl;
        cin >> m1;
        cout << "Nepali: " << endl;
        cin >> m2;
        cout << "Computer: " << endl;
        cin >> m3;
    }
    void displayData()
    {
        cout << "Science: " << m1 << endl;
        cout << "Nepali: " << m2 << endl;
        cout << "Computer: " << m3 << endl;
    }
};
class Result : public Exam
{
    int total;
    float percentage;

public:
    void getData()
    {
        Student::getData();
        Exam::getData();
        total = m1 + m2 + m3;
        percentage = total * 0.2;
    }
    void displayData()
    {
        cout<<"-------------------STUDENT DETAILS-----------------"<<endl;
        Student::displayData();
        Exam::displayData();
        cout << "The total is: " << total << endl;
        cout << "The percentage is: " << percentage << endl;
    }
};
int main()
{
    int n;
    cout << "Enter total no of students: " << endl;
    cin >> n;
    Result o1[n];
    for (int i = 0; i < n; i++)
    {
        o1[i].getData();
        o1[i].displayData();
    }
    return 0;
}

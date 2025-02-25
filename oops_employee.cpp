#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    public:
    int employee_id;
    string name;
    int base_salary;
    int dearness_allowance;
    int travel_allowance;
    int monthly_salary;
    int annual_salary;
    void input()
    {
        cout<<"Employee id:";
        cin>>employee_id;
        cin.ignore();
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter base salary:";
        cin>>base_salary;
        cout<<"enter dearance allowance:";
        cin>>dearness_allowance;
        cout<<"enter travel  allowance";
        cin>>travel_allowance;
    }
    void calculate(){
        
        monthly_salary=base_salary+dearness_allowance+ travel_allowance;
        annual_salary=monthly_salary*12;
    }
    void display(){
        cout<<"Employee id:"<<employee_id<<endl;
        cout<<"Name:"<<name<<endl;
        cout << "Monthly salary:"<<monthly_salary<<endl;
        cout << "Annual salary:"<<annual_salary<<endl;
        
    }
};
Employee e;
int main(){
    e.input();
    e.calculate();
    e.display();
    return 0;
}    
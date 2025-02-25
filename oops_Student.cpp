#include<iostream>
#include<string.h>
using namespace std ;
class Student
{
    public:
    int rollNo;
    string name;
    int marks[5];
    void input()
    {
        cout<<"provide roll no:";
        cin>>rollNo;
        cin.ignore();
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter marks:";
        int i;
        for(i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void display(){
        cout<<"ROLL NO.:"<<rollNo<<endl;
        cout<<"NAME:"<<name<<endl;
        cout << "Marks: "<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};
Student s;
int main(){
    s.rollNo=12;
    s.input();
    s.display();
    return 0;
}
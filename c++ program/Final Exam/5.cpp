#include<iostream>
using namespace std;
class Emp
{
    public:
    string name, surname , emp_salary , emp_mobile;

    void getData()
    {
        cout<<"Enter the name:";
        cin>>name;

        cout<<"Enter the surname:";
        cin>>surname;

        cout<<"Enter the salary:";
        cin>>emp_salary;

        cout<<"Enter the mobile number:";
        cin>>emp_mobile;
    }

    void setData()
    {
        cout<<name<<" "<<surname<<"\t"<<emp_salary<<"\t"<<emp_mobile<<endl;
    }
};
int main()
{
    Emp e1[100];
    int n, i;

    cout<<"Enter the emp data list size:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        e1[i].getData();
    }

    for(i=0;i<n;i++)
    {
        e1[i].setData();
    }
}


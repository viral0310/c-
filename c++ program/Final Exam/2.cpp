#include<iostream>
using namespace std;
class Book;
class Std
{
    private:
    int a;
    friend void add(Std s1,Book b1);
};
class Book
{
    private:
    int b;
    friend void add(Std s1,Book b1);
};
void add(Std s1,Book b1)
{
    cout<<"Enter the value of A: ";
    cin>>s1.a;
    
    cout<<"Enter the value of B: ";
    cin>>b1.b;

    cout<<"Addition of A & B: "<<s1.a+b1.b;
}
int main()
{
    Std s1;
    Book b1;
    add(s1,b1);
}


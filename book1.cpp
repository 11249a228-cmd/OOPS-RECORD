#include<iostream>
using namespace std;
class Book
{
    private:
    int pages; int pages;
    char Bookname[50],ISBNO[50],Author[50];
    float price;
    public:
    void getdata();
    void display();
};
void::getdata()
{
cout<<"Enter the Book AccNo:";
cin>>AccNo;
cout<<"Enter the Book pages:";
cin>>pages;
cout<<"Enter the Book Name:";
cin>>Bookname;
cout<<"Enter the Book Author:";
cin>>Author;
cout<<"Enter the Book Price:";
cin>>price;
}
void::display()
{
    cout<<"Book AccNo"<<AccNo;
    cout<<"Book Name"<<Name;
    cout<<"Book ISBNO"<<IsbNo;  
    cout<<"Book Author"<<Author;
    cout<<"No.of pages in Book"<<pages;
    cout<<"price of Book"<<price;
}
int main(){zzx
    Book s;
    s.getdata();
    s.display();

}

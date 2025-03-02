/*Abigael Tallam
BSE-05-0067/2024
02/03/2024
Zetech University*/

#include <iostream>
#include <string>
using namespace std;
 
//create a class
class Person{
    protected://attribute of the class.
     string name;
     public:
     //setter
     void setName(string n){
        name=n;
     }
     //getter
     string getName(){
        return name;
     }
};

//create a derived class that inherits from Person class.
class LibraryMember:public Person{
    private://attributes of the class.
    int memberID;
    int booksBorrowed;
    public:
    
    //create a constructor with parameters
    LibraryMember(int memID,int BooksB,string n):Person(){
        memberID=memID;
        booksBorrowed=BooksB;
    }
//methods
    int getmemberID(){
        return memberID;
    }
    int getBooksBorrowed(){
        return booksBorrowed;
    }
};

//create a derived class that inherits from LibraryMember class. 
class PremiumMember: public LibraryMember{
    private://attributes.
    double MembershipFee;
    public:
    //constructor with parameters
    PremiumMember(int memID,int BooksB,string n,double fee): LibraryMember(memID,BooksB,n){
        MembershipFee=fee;
    }
//method
    double getmembershipfee(){
        return MembershipFee;
    }
};

int main(){
    Person p1;//create an object for Person class.
    p1.setName("Theo");
    cout<<"The name is "<<p1.getName()<<endl;
    
    LibraryMember lib(15678,5,"Theo");//create an object for LibraryMember class and call the constructor and assign values.
    cout<<"The member ID is "<<lib.getmemberID()<<endl;
    cout<<"The number of books borrowed is"<<lib.getBooksBorrowed()<<endl;

    PremiumMember prem(15678,5,"Theo",12000);//create an object for the class and call the constructor with values.
    cout<<"The membership fee is "<<prem.getmembershipfee()<<endl;
    return 0;


}
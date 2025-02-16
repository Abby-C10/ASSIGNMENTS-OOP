/*Abigael Tallam
BSE-05-0067/2025
16/02/2025
Zetech University*/

#include<iostream>
#include<ctime>
#include<string>
using namespace std;
void Libraryfine(string &bookID,int &duedate,int &returndate,int&Daysoverdue,int&fine){
    
    cout<<"Enter the book ID"<<endl;
    cin>>bookID;
    cout<<"Enter the duedate (DD)"<<endl;
    
    cin>>duedate;
    cout<<"Enter the return date (DD)"<<endl;
    cin>>returndate;
    Daysoverdue=returndate-duedate;
    cout<<"Days overdue is:"<<Daysoverdue<<endl;
    
    if (Daysoverdue>0 && Daysoverdue<=7){
        fine=Daysoverdue*20;
    }else if(Daysoverdue>7 &&Daysoverdue<=14){
        fine=Daysoverdue*50;
    }else if(Daysoverdue> 14){
        fine=Daysoverdue*100;
    }else
    fine=0;
}
    int main() {
        string bookID;
        int duedate,returndate,Daysoverdue,fine;
        Libraryfine(bookID,duedate,returndate,Daysoverdue,fine);
        cout<<"Book ID is :"<< bookID<<endl;
        cout<<"The due date is:"<<duedate<<endl;
        cout<<"The return date is:"<<returndate<<endl;
        cout<<"The fine is:"<<fine<<endl;
        return 0;

    }

/*BSE-05-0067/2024
Abigael Tallam
16/03/2024
Version 1*/


#include<iostream>
#include<string>
using namespace std;

//define the structure
struct Customer{
    string Name;
    double AccountBalance;
    string Lasttransaction; 


};
//function to dispaly customer details.
void displayCustomer(const Customer&c){
    cout<<"Name:"<<c.Name<<endl;
    cout<<"Account Balance:"<<c.AccountBalance<<endl;
    cout<<"Last transaction:"<<c.Lasttransaction<<endl;
}

int main(){
    Customer c1={"Bob",23,"Withdrawal"};
    Customer c2={"Neema",22,"Deposit"};
        cout<<"Display the given details"<<endl;
        displayCustomer(c1);
        displayCustomer(c2);
    

    //Enter details for the first client
    cout<<"Details for first client"<<endl;
    cout<<"Enter name "<<endl;
    cin>>c1.Name;
    cout<<"Enter the account balance "<<endl;
    cin>>c1.AccountBalance;
    cout<<"Enter the last transaction "<<endl;
    cin>>c1.Lasttransaction;

    //Enter the details for customer two
    cout<<"Details for the second client"<<endl;
    cout<<"Enter name "<<endl;
    cin>>c2.Name;
    cout<<"Enter the account balance "<<endl;
    cin>>c2.AccountBalance;
    cout<<"Enter the last transaction "<<endl;
    cin>>c2.Lasttransaction;

cout<<"\n Customer records"<<endl;
displayCustomer(c1);
displayCustomer(c2);
return 0;
}
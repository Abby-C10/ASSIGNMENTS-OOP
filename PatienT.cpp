/*BSE-05-0067/2024
Abigael Tallam
16/03/2024
Version 1*/


#include<iostream>
#include<string>
using namespace std;

struct Patient{
    string Name;
    int Age;
    string Diagnosis;
};

//Function to display the patients records
void displayPatients( const Patient&p){
    cout<<"Name :"<<p.Name<<endl;
    cout<<"Age:"<<p.Age<<endl;
    cout<<"Diagnosis:"<<p.Diagnosis<<endl;

}

int main(){ 
    //Create two patient records and assign values
    Patient p1={"Bob",20,"Diabetes"};
    Patient p2={"Neema", 22 ,"Flu"};
    cout<<"Display Patient records"<<endl;

    //call function to display the values
    displayPatients(p1);
    displayPatients(p2);

    //Enter the details for the first client.
    cout<<"\n Enter the details for the first patient"<<endl;
    cout<<"Name"<<endl;
    cin>>p1.Name;
    cout<<"Age"<<endl;
    cin>>p1.Age;
    cout<<"Diagnosis"<<endl;
    cin>>p1.Diagnosis;

    //Enter the details for the second client
    cout<<"\nEnter details for the second patient"<<endl;
    cout<<"Name"<<endl;
    cin>>p2.Name;
    cout<<"Age"<<endl;
    cin>>p2.Age;
    cout<<"Diagnosis"<<endl;
    cin>>p2.Diagnosis;

    cout<<"\nDisplaying the user-prompted details:"<<endl;
    displayPatients(p1);
    displayPatients(p2);
    return 0;

}
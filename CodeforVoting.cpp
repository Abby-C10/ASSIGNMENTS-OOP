/*Abigael Tallam
BSE-05-0067/2025
16/02/2024
Zetech University*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    int age; 
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"Eligible to vote"<<endl;

    }else{
        cout<<"Cannot vote"<<endl;
    }
    return 0;
    }
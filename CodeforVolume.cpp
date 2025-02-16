/*Abigael Tallam
BSE-05-0067/2024
16/02/2024
Zetech University*/

#include<iostream>
#include<cmath>
using namespace std;
void myFunction(double &radius,double &height){ //Declare the function
    cout<<"Enter the radius"<<endl;//Prompt the user to enter the radius
    cin>>radius;
    cout<<"Enter the height"<<endl;//Prompt the user to enter the height
    cin>>height;

}
int main(){
    const float PI=3.14;
    double volume,radius,height;//Declare variables
    myFunction(radius,height);//Call the function.
    volume=radius*radius*height*PI;//Calculate the volume
    cout<<"The volume of the cylinder is"<<volume<<endl;
    return 0;



}
/*Abigael Tallam
BSE-05-0067/2025
16/02/2025
Zetech University*/

#include<iostream>
#include<string>
using namespace std;
//Create a class .
class Car{
    public:
    //Attributes of the class.
    string brand;
    string model;
    float price;
    int mileage;

//Method that displays the attributes of the car.
void display (){
    cout<<"The brand is"<< brand<<endl;
    cout<<"The model is"<< model<<endl;
    cout<<"The price is"<< price<<endl;
    cout<<"The mileage is"<< mileage<<endl;
}
//Method that updates the mileage.
 int drive(int x){
    return mileage += x;
  }

};
int main(){
    int mil;//Declare a variable to store the updated mileage.
    Car myObj; //Create an object for the class.

    //Access the attributes and assign them values.
    myObj.brand="Toyota";
    myObj.model="Corolla";
    myObj.price=20000;
    myObj.mileage=5000;

    myObj.display();//Call the method.

    mil= myObj.drive(150);//Call the method and pass an argument.
    cout<<"Mileage is"<<mil<<endl;//Display the updated mileage.

    mil=myObj.drive(300);//Call the method and pass an argument.
    cout<<"Mileage is"<<mil<<endl;//Display the updated mileage.#include<iostream>


    

       return 0;
}
/*BSE-05-0067/2024
Abigael Tallam
Date: 10/03/2024
Version 1*/


#include <iostream>
using namespace std;
//macros
#define N 3


//1D arrays.
int main(){
    int array1[N];
    cout <<"Enter the values "<<endl;
for(int i=0;i<N;i++){//loop to store the values.
cin >> array1[i];
}

for(int i=0;i<N;i++){//loop to display the values.
    cout <<array1[i]<<" ";

    }

    //2D array.
    int array2[N][N];
    cout <<"enter the values"<<endl;//prompt user to enter values.
    for (int j=0;j<N;j++){//loop to store the values.
        for(int k=0;k<N;k++){
            cin>>array2[j][k];
        }
    }
    cout <<"The values of the array is:"<<endl;
    for(int j=0;j<N;j++){//loop to display the values
        for(int k=0;k<N;k++){
            cout<<array2[j][k]<<" ";
        }
        cout<<endl;
    }
    
    //3D array
    int array3[N][N][N];
    cout <<"Enter the values"<<endl;//prompt the user to enter the values.
    for(int j=0;j<N;j++){//loop to store the values.
      for(int k=0;k<N;k++){
        for(int l=0;l<N;l++){
            cin>>array3[j][k][l];
        }

}
    }
    cout<<"The values of the array is "<<endl;//loop to display the values
    for(int j=0;j<N;j++){
        for(int k=0;k<N;k++){
            for (int l=0;l<N;l++){
                cout<<array3[j][k][l];
            }
            cout <<endl;
        }
        cout<<endl;
    }
return 0;

    
}





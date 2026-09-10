#include<iostream>
using namespace std;

int main(){
    int i;
    for (i = 0 ; i <  4 ; i++){
         
        int j;
        for( j = 1 ; j <= 4 - i ; j++){

           cout << '*' << " ";
           
       }
       
       cout << endl;



    }
}
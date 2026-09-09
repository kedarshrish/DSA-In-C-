#include<iostream>
using namespace std;

int main(){

    int n = 1;

    int i = 1;
    while (i <= 4){


        int j = 1;


        while( j <= i){

            cout << n << " ";
            n = n - 1;
            j = j + 1;
            

            
        }
       
        cout << endl;
        i = i + 1;
         n = i;


        
    }
}
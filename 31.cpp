#include<iostream>
using namespace std;

int main(){

    int i = 0;
    while(i < 4 ){
       
        int j = 1;
        while(j <=i){

            cout << " " ;
            j = j + 1;

        }

         j = 1;
        while( j <= 4 - i){

            cout << '*' ;
            j = j + 1;

          }
         i = i + 1;
        cout << endl;

    }
}
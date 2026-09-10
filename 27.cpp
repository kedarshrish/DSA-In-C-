#include<iostream>
using namespace std;

int main(){

    char ch = 'A';

    int i = 1;
    while(i <= 4){
         
        int j = 1 ;

        while( j <= i){

            cout << ch << " ";
            j = j + 1;
            ch = ch + 1;


        }

       
        ch = 'A' + i;
         i = i + 1;
        cout << endl;

    }
}
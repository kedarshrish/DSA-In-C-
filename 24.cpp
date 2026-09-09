#include<iostream>
using namespace std;

int main(){

    char ch = 'A';

    int i = 1;
    while( i <= 3 ){

       int j = 0;
       while(j < 3){

        cout << ch << " ";
        ch = ch + 1;
        j = j + 1;


       }

       ch = 'A' + i;
       i = i + 1;
       cout << endl;

    }
}
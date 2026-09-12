#include<iostream>
using namespace std;

int main(){
    int n =  1;

    int i = 1;
    while(i <= 4){

        int j = 1;
        while( j < 5-i){

            cout <<" ";
            j = j + 1;


        }

        j = 1;
        while(j <= i){

            cout << n ;
            j = j + 1;
            n = n + 1;


        }

        cout << endl;
        i = i + 1;
        


    }
}
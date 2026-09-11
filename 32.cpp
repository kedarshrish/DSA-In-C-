#include<iostream>
using namespace std;

int main(){

    int n = 1;


    int i = 0;
    while(i < 4){

        int j = 0;
        while(j < i){

            cout << " ";
            j = j + 1;

            
        }
        

        j = 0;
        while(j < 4-i ){

            cout << n ;
            j = j + 1;
            
        }

        cout << endl;
        n = n +1;
        i = i + 1;

        
    }
}

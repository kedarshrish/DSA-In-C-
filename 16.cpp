#include<iostream>
using namespace std;

int main(){

    int x = 1;

    int i = 1;
    while(i <= 3){

        int j = 1;
        while( j <= 3){

            cout << x << " "; 
            x = x + 1;
            j = j + 1;

        }

        i = i + 1;
        cout << endl;
        
    }
}
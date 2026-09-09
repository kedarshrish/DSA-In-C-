#include<iostream>
using namespace std;

int main(){

    char ch = 'A';


    int i = 0;
    while(i < 4){
        
        int j = 0;

        while(j <= i){

            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;

            
        }

        
        i = i + 1;
        cout << endl;


    
    }
}
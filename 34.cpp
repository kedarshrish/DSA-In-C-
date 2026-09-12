#include<iostream>
using namespace std;

int main(){
    int n = 1;

    int i = 1;
    while(i <= 4 ){
        
        int j = 0;
        while( j < i){
            cout << " ";
            j = j + 1;



        }
          n =  i;
         j = 0;
        while(j <= 4-i ){
            
            cout << n << " ";
            n = n + 1;
            j = j + 1;

            
            
        }

       
        i = i + 1;
        cout << endl;
    }
}
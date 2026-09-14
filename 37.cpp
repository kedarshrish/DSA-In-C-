#include<iostream>
using namespace std;

int main(){

    
    int i = 1;
    while(i <= 5){


        int j = 1;
        int n = 1;
        while(j <= 6-i){

            cout << n << " ";
            n = n + 1;
            j = j + 1;

        }
        
        
        int k = 2;
        while(k <= i){

            cout <<'*'<<" ";
            k = k + 1;
            

        }

        int y = 3;
        while(y >= 5-i){

            cout <<'*'<<" ";
            y = y - 1;
            

        }
        
        
        int x = 1;
        int m = 6 - i;
        while(x <= 6-i){

            cout << m << " ";
            m = m - 1;
            x = x + 1;

        }
        
        i = i + 1;
        cout << endl;

    }
}
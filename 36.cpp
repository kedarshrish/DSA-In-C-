#include<iostream>
using namespace std;

int main(){

    int n = 1;
    
    





    int i = 1 ;
    while(i  <= 4 ){


       int j = 1;
       while( j <= 4-i){

        cout << "  ";
        j = j + 1;

       }

       j = 1;
       n = 1;
       while( j <= i ){

            cout << n << " ";
            j = j + 1;
            n = n + 1;

       }
       
      

       int  k = 2 ;
       int m = i - 1;
       while( k <= i){
          

    
            cout << m << " ";
            k = k + 1;
            m = m - 1;
           

        
       }
     


       i = i + 1;
       cout << endl;



    }
}
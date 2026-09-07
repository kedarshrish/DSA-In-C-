#include<iostream>
using namespace std;

int main(){

int n ;

cout << "Enetr n " << endl;
cin >> n;



int count = 0;
int i = 2;

while(i < n){         

       i = i + 1;

    if( n % i == 0){

        count = count + 1;

    }
    
 


    if (count != 0){

        cout << " Not Prime" << endl;
        break ;

    }

    else{

        cout << "Prime " << endl;
        break ;



    }

}

}
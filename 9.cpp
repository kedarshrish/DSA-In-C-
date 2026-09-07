#include<iostream>
using namespace std;

int main(){

char ch;
cout << "Enert a charachetr ch " << endl;

cin >> ch;

if( ch >= 'a' && ch <= 'z'){

    cout << "Lower case " << endl;


}

if( ch >= 'A' && ch <= 'Z'){

    cout << " Upper case " << endl;

    
}

if( ch >= '0' && ch <= '9'){

    cout << " Number  " << endl;

    
}

}
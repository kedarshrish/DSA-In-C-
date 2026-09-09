#include<iostream>
using namespace std;

int main(){

char ch = 'A';
int i = 1;

while(i <= 3 ){

    int j = 1;
    while( j <= i ){

        cout << ch << " ";
        j = j + 1;

    }

    ch = ch + 1;
    i = i + 1;
    cout << endl;

}

}
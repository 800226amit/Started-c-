#include<bits/stdc++.h>
using  namespace std;

int main(){
    int n;
    cout << "Enter the no.";
    cin>> n;
    if (n>0){
        cout << "+ve";
    }
    else if(n<0){
        cout<< "-ve";
    }
    else{
        cout<< "zero";
    }
    return 0;
}
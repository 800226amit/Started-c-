#include<iostream> 
using namespace std;

int main(){
   int n;
   cin>> n;

   bool isPrime=1;
   for(int i=1; i<=n; i++){
      if(n%2==0){
         isPrime=0;
         break;
      }
   }
   if(isPrime==0){
      cout<< " is not prime";
   }
   else{
      cout<< "is prime";
   }
}
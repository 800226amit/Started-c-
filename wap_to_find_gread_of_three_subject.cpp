#include<iostream>
using namespace std;

int main(){
	int sub1, sub2, sub3;

	cout<<"first subject ";
	cin>>sub1;
	cout<<"Second subject ";
	cin>> sub2;
	cout<<"third Subject ";
	cin>>sub3;
	
	float gread=(sub1+sub2+sub3)/3;
	
	if(gread>=80){
		cout<< "A gread";
	}
	else if(gread <80 && gread>=70){
		cout<< "B Gread";
	}
	else if(gread<70 && gread>=50){
		cout<< "C Gread";
	}
	else if(gread<50 && gread>= 30){
		cout << "D Gread";
	}
	else{
		cout<<"fail";
	}
	cout<<" and precentage is = " << gread;
}
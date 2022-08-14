
/*
Write a c++ program to find the grade of a student. Take input marks of 3
subjects and calculate the percentage.
If percentage >= 85 print A grade,
If percentage < 85 && percentage >= 75 print B grade,
If percentage < 75 && percentage >= 50 print C grade,
If percentage < 50 && percentage >= 30 print D grade,
If percentage <30 print fai
*/


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

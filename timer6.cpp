#include "timer6.h"
#include<string>
#include<fstream>
#include<cmath>
#include<iostream>
using namespace std;

void BMI::get(){

	string data;
	float a;
	ifstream inFile("infile",ios::in);
        getline(inFile,data);
	cout<<data<<endl;
	while(inFile>>BMI::height>>BMI::weight){
		a=BMI::reBMI(BMI::height,BMI::weight);
		cout<<a<<"\t"<<category(a)<<endl;
}

}
float BMI::reBMI(float height,float weight) {
	float BMI;
	BMI=weight/pow((height/100),2);
	return BMI ;
}
string  BMI::category(float BMI) {
	string category;
	if(BMI>=40) category="obese";
	else if(BMI<40&&BMI>=35) category="severely obese";
	else if(BMI<35&&BMI>=30) category="moderately obese";
	else if(BMI<30&&BMI>=25) category="overweight";
	else if(BMI<25&&BMI>=18.5) category="normal";
	else if(BMI<18.5&&BMI>=16) category="underweight";
	else if(BMI<16&&BMI>=15) category="severely underweight";
	else if(BMI<15) category="very severely underweight";
	return category;
}


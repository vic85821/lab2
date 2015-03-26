#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"lab2.h"
using namespace std;

void BMI::setHeight(float x)
{
    height=x;
}
void BMI::setWeight(float x)
{
    weight=x;
}
float BMI::getBMI()
{
    if(height!=0&&weight!=0)
    {
        height=height/100;
        bmi=weight/(height*height);
        return bmi;
    }
}
string BMI::cor()
{
    if(bmi<15)
    {
	con="Very severely underweight";
    }
    else if((15<bmi&&bmi<16)||bmi==15)
    {
        con="Severely underweight";
    }
    else if((16<bmi&&bmi<18.5)||bmi==16)
    {
	con="Underweight";
    }
    else if((18.5<bmi&&bmi<25)||bmi==18.5)
    {
        con="Normal";
    }
    else if((25<bmi&&bmi<30)||bmi==25)
    {
	con="Overweight";
    }	
    else if((30<bmi&&bmi<35)||bmi==30)
    {
	con="Obese Class I(Moderately obese)";	
    }
    else if((35<bmi&&bmi<40)||bmi==35)
    {
	con="Obese Class II(Severely obese)";
    }
    else if(bmi>40||bmi==40)
    {
	con="Obese Class III(Very severely obese)";
    }
    
    return con;

}

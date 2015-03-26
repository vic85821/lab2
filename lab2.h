#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
class BMI{
    public:
	void setHeight(float x);
        void setWeight(float x);
	float getBMI();
	string cor();
    private:
	float height;
	float weight;
	float bmi;
	string con; 
};



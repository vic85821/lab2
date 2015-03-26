#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include"lab2.h"

using namespace std;

int main()
{   
    BMI a;
    float heig;
    float weig;
    float ans;
    string x;
    ifstream inFile("file.in",ios::in);
    if(!inFile)
    {
	cerr<<"Failed opening"<<endl;
	exit(1);
    }
    ofstream outFile("file.out",ios::out);
    if(!outFile)
    {
        cerr<<"Failed opening"<<endl;
	exit(1);
    }
    while(inFile>>heig>>weig)
    {
	if(heig!=0&&weig!=0)
	{
	    a.setHeight(heig);
            a.setWeight(weig);
	    ans=a.getBMI();
	    x=a.cor();
            outFile<<"\t"<<ans<<"\t"<<x<<endl;
	}
    }

    return 0;
}	
    

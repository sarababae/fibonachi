#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int InputNumber,FirstNumber=0,SecondNumber=1,ThirdNumber;
	cout<<"please enter a number:";
	cin>>InputNumber;
	cout<<"0,1";
	for(ThirdNumber=1;ThirdNumber<=InputNumber;ThirdNumber++)
	{
		ThirdNumber=FirstNumber+SecondNumber;
		cout<<","<<ThirdNumber<<" ";
		FirstNumber=SecondNumber;
		SecondNumber=ThirdNumber;
		ThirdNumber=FirstNumber+SecondNumber;
	}
	cout<<endl;
}

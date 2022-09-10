#include <iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter size of your array: ";
	cin>>size;
	int*number = new int(size); //we have declared an array with dynamic memory allocation
	cout<<"Enter "<<size<<" values: "<<endl; //syntax of this array will be number[size]
	for(int i=0;i<size;i++)
	cin>>number[i]; //taking inputs
	cout<<"Values: ";
	for(int i=0;i<size;i++)
	cout<<number[i]<<" "; //displaying the values
	
	return 0;
}

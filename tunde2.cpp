#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

void populateArray (double [], int);
double average (double[int]);


int main(){
	int randomNum;
	srand(static_cast<unsigned int>(time(NULL)));
	
	int n;
	
	cout << "Enter the length of the array" << endl;
    cin>> n;
    
    double x[n];
    
    double randNumArray [100] ={};
    const int fill = n;
    populateArray(randNumArray, fill);
    
    double b = average(randNumArray[fill])
    
}

void populateArray (double *x, int n)
{
	for (int count = 1 ; count < n+1; count++)
	{
		x[count] = 1+rand()% 100;
		cout << x[count] << endl;
	}
}

double average(double x[int n])
{
	int j;
	double avg, sum =0;
	for(j=0;j<n;j++)
	{
		sum+= x[j];
	}
	avg = sum/n;
	return avg;
}

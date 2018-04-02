//new
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
	vector <int> data;
	int lenght = 100;
	int sum = 0;
	for(int i = 0; i < lenght ; i++){
		data.at(i) = (rand % 10) +1;	
	}

	for(int i = 0; i < lenght ; i++){
		sum += data.at(i);	
	}
	cout << "sum = " << sum << endl;



	return 0;
}

//new
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
	vector <int> data;
	int lenght = 100000;
	int sum = 0;
	for(int i = 0; i < lenght ; i++){
		data.push_back((rand() % 10) + 1);	
	}

	for(int i = 0; i < lenght ; i++){
		sum += data.at(i);	
	}
	cout << "sum = " << sum << endl;



	return 0;
}

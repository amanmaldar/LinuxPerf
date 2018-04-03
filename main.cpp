//new
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
	vector <int> data;
	vector <int> ans;
 	int lenght = 100000;
	int sum = 0;
	for(int i = 0; i < lenght ; i++){
		data.push_back((rand() % 5) + 1);	
	}

	for(int i = 0; i < lenght ; i++){
		sum += data.at(i);	
	}
	cout << "sum = " << sum << endl;

	for(int i = 0; i < lenght ; i++){
		sum = 0;
		for(int j = 0; j < lenght ; j++){
			sum += data.at(j);
			ans.push_back(sum);		//this will be same all the time
		}	
	}
	

	return 0;
}

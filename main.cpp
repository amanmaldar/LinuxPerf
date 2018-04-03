//new
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;


void bar();
void foo();
vector <int> data;
vector <int> ans;
int lenght = 20000;
int sum = 0;


void foo(void) {
	for(int i = 0; i < lenght ; i++){
	sum = 0;
		for(int j = 0; j < lenght ; j++){
			sum += data.at(j);			
		}	
			ans.push_back(sum);		//this will be same all the time
	}
}


void bar(void) {
   
   	for(int i = 0; i < lenght ; i++){
	sum = 0;
		for(int j = 0; j < lenght ; j++){
			sum += data.at(j);			
		}	
			ans.push_back(sum);		//this will be same all the time
	}
   
    foo();		//calls foo
}


int main()
{

	for(int i = 0; i < lenght ; i++){
		data.push_back((rand() % 5) + 1);	
	}
	
	bar();

	

	return 0;
}




/*

	for(int i = 0; i < lenght ; i++){
		sum += data.at(i);	
	}
	cout << "sum = " << sum << endl;


*/
#include "Inc.h"
#include "stdafx.h"
// Равномерное распределение 
//double Ravnom(double _max, double _min)
//{
//  return _min + double(rand()) / RAND_MAX * (_max - _min);
//}

double R(double b, double a){
	return a + b;
}

void PrintRavn(double a, double b){
	std::ofstream file;
	file.open("out.txt");
	double arr[100];
	for(int i = 0; i < 100; i++){
		arr[i] = R(a,b);
	}
	std::sort(arr,arr + 100);
	for(int i = 0; i < 100; i++){
		file << "(" << arr[i] << ";" << i << ")\n";
	}
	//file << Math(arr,100) << "\n";
	//file << Dispertion(arr,100) << "\n";

	file.close();
}

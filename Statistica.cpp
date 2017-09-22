// Statistic1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "cstdlib"
#include <cmath>
#include <algorithm>

const int N = 40, c = 2;
/*	с = 0 - Равномерное
с = 1 - Биномиальное
с = 2 - Геометрическое
*/
const int r_r = 40, r_l = 2; // Границы равномерного распределения
const double p = 0.5; // Вероятность биномиального или геометрического распределения

double Math1(double *m, int n){ // Математическое ожидания для равномерного распредения
	double sum = 0;
	for(int i = 0; i < n; i++){
		sum+=m[i];
	}
	return sum/n;
}

double Math(double *m, int n){ // Математическое ожидание
	double sum = 0;
	for(int i = 0; i < n; i++){
		sum+=m[i]*(i+1);
	}
	return sum;
} 

double Dispertion(double *m, int n){ // Дисперсия для равномерного распределения
	double sum(0), math = Math(m,n);
	for(int i = 0; i < n; i++){
		sum+=(m[i] - math)*(m[i] - math);
	}
	return sum/n;
}

double Dispertion1(double *m, int n){ // Дисперсия
	double sum(0), math = Math(m,n);
	for(int i = 0; i < n; i++){
		//sum+=(m[i]*i - math)*(m[i]*i - math);
		sum+=m[i]*(1+ i - math)*(i - math);
	}
	return sum;
}
void Start(int switch_on){
	int n = N;
	switch (switch_on)
	{
	case 0:{
		//Равномерное распределение
		int *m;
		m = new int[n];
		m = R(n); //
		printf("M = %f Mt = %f; abs(M-Mt) = %f\n", Math(m,n), (double)(r_r + r_l)/2, abs(Math(m,n) - (double)(r_r + r_l)/2));
		printf("D = %f Dt = %f; abs(D-Dt) = %f\n", Dispertion(m,n), (double)(r_r - r_l)*(r_r - r_l)/12, abs(Dispertion(m,n) - (double)(r_r - r_l)*(r_r - r_l)/12));
		delete m;

		break;
		   }
	case 1:{
		//Биномиальное распределение
		double *a;
		a = new double[n];
		a = RNorm(n,p); //
		printf("M = %f Mt = %f; abs(M-Mt) = %f\n", Math(a,n), (double)p*n, abs(Math(a,n) - (double)p*n));
		printf("D = %f Dt = %f; abs(D-Dt) = %f\n", Dispertion(a,n), (double)(1-p)*p*n, abs(Dispertion(a,n) - (double)(1-p)*p*n));
		delete a;

		break;
		   }
	case 2:{
		//Геометрическое распределение
		double *g;
		g = new double[n];
		g = RExp(n,p); //
		printf("M = %f Mt = %f; abs(M-Mt) = %f\n", Math(g,n), (double)1/p, abs(Math(g,n) - (double)1/p));
		printf("D = %f Dt = %f; abs(D-Dt) = %f\n", Dispertion(g,n), (double)(1-p)/pow(p,2), abs(Dispertion(g,n) - (double)(1-p)/pow(p,2)));
		delete g;

		break;
		   }
	default:
		break;
	}

}

int _tmain(int argc, _TCHAR* argv[])
{
	Start(c);
	getchar();
	return 0;
}


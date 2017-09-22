// Statistic.cpp: определяет точку входа для консольного приложения.
//


#include "Binom.h"
#include "Geom.h"
#include "Puasson.h"
#include "Log.h"

const int N = 40, c = 2;
/*	
с = 0 - Равномерное распределение
с = 1 - Биномиальное распределение
с = 2 - Геометрическое распределение
c = 3 - Распределение Пуассона
c = 4 - Логарифмическое распределение
*/

const double r_r = 100, r_l = 1; // Границы равномерного распределения
const double p = 0.5; // Вероятность биномиального или геометрического распределения

double Math(int *m, int n){ // Математическое ожидания для равномерного распредения
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

double Dispertion(int *m, int n){ // Дисперсия для равномерного распределения
	double sum(0), math = Math(m,n);
	for(int i = 0; i < n; i++){
		sum+=(m[i] - math)*(m[i] - math);
	}
	return sum/n;
}

double Dispertion(double *m, int n){ // Дисперсия
	double sum(0), math = Math(m,n);
	for(int i = 0; i < n; i++){
		//sum+=(m[i]*i - math)*(m[i]*i - math);
		sum+=m[i]*(i - math)*(i - math);
	}
	return sum;
}


void Start(int switch_on){
	int n = N;
	switch (switch_on)
	{
	case 0:{
		//Равномерное распределение
		
		break;
		   }
	case 1:{
		//Биномиальное распределение
	
		break;
		   }
	case 2:{
		//Геометрическое распределение
		
		break;
		   }
	default:
		break;
	}

}


int _tmain(int argc, _TCHAR* argv[])
{
	Log(0.5);
	return 0;
}

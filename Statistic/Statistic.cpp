// Statistic.cpp: ���������� ����� ����� ��� ����������� ����������.
//


#include "Binom.h"
#include "Geom.h"
#include "Puasson.h"
#include "Log.h"

const int N = 40, c = 2;
/*	
� = 0 - ����������� �������������
� = 1 - ������������ �������������
� = 2 - �������������� �������������
c = 3 - ������������� ��������
c = 4 - ��������������� �������������
*/

const double r_r = 100, r_l = 1; // ������� ������������ �������������
const double p = 0.5; // ����������� ������������� ��� ��������������� �������������

double Math(int *m, int n){ // �������������� �������� ��� ������������ �����������
	double sum = 0;
	for(int i = 0; i < n; i++){
		sum+=m[i];
	}
	return sum/n;
}

double Math(double *m, int n){ // �������������� ��������
	double sum = 0;
	for(int i = 0; i < n; i++){
		sum+=m[i]*(i+1);
	}
	return sum;
} 

double Dispertion(int *m, int n){ // ��������� ��� ������������ �������������
	double sum(0), math = Math(m,n);
	for(int i = 0; i < n; i++){
		sum+=(m[i] - math)*(m[i] - math);
	}
	return sum/n;
}

double Dispertion(double *m, int n){ // ���������
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
		//����������� �������������
		
		break;
		   }
	case 1:{
		//������������ �������������
	
		break;
		   }
	case 2:{
		//�������������� �������������
		
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

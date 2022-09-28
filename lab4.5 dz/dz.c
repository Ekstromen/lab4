#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define k 7
void dzlab4()
{
	setlocale(LC_ALL, "rus");
	int  a, b, c, d;
	printf("¬ведите кол-во денег:\n");
	scanf("%d", &d);
	printf("¬ведите цену перчаток:\n");
	scanf("%d", &a);
	printf("¬ведите цену портфел€:\n");
	scanf("%d", &b);
	printf("¬ведите цену галстука:\n");
	scanf("%d", &c);
	printf("\n¬аша сдача: %d", d - (a + b + c));
}

void practlab523()
{
	setlocale(LC_ALL, "rus");
	float x, y, a, b;

	printf("¬ведите X: \n");
	scanf("%f", &x);
	a = pow((k + x), 3);
	b = log10(fabs(k * x));
	y = pow(b, 2) + sqrt(fabs(a));
	printf(" a = %f,\n b = %f,\n y = %f\n",a, b, y);
	
	printf(" условие выполнено (1 - да, 0 - нет): %d",((int)a%3) && (((int)a%2 && (int)b%2) != 1) && ((int)b % 3) && ((int)y % 3));

}

void main()
{
	setlocale(LC_ALL, "rus");
	float x, y;
	printf("¬ведите X и Y: \n");
	scanf("%f", &x);
	scanf("%f", &y);
	printf("F(%f,%f) = %f", x, y, (2.33*log(sqrt(1 + pow(cos(x), 2)))) / (exp(y) + sqrt(sin(x))));

}

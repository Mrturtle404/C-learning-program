#include<stdio.h>

int main()
{
	double m,h,b;
	scanf("%lf %lf",&m,&h);
	b=m/(h*h);
	if (b<18.5) printf("Underweight\n");
	else if (b>=18.5&&b<24) printf("Normal\n");
	else printf("%.6g\nOverweight\n",b);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d;
	float  result;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	double f=((c-a)*(c-a))+((d-b)*(d-b));
	result=sqrt(f);
	printf("%f\n",result);
	return 0;
	
}

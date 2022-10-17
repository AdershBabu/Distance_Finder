#include<stdio.h> //library for input output 
#include<math.h>  // Library for math operations
int main()  //main function
{
	float a,b,c,d; //Declaring variables x1=a,y1=b ,x2= c , y2 =d
	
	float  result; // Declaring variable to store result
	
	scanf("%f%f%f%f",&a,&b,&c,&d); // Getting (x1,y1) and (x2,y2)
	
	double f=((c-a)*(c-a))+((d-b)*(d-b)); //Calculating "(x2-x1)^2 +(y2-y1)^2 " and storing in variable 'f'
	
 	result=sqrt(f);// Finding the square root 
 	
	printf("Distance is %f\n",result);  //printing the result
	
	return 0;  //returning  0
	
}

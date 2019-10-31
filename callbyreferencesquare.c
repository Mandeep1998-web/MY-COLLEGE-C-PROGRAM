// write a program to find the area of square and perimeter of square
#include<Stdio.h>
int square(int *x)
{
	int area=*x * *x;

	int perimeter=4 * *x;
	printf("Perimeter is %d",perimeter);
		return area;

}

int main()
{
	int side,perimeter,result1;
	printf("Enter the side of the squares  :");
	scanf("%d",&side);
	 result1=square(&side);
	 printf("\nAREA is%d",result1);
	return 0;
}

#include<stdio.h>

int main()
{
    int r, area,perimeter;
    float pi = 3.14;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    area = pi * r*r;
    perimeter = 2 * pi *r;
    printf("The area of circle: %d \n",area);
    printf("The perimeter of circle: %d",perimeter);
    return 0;
}
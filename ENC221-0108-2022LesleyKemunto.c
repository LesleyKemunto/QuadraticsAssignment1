
#include <stdio.h>
int main (){
float a,b,c,root1,root2;

printf("%f Enter the value of a\n");
scanf("%f",&a);

printf("%f Enter the value of b \n");
scanf("%f",&b);

printf("%f Enter the value of c \n");
scanf("%f",&c);

root1 = ((-b)+(sqrt((b*b)-(4*a*c))))/(2*a);
root2 = ((-b)-(sqrt((b*b)-(4*a*c))))/(2*a);

printf("%f The 1st root is: ",root1);
printf("  ");
printf("  ");
printf("%f The 2nd root is: ",root2);

return 0;
}

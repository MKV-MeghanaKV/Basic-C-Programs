Datatypes in C
int(integer values)
float(decimal values)
char(character values)
   
printf() is used to display text onto the screen.
scanf()  is used to take input from the user using format specifier.
& is used to assign the input value to the variable and store it at that particular location.
%d and %i both are format specifier to take integer input from user.
%f is the format specifier to take float input from user.
%s is the format specifier to take character input from user.
  
CODE:

#include<stdio.h>
int main()
{
  int num1,num2;
  float decivalue;
  char charvalue;
  printf("Enter the two numbers\n");
  scanf("%i%d",&num1,&num2);
  printf("\nTwo numbers entered are %d and %i\n",num1,num2);
  printf("Enter the decimal number\n");
  scanf("%f",&decivalue);
  printf("\ndecimal number entered is %f\n",decivalue);
  printf("Enter a character\n");
  scanf("%s",&charvalue);
  printf("\ncharacter entered is %s\n",charvalue);
  return 0;
}

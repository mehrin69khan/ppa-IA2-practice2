#include <stdio.h>
int input_side()
{
  int a;
  printf("Enter your number\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  if((a!=b)&&(b!=c))
  return 0;
  else 
  return 1;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==0)
  {
 printf("So the triangle is scalene ");
  }
  else
  {
  printf("So the triangle is not scalene ");
  }
}
int main()
{
int a,b,c,isscalene;
a=input_side();
b=input_side();
c=input_side();
isscalene=check_scalene(a,b,c);
output(a,b,c,isscalene);
return 0;
}
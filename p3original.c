#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the number:-\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    return 0;
    else 
    return 1;
  }
}
void output(int n,int composite)
{
  if(composite==0)
  {
    printf("Therefore the %d is composite",n);
    
  }
  else
  {
    printf("Therefore the %d is not composite",n);
  }
  
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}
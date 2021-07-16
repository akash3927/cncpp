//to show multiway decision based on several condition we use the else if statement
//(here the condition  are evaluated in order from top to bottom  as soon as any condition evaluates to true
//then statement associated with the given condition is executed and if all condition are false,then conttrol is transffered to statement_x
//skiipping the rest of condition 
#include <stdio.h>
int main()
{
  int mark;
  printf("enter total marks of the student:\n");
  scanf("%d",&mark); 


  if (mark <= 50)
  {
      printf("\nresult is grade D");
  }
  else if( mark <= 60)
  {
      printf("\nthe result is grade C");
  }
  else if(mark <= 70)
  {
      printf("\nthe grade is B");    
  }
  
  else
  {
      printf("\nthe grade is A");
  }
  return 0;


}  

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char convercestion(char you , char computer)
{ 
   if(you != computer)
   {
    
       return -1;
   }
   else if(you == "hii" && computer == "hlooo")
   {
       
       return 0;
   }
   else if(you == "good morning" && computer == "good morning")
   {
       
       return 1;
   }

}

int main(int argc, char const *argv[])
{
    char you , computer;
    int result;
    int n;
    computer = n;
    srand(time(NULL));
    n = rand()%100;
    if(n<33){
          computer = "hlooo";
      }
      else if(n>33 && n<66){
          computer = "good morning";
      }
      else{
          computer = "hiii";
      }


  
     
     for(int i=1;i<=1;i++)
     {

          printf("Enter any greeting\n");
     scanf("%d",&you);
    result = convercestion(you,computer);
          
  if( you != computer)
  {
      
      printf("OOPSS you and computer enter differen\n");

      printf("\n\n try again\n\n");
      
  }
   
   
    
  else if(you == computer)
  {
      
      printf("You bothe enter the same\n");

      break;
  }
         continue;
     }
    return 0;
}

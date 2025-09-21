#include<stdio.h>
 int main()
  { float dollars;
    printf("Enter dollars");
    scanf("%f",&dollars);
     float rupees = dollars * 48;
     float pounds = rupees /70;
     printf("pounds=%.2f\n",pounds);
     return 0;
  
  
  
  }
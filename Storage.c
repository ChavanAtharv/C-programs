  #include<stdio.h>
  
  int A = 10;                      // Global variable
  
  void Fun()                      // Function defination
  {
      auto int B = 20;
      register int D = 20;
      static int E = 20;
      
      B++;
      D++;
      E++;
      
      printf("Value of Auto variable : %d\n",B);
      printf("Value of register variable : %d\n",D);
      printf("Value of static variable : %d\n",E);
  }

  int main()
  {
      int C = 30;
   
      printf("First funtion call\n");
      Fun();
      printf("Second funtion call\n");
      Fun();                            // Function call
      printf("Third funtion call\n");
      Fun();
      return 0;
  }   

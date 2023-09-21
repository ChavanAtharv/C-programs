  #include<stdio.h>

  int A = 10;  // global variable

  extern int B;
  extern int C;
  
  
  int main()
  {
      printf("Value of A is : %d\n",A);
      printf("Value of B from other file is : %d\n",B);
      printf("Value of C from other file is : %d\n",C);
   
      return 0;
  }
  
  
  // Second.c is reference to this file

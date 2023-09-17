  #include<stdio.h>
  
  

  
  int main()
{
    int no = 11;

    int *p = &no;
    






    char ch = 'A';

    char*q = &ch;



   



    printf("%d\n",no);  //11
    printf("%d\n",p);   // 100
    printf("%d\n",&no);  // 100
    printf("%d\n",&p);   // 200
    printf("%d\n",sizeof(no));  // 4
    printf("%d\n",sizeof(p));   // 8
    
   // values are considered as per sir program
    

    return 0;
}

   

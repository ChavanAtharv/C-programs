 #include<stdio.h>
 
 struct Demo
 {
    int i;   // 4
    float f; //4
    char ch; //1
    float d; //4
 };  //13
 
 
 int main()
 {
   struct Demo dobj;
   
   printf("Size of the structure is : %d\n",sizeof(dobj));
   
   return 0;
 }  

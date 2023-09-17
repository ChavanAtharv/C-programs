 #include<stdio.h>
 
 // Structure Declaration
 // There is NO memory allocation at this point
 struct Demo
 {
   int i;
   float f;
   int j;
   double d;
 };
     int main()
 {
   
   // structure object / variable creation
   // Memory gets allocated at this point
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;
    
    // Member initialisation
    obj1.d = 11;
    obj2.i = 21;
    obj3.j = 51;
    
    printf("Size of obj1 is : %d\n",sizeof(obj1)); //20
    printf("Size of obj2 is : %d\n",sizeof(obj2)); //20
    printf("i of obj2 is : %d\n",obj2.i); //21
    
   return 0;
 }							

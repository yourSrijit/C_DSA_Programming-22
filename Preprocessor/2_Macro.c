// A macro is a segment of code which is replaced by the value of macro. Macro is defined by #define directive. There are two types of macros:
#include<stdio.h>  
 int main(){    
   printf("File :%s\n", __FILE__ );    
   printf("Date :%s\n", __DATE__ );    
   printf("Time :%s\n", __TIME__ );    
   printf("Line :%d\n", __LINE__ );    
   printf("STDC :%d\n", __STDC__ );      
   return 0;  
 }   
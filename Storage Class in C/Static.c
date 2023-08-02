/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void fun(){
    static int a=30; // As this is a static var so it will inisilize inly ones
    
    static int b; // invoked every time as it is a fresh assignmeny
    b=20;
    
    auto int c=40; // it also onevkoked every times
    a++;
    b++;
    c++;
    printf("%d\t%d\t%d",a,b,c);
    printf("\n");
    //31  21  41
    //32  21  41
}

int main()
{
   fun();
   fun();

    return 0;
}

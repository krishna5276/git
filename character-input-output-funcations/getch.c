#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("you pressed any key\n");
ch=getch();
printf("you pressed %c\n",ch);
return 0;
}


//output
//compilation terminated
//getch()not defined in standard libraries on linux
//<conio.h> not available in stdio available in Turbo c/c++
//we can use getchar() insted of getch()


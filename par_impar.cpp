#include <conio.h>
#include <stdio.h>
main()
{
	int num1;
	
	printf("Digite um numero: ");
	scanf("%d",&num1);
	
	if (num1 % 2 == 0)
        printf("Par");
    else
        printf("Impar");
	getch();
}

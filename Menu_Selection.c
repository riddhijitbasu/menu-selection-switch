#include<stdio.h>
main()
{
	printf("pick an item number from the menu: \n 1. French Fries, Rs 99 \n 2. Burger, Rs 129 \n 3. Sandwich, Rs 149 \n 4. Pasta, Rs 179 \n 5. Pizza, Rs 239 \n");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		printf("Food Item - French Fries \n Price- Rs 99");
		break;
		case 2:
		printf("Food Item - Burger \n Price- Rs 129");
		break;
	    case 3: 
		printf("Food Item - Sandwich \n Price- Rs 149");
		break;
		case 4: 
		printf("Food Item - Pasta \n Price- Rs 179");
		break;
		case 5: 
		printf("Food Item - Pizza \n Price- Rs 239");
		break;
		default : 
		printf("pick a number from 1 to 5 you dumbass");
	}
}

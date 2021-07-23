#include<stdio.h>
main()
{
	printf("pick an item of your choice:\n1.idly\n2.vada\n3.chapathi\n4.puri\n5.dosa");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("you picked idly-20/-");
		break;
		case 2:
		printf("you picked vada-50/-");
		break;
		case 3:
		printf("you picked chapathi-30/-");
		break;
		case 4:
		printf("you picked puri-40/-");
		break;
		case 5:
		printf("you picked dosa-10/-");
		break;
		default:printf("invalid choice");
				
	}
}

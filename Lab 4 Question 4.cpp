#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main ()
{	
	char type,cupsize,setting;
	float coffeetime;	
	printf("Enter the type of coffee.Enter B for Black and W for White: \n");
	scanf(" %c",&type);
	switch (type)
	{
		case 'W':
			printf("Enter D if the coffee size is double .Enter S if the coffee size is single: \n");
			scanf(" %c",&cupsize);
			switch(cupsize)
			{
				case 'S':
					printf("Enter M if the coffee is manual . Enter A if the coffee size is automatic \n");
					scanf(" %c",&setting);
					switch(setting)
					{
						case  'M':
							printf("Put water and wait for 15 minutes\n");
							printf("Put sugar and wait for 15 minutes\n");
							printf("Mix well for 20 minutes\n");
							printf("Add coffee and wait for 2 minutes\n");
							printf("Add milk and wait for 4 minutes\n");
							printf("Mix well for 20 minutes\n");
							printf("Your single white coffee is ready.Enjoy! \n");
							break;
						case 'A':
							coffeetime=15.0+15.0+20.0+2.0+4.0+20.0;
							printf("Your single white coffee will be ready in %f minutes\n.",coffeetime);
							break;
						default:
							printf("Invalid entry");
							break;	
					}
					break;
				case 'D':
					printf("Enter M if the coffee is manual . Enter A if the coffee size is automatic \n");
					scanf(" %c",&setting);
					switch(setting)
					{
						case  'M':
							printf("Put water and wait for %f minutes\n",15*1.5);
							printf("Put sugar and wait for %f minutes\n",15*1.5);
							printf("Mix well for %f minutes\n",20*1.5);
							printf("Add coffee and wait for %f minutes\n",2*1.5);
							printf("Add milk and wait for %f minutes\n",4*1.5);
							printf("Mix well for %f minutes\n",20*1.5);
							printf("Your double white coffee is ready.Enjoy! \n");
							break;
						case 'A':
							coffeetime=(15*1.5)+(15*1.5)+(20*1.5)+(2*1.5)+(4*1.5)+(20*1.5);
							printf("Your fouble whitecoffee will be ready in %f minutes\n.",coffeetime);
							break;
						default:
							printf("Invalid entry");
							break;
				}
				break;
					
			}
			break;
		case 'B':
			printf("Enter D if the coffee size is double .Enter S if the coffee size is single: \n");
			scanf(" %c",&cupsize);
			switch(cupsize)
			{
				case 'S':
					printf("Enter M if the coffee is manual . Enter A if the coffee size is automatic \n");
					scanf(" %c",&setting);
					switch(setting)
					{
						case  'M':
							printf("Put water and wait for 20 minutes\n");
							printf("Put sugar and wait for 20 minutes\n");
							printf("Mix well for 25 minutes\n");
							printf("Add coffee and wait for 15 minutes\n");
							printf("Mix well for 25 minutes\n");
							printf("Your single black coffee is ready.Enjoy! \n");
							break;
						case 'A':
							coffeetime=20.0+20.0+25.0+15.0+25.0;
							printf("Your single black coffee will be ready in %f minutes\n.",coffeetime);
							break;
						default:
							printf("Invalid entry");
							break;
					}
					break;
				case 'D':
					printf("Enter M if the coffee is manual . Enter A if the coffee size is automatic \n");
					scanf(" %c",&setting);
					switch(setting)
					{
						case  'M':
							printf("Put water and wait for %f minutes\n",20*1.5);
							printf("Put sugar and wait for %f minutes\n",20*1.5);
							printf("Mix well for %f minutes\n",25*1.5);
							printf("Add coffee and wait for %f minutes\n",15*1.5);
							printf("Mix well for %f minutes\n",25*1.5);
							printf("Your double black coffee is ready.Enjoy! \n");
							break;
						case 'A':
							coffeetime=(20*1.5)+(20*1.5)+(25*1.5)+(15*1.5)+(25*1.5);
							printf("Your coffee will be ready in %f minutes\n.",coffeetime);
							break;
						default:
							printf("Invalid entry");
							break;
					}
					break;
			}
			break;
			
	}
}
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
	int shop,admin,customer,n;
	char name[100],emailid[100],address[100];
	char choice[100];
	printf("\n");
	printf("************* WELCOME TO MY SHOP **************** \n");
	printf("\n");
	
	printf("enter 1 for ADMIN \n");
	printf("\n");
		
	printf("enter 2 for CUSTOMER \n");
	printf("\n");
		
	
	printf("WHAT TYPE OF PERSON ARE YOU AT THE SHOP:\n");
	scanf("%s", choice);
    if(!strcmp(choice, "2")) 
	{
		printf("\n");
        printf("*************** IAM A CUSTOMER ***********\n");
		printf("\n");
    }
    else if(!strcmp(choice, "1"))
    {
    	printf("**************** IAM AN ADMIN ***********\n");
    	exit(0);
		printf("\n");
		
	}
	if(!strcmp(choice, "3"))
	{
		printf("YOU ARE NOT THE RIGHT PERSON \n");
		exit(0);
		printf("\n");
	}
	
	printf("THE AVAILABLE TYPES OF MOBILES ARE \n");
	printf("\n");
	printf("1.BASIC MODEL\n");
	printf("\n");
	printf("2.ANDROID \n");
	printf("\n");
	printf("3.IOS \n");
	printf("\n");
	printf("DEAR CUSTOMER WHAT TYPE OF MOBILE DO YOU WANT ???????\n");
	printf("\n");
	scanf("%d",&n);
	printf("\n");
	
	if(n>=4)
	{
		printf("THE SELECTED TYPE OF MOBILE IS NOT AVAILABLE \n");
		printf("\n");
	}
	
	switch(n)
	{
		case 1: printf("THANK YOU FOR CHOOSING BASIC MODEL \n");
				printf("\n");
				printf("1.NOKIA 3110c\n");
				printf("\n");
				printf("	1.1 price is 3000 \n");
				printf("	1.2 it is a double sim device \n");
				printf("	1.3 the battery is 600mah \n");
				printf("\n");
				
				printf("2.SAMSUNG METRO \n");
				printf("\n");
				printf("	2.1 price is 3500 \n");
				printf("	2.2 it is a SINGLE sim device \n");
				printf("	2.3 the battery is 500mah \n");
				printf("\n");
				
				printf("3.SONY ERICSON \n");
				printf("\n");
				printf("	3.1 price is 4500 \n");
				printf("	3.2 it is a double sim device \n");
				printf("	3.3 the battery is 450mah \n");
				printf("\n");
				
				printf("4.MOTOTOLA E37\n");
				printf("\n");
				printf("	4.1 price is 4000 \n");
				printf("	4.2 it is a SINGLE sim device \n");
				printf("	4.3 the battery is 650mah \n");
				printf("\n");
				
				printf("5.LAVA Z200\n");
				printf("\n");
				printf("	5.1 price is 5000 \n");
				printf("	5.2 it is a double sim device \n");
				printf("	5.3 the battery is 700mah \n");
				printf("\n");
				
				printf("YOUR SELECTED DEVICE IS\n");
				scanf("%d",&n);
				
				switch(n)
				{
					case 1: printf("******* THE BILL COUNTER OF THE SHOP *******\n");
							printf("\n");
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your NOKIA 3110c for the PRICE of Rs 1500 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 2: printf("********** THE BILL COUNTER OF THE SHOP **********\n");
							printf("\n");
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
							printf("take your SAMSUNG METRO for the PRICE of Rs 4500 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 3: printf("*********** THE BILL COUNTER OF THE SHOP ************\n");
							printf("\n");
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your SONY ERICSON for the PRICE of Rs 3000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 4: printf("*********** THE BILL COUNTER OF THE SHOP ***********\n");
							printf("\n");
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your MOTOTOLA E37 for the PRICE of Rs 4500 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 5: printf("************* THE BILL COUNTER OF THE SHOP *************\n");
							printf("\n");
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", name);
    						printf("Your EMAIL ID: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", name);
    						printf("Your ADDRESS is: %s\n", name);
    						printf("\n");
    						
							printf("take your LAVA Z200 for the PRICE of Rs 3200 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					
					default:
							printf("your selected device is not available \n");
							printf("\n");
							printf("sorry for your convienence we hope to reach you soon \n");
							printf("\n");
							break;
							}
							break;
							
					case 2: printf("THANK YOU FOR CHOOSING ANDROID MODEL \n");
							printf("\n");
							printf("1.NOKIA 6.1 plus\n");
							printf("\n");
							printf("	1.1 4GB RAM\n");
							printf("	1.2 32 GB of MEMORY\n");
							printf("	1.3 16 mega pixels of REAR CAMERA\n");
							printf("	1.4 ANDROID VERSION is NOUGAT \n");
							printf("	1.5 SCREEN RESOLUTION is 720 * 1240\n");
							printf("	1.6 it is a double sim device \n");
							printf("\n");
							
							printf("2.SAMSUNG GALAXY S7\n");
							printf("\n");
							printf("	2.1 6GB RAM\n");
							printf("	2.2 128 GB of MEMORY\n");
							printf("	2.3 16 mega pixels of REAR CAMERA with AUTO FOCUS\n");
							printf("	2.4 ANDROID VERSION is OREO \n");
							printf("	2.5 SCREEN RESOLUTION is 1080 * 1920\n");
							printf("	2.6 it has a HYBRID SLOT \n");
							printf("\n");
							
							printf("3.XPERIA Z3 PLUS\n");
							printf("\n");
							printf("	3.1 4GB RAM\n");
							printf("	3.2 64 GB of MEMORY\n");
							printf("	3.3 20 mega pixels of REAR CAMERA\n");
							printf("	3.4 ANDROID VERSION is MARSHMALLOW \n");
							printf("	3.5 SCREEN RESOLUTION is 1080 * 1920\n");
							printf("	3.6 it is a double sim device \n");
							printf("\n");
										
							printf("4.MICROMAX CANVAS 2 PLUS\n");
							printf("\n");
							printf("	4.1 4GB RAM\n");
							printf("	4.2 32 GB of MEMORY\n");
							printf("	4.3 13 mega pixels of REAR CAMERA\n");
							printf("	4.4 ANDROID VERSION is LOLLIPOP \n");
							printf("	4.5 SCREEN RESOLUTION is 720 * 1080\n");
							printf("	4.6 it is a SINGLE sim device \n");
							printf("\n");
							
							printf("5. HTC ONE M8\n");
							printf("\n");
							printf("	5.1 4GB RAM\n");
							printf("	5.2 6 GB of MEMORY\n");
							printf("	5.3 12 mega pixels of REAR CAMERA with DUAL LED FLASH\n");
							printf("	5.4 ANDROID VERSION is OREO \n");
							printf("	5.5 SCREEN RESOLUTION is 1080 * 1920\n");
							printf("	5.6 it is a double sim device \n");
							printf("\n");
				
							printf("YOUR SELECTED DEVICE IS\n");
							scanf("%d",&n);
				
				switch(n)
				{
					case 1: printf("************ THE BILL COUNTER OF THE SHOP ************\n");
							printf("\n");
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your NOKIA 6.1 PLUS for the PRICE of Rs 16000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 2: printf("************* THE BILL COUNTER OF THE SHOP **************\n");
							printf("\n");
							
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your SAMSUNG GALAXY S7 PLUS for the PRICE of Rs 40000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 3: printf("************** THE BILL COUNTER OF THE SHOP ***************\n");
							printf("\n");
							
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your XPERIA Z3 PLUS for the PRICE of Rs 30000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 4: printf("******************* THE BILL COUNTER OF THE SHOP *************\n");
							printf("\n");
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your MICROMAX CANVAS 2 PLUS for the PRICE of Rs 15000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 5: printf("************ THE BILL COUNTER OF THE SHOP **************\n");
							printf("\n");
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESSS is: %s\n", address);
    						printf("\n");
    						
							printf("take your HTC ONE M8 for the PRICE of Rs 32000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
					
					default:
							printf("your selected device is not available \n");
							printf("\n");
							printf("sorry for your convienence we hope to reach you soon \n");
							printf("\n");
							}
							break;
							
				case 3:	printf("THANK YOU FOR CHOOSING IOS MODEL \n");
						printf("\n");
						printf("1.IPHONE X\n");
						printf("\n");
						printf("	1.1 4GB RAM\n");
						printf("	1.2 128 GB of MEMORY\n");
						printf("	1.3 16 mega pixels of REAR CAMERA\n");
						printf("	1.4 IOS VERSION is IOS 12.3 \n");
						printf("	1.5 SCREEN RESOLUTION is 1080 * 1920\n");
						printf("	1.6 it is a SINGLE sim device \n");
						printf("\n");
						
						printf("2.IPHONE 7 PLUS\n");
						printf("\n");
						printf("	2.1 2GB RAM\n");
						printf("	2.2 32 GB of MEMORY\n");
						printf("	2.3 16 mega pixels of REAR CAMERA with AUTO FOCUS\n");
						printf("	2.4 IOS VERSION is 10.2 \n");
						printf("	2.5 SCREEN RESOLUTION is 1244 * 1920\n");
						printf("	2.6 it is a SINGLE SIM DEVICE \n");
						printf("\n");
						
						printf("3.IPHONE 8\n");
						printf("\n");
						printf("	3.1 3GB RAM\n");
						printf("	3.2 64 GB of MEMORY\n");
						printf("	3.3 20 mega pixels of REAR CAMERA\n");
						printf("	3.4 IOS VERSION is 11.3 \n");
						printf("	3.5 SCREEN RESOLUTION is 720* 1020\n");
						printf("	3.6 it is a SINGLE sim device \n");
						printf("\n");
						
						printf("4.IPHONE 6s\n");
						printf("\n");
						printf("	4.1 1GB RAM\n");
						printf("	4.2 16 GB of MEMORY\n");
						printf("	4.3 8 mega pixels of REAR CAMERA\n");
						printf("	4.4 IOS VERSION is 10.5 \n");
						printf("	4.5 SCREEN RESOLUTION is 760 * 1080\n");
						printf("	4.6 it is a SINGLE sim device \n");
						printf("\n");
						
						printf("5 IPHONE 6s PLUS\n");
						printf("\n");
						printf("	5.1 2GB RAM\n");
						printf("	5.2 32GB of MEMORY\n");
						printf("	5.3 12 mega pixels of REAR CAMERA with DUAL LED FLASH\n");
						printf("	5.4 IOS VERSION is 11,2 \n");
						printf("	5.5 SCREEN RESOLUTION is 766 * 1020\n");
						printf("	5.6 it is a SINGLE sim device \n");
						printf("\n");
						
						printf("YOUR SELECTED DEVICE IS\n");
						scanf("%d",&n);
				
				switch(n)
				{
					case 1: printf("*************** THE BILL COUNTER OF THE SHOP ****************\n");
							printf("\n");
							
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your IPHONE X for the PRICE of Rs 16000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 2: printf("************** THE BILL COUNTER OF THE SHOP ***************\n");
							printf("\n");
							
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your IPHONE 7 PLUS for the PRICE of Rs 40000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 3: printf("*************** THE BILL COUNTER OF THE SHOP ***************\n");
							printf("\n");
							
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your IPHONE 8 for the PRICE of Rs 30000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 4: printf("*************** THE BILL COUNTER OF THE SHOP *************\n");
							printf("\n");
							
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your address: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your IPHONE 6s for the PRICE of Rs 15000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
							
					case 5: printf("*************** THE BILL COUNTER OF THE SHOP ****************\n");
							printf("\n");
							
							printf("Enter your NAME: ");
							printf("\n");
    						scanf("%s", name);
    						printf("Your NAME is: %s\n", name);
    						printf("\n");
    						
    						printf("Enter your EMAIL ID: ");
    						printf("\n");
    						scanf("%s", emailid);
    						printf("Your EMAIL ID is: %s\n", emailid);
    						printf("\n");
    						
    						printf("Enter your ADDRESS: ");
    						printf("\n");
    						scanf("%s", address);
    						printf("Your ADDRESS is: %s\n", address);
    						printf("\n");
    						
							printf("take your IPHONE 6s PLUS for the PRICE of Rs 32000 \n");
							printf("\n");
							printf("THANK YOU VISIT AGAIN\n");
							printf("\n");
							break;
				
					case 6:
							printf("your selected device is not available \n");
							printf("\n");
							printf("sorry for your convienence ...we hope to reach you soon \n");
							printf("\n");
							break;
						
	}
	}
}








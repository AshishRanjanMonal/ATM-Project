#include<stdio.h>
int main()
{
	int n,a,b,c,d,i,e,f,h,j,k,l,m,o,z=0,p1,p2;
	long long int g;
   printf ("WELCOME TO THE BANK OF AKKR\n");
   printf("\n!!!!PLEASE ENTER THE CARD IN RIGHT WAY!!!!\n");
   while(1){
   	a=0;
   printf ("\nEnter the 4-Digit Password for Complete The Transaction\n");
   scanf ("%d",&a);
   p1=a;
   z=0;
   while (a!=0)
   {
   	a=a/10;
   	z++;
   }
   if (z==4)
   {
	p2=p1;
   printf ("\nyour Password process is complete\n");
   break;
	}
   if(z!=4)
   { 
   printf ("you are either enter less than 4 digit password or greater than 4 digit password\n ");
   //break;
   }
   }printf ("\nSelect the type of Account!!!!\n");
   printf ("1- Saving Account\n");
   printf ("2- Current Account\n");
   printf ("3- Recurring Deposit Account.\n");
   printf ("4- Fixed Deposit Account.\n");
   scanf ("%d",&b);
   switch (b)
   {
   	case 1:
   		printf ("Your Account is Saving Account\n");
   		printf ("What are you want to do Here\n");
   		printf ("Press the Required Key for Complete the Transaction\n");
   		printf ("1-Balance Cheak\n 2-cash Withdrawal\n 3- Fast cash Withdrawal\n 4- Pin Change\n 5- Pin / Password Generate\n 6- Mini Statement\n");
   		scanf ("%d",&c);
   		switch (c)
   		{
   			case 1:
   				printf ("WELCOME TO THE BALANCE CHEAK PROCESS \n ");
   				printf ("HERE YOU WILL ABLE TO CHEAK  BALANCE OR FUND \n ");
				printf ("your Bank account Money is 10000000000000000000000000000000000000000000000000000000000\n");
				printf("Do you Want to Print recipt of the transaction\n");
				printf ("1-YES\n2- NO\n");
				scanf ("%d",&d); 	
				switch (d)
				{
					case 1:
						printf ("You Are not Saving Paper so i Requst to dont print recipt see on the screen what is your Balance \n");
					    printf ("your Transaction is succesfull.......\n");
					    printf ("Wish You Have a great day And KEEP ALWAYS SMILING\n");
					    break;
					case 2:
						printf ("Please see on the Screen \n");
						printf ("You are genius and Saving the Environment Keep it up GOOD\n");
					    printf ("your Transaction is succesfull.......\n");
					    printf ("Wish You Have a great day And KEEP ALWAYS SMILING\n");
						break;
						default:
						printf ("WRONG CHOICE!!!!!\n");
				
				}
				break;
				case 2:
					printf ("WELCOME TO THE CASH WITHDRAWL SECTIONS\n");
					printf ("Please enter The Amount in the multiple of 100\n");
					scanf ("%d",&e);
					printf ("\nPlease Wait your transaction is under process\n");
					printf ("\nCOLLECT THE CASH \n");
					printf ("\nyour transaction is  sucessfully complete!!!!!!!!! \n");
					break;
				case 3:
					printf ("\nWELCOME TO THE  FAST CASH WITHDRAWL SECTIONS\n");
					printf ("\nPlease enter The Amount in the multiple of 100\n");
					scanf ("%d",&f);
					printf ("\nPlease Wait your transaction is under process\n");
					printf ("\nCOLLECT THE CASH \n");
					printf ("\nyour transaction is  sucessfully complete!!!!!!!!! \n");
					break;
				case 4:
						printf ("\nWELCOME TO THE PIN CHANGE SECTIONS\n");
						printf ("\nHere you will Eassly Changed the pin/Password of your CARD\n");
						printf ("\n Enter Your Registerd Mobile NUMBER\n");
						scanf ("%lld",&g);
						printf ("Enter The OTP Sent on registerd phone number\n");
						scanf ("%d",&h);
						printf ("\nyou have requst to enter current Password\n");
						scanf ("%d",&i);
						if(i==p2)
						{
							printf ("\nSET NEW password\n");
							scanf ("%d",&j);
							printf ("\nConfrm NEW password\n");
							scanf ("%d",&k);
							if (j==k)
							printf ("\npin is succesfully changed\n");
							else
							{
							printf ("\npin is not succesfully changed\n");
							printf ("\nBETTER LUCK NEXT TIME!!!!\n");
						    }
						}
						else 
						{
						printf ("you enter CURRENT WRONG Password\n ");
						printf ("\nsorry\n");
						printf ("your Transaction is incomplete\n");
					    }
				    break;
			    case 5:
			    		printf ("\nWELCOME TO THE PIN GENERATE SECTIONS\n");
			    		printf ("this Section is only Used when first time card is inserting \n");
			    		printf ("\n Enter Your Registerd Mobile NUMBER\n");
						scanf ("%lld",&l);
						printf ("Enter The OTP Sent on registerd phone number\n");
						scanf ("%d",&m);
						printf ("\nset the New 4- Digit Password \n");
						scanf ("%d",&n);
			    	    printf ("you have enter password is %d",n);
			    	    printf (" \nCONGRATS you have generated password sucefully.......\n");
			    	    printf ("good job Man WELL DONE !!!!!!\n");
				   	break;
				case 6:
					printf ("\nWELCOME TO THE MINI BALANCE CHEAK  STATEMENT PROCESS \n ");
					printf (" \nDo YOU WANT TO PRINT THE RECIPTS \n");
					printf ("1-yes\n 2- no\n");
					scanf ("%d",&o);
					switch (o)
					{
						case 1:
						      printf ("You Are not Saving Paper so i Requst to dont print recipt see on the screen what is your Balance \n");
						      printf ("\nPlease collect the recipt from the recipt box\n");
					          printf ("your Transaction is succesfull.......\n");
					          printf ("Wish You Have a great day And KEEP ALWAYS SMILING\n");
					        break;
					    case 2:
					       	printf ("Please see on the Screen \n");
						    printf ("You are genius and Saving the Environment Keep it up GOOD\n");
					        printf ("your Transaction is succesfull.......\n");
					        printf ("Wish You Have a great day And KEEP ALWAYS SMILING\n");
						break;
						default:
							printf ("you have enter wrong choice\n");
				    }
		   }
   		break;
   	case 2:
   		printf ("Your Account is Current Account\n");
   		break;
	case 3:
   		printf ("Your Account is Recurring Deposit Account.\n");
   		break;
   	case 4:
   		printf ("Your Account is Fixed Deposit Account.\n") ;
		   break;
	default:
		   printf ("WRONG CHOICE\n");	
   }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
char uname[30]="",upass[30]="";
int ticketprice=0;
int hotelprice=0;
int money=0;
int localprice=0;
int total=0;
char trip[20];
int date,month,year;
int date1,month1,year1;
typedef struct{
	char naame[50];
	int train_num;
	int num_of_seats;
}pd;
void record(int mem){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\n\t                                                           ");
        printf("\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb RECORD  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        printf("\n\t                                                           ");
        printf("\t===================================================================");
        printf("\n\t                                                           ");
        printf("\t Booking ID : %d \t\t\t      Place : %s",10184678,"Goa");
        printf("\n\t                                                           ");
        printf("\t Customer Name  : %s",uname);
        printf("\n\t                                                           ");
        printf("\t                                              From Date     : %d/%d/%d",date,month,year);
        printf("\n\t                                                           ");
        printf("\t                                              To Date       : %d/%d/%d",date1,month1,year1);
        printf("\n\t                                                           ");
        printf("\t                                              Dep. Time     : 9 A.M");
        printf("\n\t                                                           ");
        printf("\t                                              Total Members : %d",mem);
        printf("\n\t                                                           ");
        printf("\t                                              Price         : %d",total);
        printf("\n\t                                                           ");
        printf("\t                                              Payment       : Done!");
        printf("\n\t                                                           ");
        printf("\t====================================================================");
        printf("\n\t                                                           ");
        char str[10];
    printf("\n\n                                                                                         ");
    printf("Do you wish to continue?(Write Yes or No):");
       scanf("%s",str);
                if(strcmp(str,"Yes")==0 || strcmp(str,"yes")==0){
                         system("cls");
                         loading();
                         hello(mem);
                }
                else if(strcmp(str,"No")==0 || strcmp(str,"no")==0)
                    system("exit");
}
void food(int mem){
  int order,quantity;
    SetColor(6);
    printf("\n\n");
    printf("\n                                                           ");
    printf("----------------------------------------------------------------------------------------------");
    printf("\n                                                           ");
	printf("Item No.\t\tItem Name\t\t     Price\t\t\tIn Stock");
	printf("\n                                                           ");
	printf("----------------------------------------------------------------------------------------------");
	SetColor(7);
	printf("\n                                                           ");
	printf("\t1\t\tBurger\t\t\t     Rs.120\t\t\t  23");
	printf("\n                                                           ");
	printf("\t2\t\tPizza\t\t             Rs.100\t\t\t  13");
	printf("\n                                                           ");
	printf("\t3\t\tHot Cake\t\t     Rs.720\t\t\t  8");
	printf("\n                                                           ");
	printf("\t4\t\tCoffee\t\t\t     Rs.70\t\t\t  46");
	printf("\n                                                           ");
	printf("\t5\t\tIce-Cream\t\t     Rs.70\t\t\t  42");
	printf("\n                                                           ");
	printf("\t6\t\tSandwich\t\t     Rs.60\t\t\t  34");
	printf("\n                                                           ");
    printf("\t7\t\tCold Drink\t\t     Rs.20\t\t\t  73");
    printf("\n                                                           ");
    printf("\t8\t\tDosa\t\t\t     Rs.100\t\t\t  25");
    printf("\n\n");
    printf("\n                                                           ");
    printf("\t\t\t\t\tEnter Your Order: ");
    scanf("%d",&order);
    printf("\n\n                                                           ");
    printf("\t\t\t\t\tEnter Quantity: ");
    scanf("%d",&quantity);
    if(order==1){
        if(quantity>23 || quantity==0){
            SetColor(4);
        printf("\n\n\t                                                                                         ");
        printf("Out Of Stock!!");
        Sleep(2000);
        system("cls");
        SetColor(7);
            food(mem);
        }
        else{
            money+=quantity*120;
        }
    }
    else if(order==2){
        if(quantity>13 || quantity==0){
            SetColor(4);
        printf("\n\n\t                                                                                         ");
        printf("Out Of Stock!!");
        Sleep(2000);
        system("cls");
        SetColor(7);
            food(mem);
        }
        else{
            money+=quantity*100;
        }
    }
    else if(order==3){
        if(quantity>8 || quantity==0){
            SetColor(4);
        printf("\n\n\t                                                                                         ");
        printf("Out Of Stock!!");
        Sleep(2000);
        system("cls");
        SetColor(7);
            food(mem);
        }
        else{
            money+=quantity*720;
        }
    }
    else if(order==4){
        if(quantity>46 || quantity==0){
           SetColor(4);
        printf("\n\n\t                                                                                         ");
        printf("Out Of Stock!!");
        Sleep(2000);
        system("cls");
        SetColor(7);
            food(mem);
        }
        else{
            money+=quantity*70;
        }
    }
    else if(order==5){
        if(quantity>42 || quantity==0){
            SetColor(4);
        printf("\n\n\t                                                                                         ");
        printf("Out Of Stock!!");
        Sleep(2000);
        system("cls");
        SetColor(7);
            food(mem);
        }
        else{
            money+=quantity*70;
        }
    }
    else if(order==6){
        if(quantity>34 || quantity==0){
            SetColor(4);
        printf("\n\n\t                                                                                         ");
        printf("Out Of Stock!!");
        Sleep(2000);
        system("cls");
        SetColor(7);
            food(mem);
        }
        else{
            money+=quantity*60;
        }
    }
    else if(order==7){
        if(quantity>73 || quantity==0){
            SetColor(4);
        printf("\n\n\t                                                                                         ");
        printf("Out Of Stock!!");
        Sleep(2000);
        system("cls");
        SetColor(7);
            food(mem);
        }
        else{
            money+=quantity*20;
        }
    }
    else if(order==8){
        if(quantity>25 || quantity==0){
            SetColor(4);
        printf("\n\n\t                                                                                         ");
        printf("Out Of Stock!!");
        Sleep(2000);
        system("cls");
        SetColor(7);
            food(mem);
        }
        else{
            money+=quantity*100;
        }
    }
    SetColor(2);
    printf("\n\n\n\t                                                                                         ");
        printf("Its Price is Rs.%d",money);
    SetColor(7);
        char str[10];
    printf("\n\n                                                                                         ");
    printf("Do you wish to continue?(Write Yes or No):");
       scanf("%s",str);
                if(strcmp(str,"Yes")==0 || strcmp(str,"yes")==0){
                         system("cls");
                         loading();
                         hello(mem);
                }
                else if(strcmp(str,"No")==0 || strcmp(str,"no")==0)
                    system("exit");
}
void wel(){
    SetColor(2);
    system("cls");
	char welcome[50]="WELCOME";
	char welcome2[50]=" TO";
	char welcome3[50]=" SAIYAAR";
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t");
	for(int wlc=0; wlc<strlen(welcome);wlc++){

		printf(" %c",welcome[wlc]);
		Sleep(100);
	}
	//ccolor(26);
	printf(" ");
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){

		printf(" %c",welcome2[wlc2]);
		Sleep(100);
	}
	//ccolor(26);
	printf("  ");
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){

			printf(" %c",welcome3[wlc3]);
		}
		else{

			printf(" %c",welcome3[wlc3]);
		}

		Sleep(100);
	}
	SetColor(7);
    system("cls");
}
void loading(){
  for (int i=15;i<=100;i+=5){

		system("cls");

		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t");
		printf("%d %% Loading...\n\n\t\t",i);


		for (int j=0; j<i;j+=2){
			printf("   ");
		}
		Sleep(100);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(100);
		}
        system("cls");
	}
}
void thankyou(){
    SetColor(2);
    system("cls");
	char welcome[50]="THANK";
	char welcome2[50]=" YOU !!!";
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t");
	for(int wlc=0; wlc<strlen(welcome);wlc++){

		printf(" %c",welcome[wlc]);
		Sleep(100);
	}
	printf(" ");
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){

		printf(" %c",welcome2[wlc2]);
		Sleep(100);
	}
	printf("  ");
	SetColor(7);
    system("cls");
}

void specifictrain(int train_num)
{

	if (train_num==1001)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tGoa Smprk K Express");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Goa");
		printf("\n                                                                                         ");
		printf("Departure:\t\t9am ");
	}
	if (train_num==1002)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tMumbai Express");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Mumbai");
		printf("\n                                                                                         ");
		printf("Departure:\t\t12pm");
	}
	if (train_num==1003)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tIntercity Express");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Jaipur");
		printf("\n                                                                                         ");
		printf("Departure:\t\t8am");
	}
	if (train_num==1004)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tGo Air");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Kerala");
		printf("\n                                                                                         ");
		printf("Departure:\t\t11am ");
	}
	if (train_num==1005)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tIndiGo");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Mumbai");
		printf("\n                                                                                         ");
		printf("Departure:\t\t7am");
	}
	if (train_num==1006)
	{
	    printf("\n                                                                                         ");
		printf("train:\t\t\tAir India");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Manali");
		printf("\n                                                                                         ");
		printf("Departure:\t\t9.30am ");
	}
	if (train_num==1007)
	{
	    printf("\n                                                                                         ");
		printf("train:\t\t\tSpice Jet");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Darjeeling");
		printf("\n                                                                                         ");
		printf("Departure:\t\t1pm ");
	}
	if (train_num==1008)
	{
	    printf("\n                                                                                         ");
		printf("train:\t\t\tAir India");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Goa");
		printf("\n                                                                                         ");
		printf("Departure:\t\t4pm ");
	}
}
void printticket(char naame[],int num_of_seats,int train_num,float charges)
{
	system("cls");
	printf("\n                                                                                         ");
	SetColor(3);
	printf("-------------------");
	printf("\n                                                                                         ");
	printf("\tTICKET");
	printf("\n                                                                                         ");
	printf("-------------------");
	SetColor(2);
	printf("\n\n\n                                                                                         ");
	printf("Name:\t\t\t%s",naame);
	printf("\n                                                                                         ");
	printf("Number Of Seats:\t%d",num_of_seats);
	printf("\n                                                                                         ");
	printf("Train Number:\t\t%d",train_num);
	specifictrain(train_num);
	printf("\n                                                                                         ");
	printf("Charges:\t\t%.2f",charges);
	SetColor(7);
}
float charge(int train_num,int num_of_seats)
{
		if (train_num==1001)
	{
	    ticketprice+=800*num_of_seats;
		return(800.0*num_of_seats);
	}
	if (train_num==1002)
	{
	    ticketprice+=600*num_of_seats;
		return(600.0*num_of_seats);
	}
	if (train_num==1003)
	{
	    ticketprice+=400*num_of_seats;
		return(400.0*num_of_seats);
	}
	if (train_num==1004)
	{
	    ticketprice+=11000*num_of_seats;
		return(11000.0*num_of_seats);
	}
	if (train_num==1005)
	{
	    ticketprice+=7000*num_of_seats;
		return(7000.0*num_of_seats);
	}
	if (train_num==1006)
	{
	    ticketprice+=5000*num_of_seats;
		return(5000.0*num_of_seats);
	}
	if (train_num==1007)
	{
	    ticketprice+=6000*num_of_seats;
		return(6000.0*num_of_seats);
	}
	if (train_num==1008)
	{
	    ticketprice+=9000*num_of_seats;
		return(9000.0*num_of_seats);
	}
}
void reservation(int mem)
{
	char confirm;
	int i=0;
	float charges;
	pd passdetails;
	FILE *fp;
	fp=fopen("ticket.txt","a");
	system("cls");
    printf("\n                                                                                         ");
	printf("Enter Your name:> ");
	scanf("%s",passdetails.naame);
	passdetails.num_of_seats=mem;
    system("cls");
	viewdetails();
	printf("\n\n                                                                                         ");
	printf("Enter train number:> ");
	scanf("%d",&passdetails.train_num);
	if(passdetails.train_num>=1001 && passdetails.train_num<=1008)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.naame,passdetails.num_of_seats,passdetails.train_num,charges);
	}
	else
	{
	    SetColor(4);
        printf("\n\n                                                                                         ");
        printf("Invalid!");
        Sleep(2000);
        system("cls");
        SetColor(7);
			reservation(mem);
	}
    printf("\n\n                                                                                         ");
	printf("Confirm Ticket (y/n):>");
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&passdetails.naame,passdetails.num_of_seats,passdetails.train_num,charges);
		printf("\n                                                                                         ");
		printf(" Reservation Done\n");
		printf("\n                                                                                         ");
		 char str[10];
    printf("\n\n                                                                                         ");
    printf("Do you wish to continue?(Write Yes or No):");
       scanf("%s",str);
			if(strcmp(str,"Yes")==0 || strcmp(str,"yes")==0){
                         system("cls");
                         loading();
                         hello(mem);
                }
                else if(strcmp(str,"No")==0 || strcmp(str,"no")==0)
                    system("exit");
	}
	else
	{
		if(confirm=='n'){
                printf("\n                                                                                         ");
			printf("Reservation Not Done!");
			 char str[10];
    printf("\n\n                                                                                         ");
    printf("Do you wish to continue?(Write Yes or No):");
       scanf("%s",str);
			if(strcmp(str,"Yes")==0 || strcmp(str,"yes")==0){
                         system("cls");
                         loading();
                         hello(mem);
                }
                else if(strcmp(str,"No")==0 || strcmp(str,"no")==0)
                    system("exit");
		}
		else
		{
		    SetColor(4);
        printf("\n\n                                                                                         ");
        printf("Invalid!");
        Sleep(2000);
        system("cls");
        SetColor(7);
			reservation(mem);
		}
	}
	fclose(fp);
}
void viewdetails(){
    SetColor(6);
printf("\n\n   ");
    printf(" -------------------              ---------------------               ---------------------               ---------------------               ---------------------               ---------------------\n");
    printf("   ");
    printf("|                   |            |                      |            |                      |            |                      |            |                      |            |                      |\n");
    printf("   ");
    printf("|        Goa        |            |        Mumbai        |            |        Jaipur        |            |        Kerala        |            |        Manali        |            |      Darjeeling      |\n");
    printf("   ");
    printf("|                   |            |                      |            |                      |            |                      |            |                      |            |                      |\n");
    printf("   ");
    printf(" -------------------              ----------------------              ----------------------              ----------------------              ----------------------              ----------------------");
    printf("\n\n");
    printf("\n                                                           ");
    SetColor(3);
    printf("----------------------------------------------------------------------------------------------");
    printf("\n                                                           ");
	printf("Sr.No\tname\t\t     Destinations\t\t\tCharges\t\tTime");
	printf("\n                                                           ");
	printf("----------------------------------------------------------------------------------------------");
	SetColor(7);
	printf("\n                                                           ");
	printf("1001\tGoa Smprk K Express\t     Chandigarh to Goa\t\t\tRs.800\t\t9am");
	printf("\n                                                           ");
	printf("1002\tMumbai Express\t             Chandigarh To Mumbai\t\tRs.600\t\t12pm");
	printf("\n                                                           ");
	printf("1003\tIntercity Express\t     Chandigarh To Jaipur\t\tRs.400\t\t8am");
	printf("\n                                                           ");
	printf("1004\tGo Air\t\t\t     Chandigarh To Kerala\t\tRs.11000\t11am");
	printf("\n                                                           ");
	printf("1005\tIndiGo\t\t\t     Chandigarh To Mumbai\t\tRs.7000\t\t7am");
	printf("\n                                                           ");
	printf("1006\tAir India\t\t     Chandigarh to Manali\t\tRs.5000\t\t9.30am");
	printf("\n                                                           ");
    printf("1007\tSpice Jet\t\t     Chandigarh to Darjeeling\t\tRs.6000\t\t1pm");
    printf("\n                                                           ");
    printf("1008\tAir India\t\t     Chandigarh to Goa\t\t\tRs.9000\t\t4pm");
    printf("\n");
}
//****************************************************************************************************************
void specifictrain1(int train_num)
{

	if (train_num==1001)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tThai Air");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Thailand");
		printf("\n                                                                                         ");
		printf("Departure:\t\t9am ");
	}
	if (train_num==1002)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tSpiceJet");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Dubai");
		printf("\n                                                                                         ");
		printf("Departure:\t\t12pm");
	}
	if (train_num==1003)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tAir India");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Maldives");
		printf("\n                                                                                         ");
		printf("Departure:\t\t8am");
	}
	if (train_num==1004)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tGo Air");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Singapore");
		printf("\n                                                                                         ");
		printf("Departure:\t\t11am ");
	}
	if (train_num==1005)
	{
	    printf("\n                                                                                         ");
		printf("Train:\t\t\tIndiGo");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to Bangkok");
		printf("\n                                                                                         ");
		printf("Departure:\t\t7am");
	}
	if (train_num==1006)
	{
	    printf("\n                                                                                         ");
		printf("train:\t\t\tAir India");
		printf("\n                                                                                         ");
		printf("Destination:\t\tChandigarh to USA");
		printf("\n                                                                                         ");
		printf("Departure:\t\t9.30am ");
	}
}
void printticket1(char naame[],int num_of_seats,int train_num,float charges)
{
	system("cls");
	printf("\n                                                                                         ");
	SetColor(3);
	printf("-------------------");
	printf("\n                                                                                         ");
	printf("\tTICKET");
	printf("\n                                                                                         ");
	printf("-------------------");
	SetColor(2);
	printf("\n\n\n                                                                                         ");
	printf("Name:\t\t\t%s",naame);
	printf("\n                                                                                         ");
	printf("Number Of Seats:\t%d",num_of_seats);
	printf("\n                                                                                         ");
	printf("Train Number:\t\t%d",train_num);
	specifictrain1(train_num);
	printf("\n                                                                                         ");
	printf("Charges:\t\t%.2f",charges);
	SetColor(7);
}
float charge1(int train_num,int num_of_seats)
{
		if (train_num==1001)
	{
	    ticketprice+=8500*num_of_seats;
		return(8500.0*num_of_seats);
	}
	if (train_num==1002)
	{
	    ticketprice+=15000*num_of_seats;
		return(15000.0*num_of_seats);
	}
	if (train_num==1003)
	{
	    ticketprice+=12000*num_of_seats;
		return(12000.0*num_of_seats);
	}
	if (train_num==1004)
	{
	    ticketprice+=23000*num_of_seats;
		return(23000.0*num_of_seats);
	}
	if (train_num==1005)
	{
	    ticketprice+=10000*num_of_seats;
		return(10000.0*num_of_seats);
	}
	if (train_num==1006)
	{
	    ticketprice+=25000*num_of_seats;
		return(25000.0*num_of_seats);
	}
}
void reservation1(int mem)
{
	char confirm;
	int i=0;
	float charges;
	pd passdetails;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");
	system("cls");
    printf("\n                                                                                         ");
	printf("Enter Your name:> ");
	scanf("%s",passdetails.naame);
	passdetails.num_of_seats=mem;
	system("cls");
	viewdetails1();
	printf("\n\n                                                                                         ");
	printf("Enter train number:> ");
	scanf("%d",&passdetails.train_num);
	if(passdetails.train_num>=1001 && passdetails.train_num<=1006)
	{
		charges=charge1(passdetails.train_num,passdetails.num_of_seats);
		printticket1(passdetails.naame,passdetails.num_of_seats,passdetails.train_num,charges);
	}
	else
	{
	    SetColor(4);
        printf("\n\n                                                                                         ");
        printf("Invalid!");
        Sleep(2000);
        system("cls");
        SetColor(7);
			reservation1(mem);
	}
    printf("\n\n                                                                                         ");
	printf("Confirm Ticket (y/n):>");
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&passdetails.naame,passdetails.num_of_seats,passdetails.train_num,charges);
		SetColor(2);
		printf("\n                                                                                         ");
		printf(" Reservation Done\n");
		printf("\n                                                                                         ");
		SetColor(7);
		char str[10];
    printf("\n\n                                                                                         ");
    printf("Do you wish to continue?(Write Yes or No):");
       scanf("%s",str);
		if(strcmp(str,"Yes")==0 || strcmp(str,"yes")==0){
                         system("cls");
                         loading();
                         hello(mem);
                }
                else if(strcmp(str,"No")==0 || strcmp(str,"no")==0)
                    system("exit");
	}
	else
	{
		if(confirm=='n'){
                SetColor(4);
                printf("\n                                                                                         ");
			    printf("Reservation Not Done!");
                SetColor(7);
                char str[10];
    printf("\n                                                                                         ");
    printf("Do you wish to continue?(Write Yes or No):");
       scanf("%s",str);
                if(strcmp(str,"Yes")==0 || strcmp(str,"yes")==0){
                         system("cls");
                         loading();
                         hello(mem);
                }
                else if(strcmp(str,"No")==0 || strcmp(str,"no")==0)
                    system("exit");
		}
		else
		{
SetColor(4);
        printf("\n\n                                                                                         ");
        printf("Invalid!");
        Sleep(2000);
        system("cls");
        SetColor(7);
			reservation1(mem);
		}
	}
	fclose(fp);
}
void viewdetails1(){
    SetColor(6);
    printf("\n\n   ");
    printf(" -------------------              ---------------------               ---------------------               ---------------------               ---------------------               ---------------------\n");
    printf("   ");
    printf("|                   |            |                      |            |                      |            |                      |            |                      |            |                      |\n");
    printf("   ");
    printf("|     Thailand      |            |        Dubai         |            |       Maldives       |            |      Singapore       |            |       Bangkok        |            |          USA         |\n");
    printf("   ");
    printf("|                   |            |                      |            |                      |            |                      |            |                      |            |                      |\n");
    printf("   ");
    printf(" -------------------              ----------------------              ----------------------              ----------------------              ----------------------              ----------------------");
    printf("\n\n");
    printf("\n                                                           ");
    SetColor(3);
    printf("----------------------------------------------------------------------------------------------");
    printf("\n                                                           ");
	printf("Sr.No\tname\t\t     Destinations\t\t\tCharges\t\tTime");
	printf("\n                                                           ");
	printf("----------------------------------------------------------------------------------------------");
	SetColor(7);
	printf("\n                                                           ");
	printf("1001\tThai Air\t\t     Chandigarh to Thailand\t\tRs.8500\t\t9am");
	printf("\n                                                           ");
	printf("1002\tSpiceJet\t             Chandigarh To Dubai\t\tRs.15000\t12pm");
	printf("\n                                                           ");
	printf("1003\tAir India\t\t     Chandigarh To Maldives\t\tRs.12000\t8am");
	printf("\n                                                           ");
	printf("1004\tGo Air\t\t\t     Chandigarh To Singapore\t\tRs.23000\t11am");
	printf("\n                                                           ");
	printf("1005\tIndiGo\t\t\t     Chandigarh To Bangkok\t\tRs.10000\t7am");
	printf("\n                                                           ");
	printf("1006\tAir India\t\t     Chandigarh to USA\t\t\tRs.25000\t9.30am");
    printf("\n");
}
//*********************************************************************************************************************************


void check(){
    char user[30],pass[30];
  printf("\n                                                                                         ");
    printf("Login -");
    printf("\n\n                                                                                         ");
 printf("Enter Your User Name: ");
    scanf(" %[^\n]s",user);
    if(strcmp(user,uname)==0){
        printf("\n                                                                                         ");
        printf("Enter Password: ");
        scanf(" %[^\n]s",pass);
        if(strcmp(pass,upass)==0){
         printf("\n                                                                                         ");
       SetColor(2);
       printf("Login Successful!\n");
       SetColor(7);
       wel();
       system("cls");
       members();
        }
    }
    else
  {
      SetColor(4);
      printf("\n                                                                                         ");
      printf("Wrong Password,Please Try Again\n");
      SetColor(7);
  }

}
void SetColor(int ForgC)
 {
      WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
void f(){
     char ch[30];
    SetColor(2);
  printf("\n\n                                                                            ");
	printf("  OOOOOO      O      OOOOO   O       O     O          O      OOOOOOO  ");
	printf("\n                                                                            ");
	printf("  O          O O       O       O   O      O O        O O     O     O  ");
	printf("\n                                                                            ");
	printf("  OOOOOO    OOOOO      O         O       OOOOO      OOOOO    OOOOOOO  ");
	printf("\n                                                                            ");
	printf("       O   O     O     O         O      O     O    O     O   O  O     ");
	printf("\n                                                                            ");
	printf("  OOOOOO  O       O  OOOOO       O     O       O  O       O  O     O  ");
	SetColor(6);
	printf("\n\n\n                                                                                       ");
	printf("Get The Best Packages For Your Trip.");
	printf("\n\n                                                                                                ");
	SetColor(3);
	printf("1.Sign Up");
    printf("\n\n                                                                                                ");
    printf("2.Login to Your Account");
    printf("\n\n                                                                                         ");
    SetColor(7);
    printf("Enter Your Choice: ");
    scanf("%s",ch);
    if(strcmp(ch,"SignUp")==0 || strcmp(ch,"signup")==0 || strcmp(ch,"Sign-up")==0 || strcmp(ch,"Signup")==0 ||  strcmp(ch,"sign-up")==0)
      signup();
    else if(strcmp(ch,"Login")==0 || strcmp(ch,"login")==0)
        login();
    else{
        SetColor(4);
        printf("\n\n                                                                                         ");
        printf("Invalid!");
        Sleep(2000);
        SetColor(7);
        system("cls");
        f();
    }
}
 void local(int mem){
    printf("\n                                                                                         ");
    printf("\t1.Home Station:");
     printf("\n                                                                                         ");
    printf("\t2.Destination:\n");
     printf("\n                                                                                         ");
     printf("Enter Choice: ");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    home(mem);
    else if(choice==2)
    des(mem);
    char str[10];
    printf("\n\n                                                                                         ");
    printf("Do you wish to continue?(Write Yes or No):");
       scanf("%s",str);
                if(strcmp(str,"Yes")==0 || strcmp(str,"yes")==0){
                         system("cls");
                         loading();
                         hello(mem);
                }
                else if(strcmp(str,"No")==0 || strcmp(str,"no")==0)
                    system("exit");
 }
void home(int mem){
    int n1,n2;
   printf("\n                                                                                         ");
    printf("\tAC Taxi:press 1\n");
    printf("\n                                                                                         ");
    printf("\tNon-AC Taxi:press 2\n");
    scanf("%d",&n1);
    if(n1==1){
            printf("\n                                                                                         ");
         printf("\tTo Railway Station:press 1\n");
    printf("\n                                                                                         ");
         printf("\tTo Airport:press 2\n");
         printf("\n                                                                                         ");
         printf("Enter Choice:");
         scanf("%d",&n2);
         if(n2==1){
        printf("\n                                                                                         ");
         printf("\tTotal Bill : Rs%d\n",mem*300);
         localprice+=mem*300;
         }
         else if(n2==2){
                printf("\n                                                                                         ");
         printf("\tTotal Bill : Rs%d\n",mem*500);
         localprice+=mem*500;
         }
    }
    else if(n1==2){
            printf("\n                                                                                         ");
         printf("\tTo Railway Station:press 1\n");
    printf("\n                                                                                         ");
         printf("\tTo Airport:press 2\n");
         printf("\n                                                                                         ");
         printf("Enter Choice:");
         scanf("%d",&n2);
         if(n2==1){
                printf("\n                                                                                         ");
         printf("\tTotal Bill : Rs%d\n",mem*150);
         localprice+=mem*150;
         }
         else if(n2==2){
             printf("\n                                                                                         ");
         printf("\tTotal Bill : Rs%d\n",mem*300);
         localprice+=mem*300;
         }
    }


}
void des(int mem){
     int n1,n2;
     printf("\n                                                                                         ");
    printf("\tAC Taxi:press 1\n");
    printf("\n                                                                                         ");
    printf("\tNon-AC Taxi:press 2\n");
    printf("\n                                                                                         ");
    printf("Enter Choice:");
    scanf("%d",&n1);
    if(n1==1){
            printf("\n                                                                                         ");
         printf("\tFrom Railway Station:press 1\n");
         printf("\n                                                                                         ");
         printf("\tFrom Airport:press 2\n");
         printf("\n                                                                                         ");
         printf("\tFrom Hotel to Sight Seeing:press 3\n");
         printf("\n                                                                                         ");
         printf("Enter Choice:");
         scanf("%d",&n2);
         if(n2==1){
                printf("\n                                                                                         ");
         printf("\tTotal Bill : Rs%d\n",mem*300);
         localprice+=mem*300;
         }
         else if(n2==2){
        printf("\n                                                                                         ");
         printf("\tTotal Bill : Rs%d\n",mem*500);
         localprice+=mem*500;
         }
         else if(n2==3){
                printf("\n                                                                                         ");
            printf("\tTotal Bill : Rs%d\n",mem*700);
            localprice+=mem*700;
         }
    }
    else if(n1==2){
            printf("\n                                                                                         ");
         printf("\tTo Railway Station:press 1\n");
    printf("\n                                                                                         ");
         printf("\tTo Airport:press 2\n");
         printf("\n                                                                                         ");
         printf("\tFrom Hotel to Sight Seeing:press 3\n");
         printf("\n                                                                                         ");
         printf("Enter Choice:");
         printf("\n                                                                                         ");
         scanf("%d",&n2);
         if(n2==1){
                printf("\n                                                                                         ");
         printf("\tTotal Bill : Rs%d\n",mem*150);
         localprice+=mem*150;
         }
         else if(n2==2){
                printf("\n                                                                                         ");
         printf("\tTotal Bill : Rs%d\n",mem*300);
         localprice+=mem*300;
         }
          else if(n2==3){
                printf("\n                                                                                         ");
            printf("\tTotal Bill : Rs%d\n",mem*550);
            localprice+=mem*550;
          }
    }
}
void ticket(int mem){
SetColor(3);
    printf("\n                                                                   ");
 printf("     *******                                                      ");
 printf("\n                                                                   ");
 printf("      *      *                                                    ");
 printf("\n                                                                   ");
 printf("       *       *                                                  ");
 printf("\n                                                                   ");
 printf("     ***        *********************************************************************        ");
 printf("\n                                                                   ");
 printf("      *         O      OOOOO   OOOOOO   O        OOOOO   O       O  OOOOOO   OOOOOO   *        ");
 printf("\n                                                                   ");
 printf("       *       O O       O     O    O   O          O     O O     O  O        O         *      ");
 printf("\n                                                                   ");
 printf("        *     OOOOO      O     OOOOOO   O          O     O   O   O  OOO      OOOOOO     *     ");
 printf("\n                                                                   ");
 printf("         *   O     O     O     O  O     O          O     O     O O  O             O    *    ");
 printf("\n                                                                   ");
 printf("           *O       O  OOOOO   O     O  OOOOOO   OOOOO   O       O  OOOOOO   OOOOOO   *     ");
 printf("\n                                                                   ");
 printf("             ****      *************           **************************************     ");
 printf("\n                                                                   ");
 printf("              *      *           *          *                      ");
 printf("\n                                                                   ");
 printf("             *     *            *         *                        ");
 printf("\n                                                                   ");
 printf("            *******            *        *                          ");
 printf("\n                                                                   ");
 printf("                              *       *                            ");
 printf("\n                                                                   ");
 printf("                             *      *                              ");
 printf("\n                                                                   ");
 printf("                            *******                                ");
SetColor(7);

    printf("\n\n\n                                                                                         ");
   printf("Enter your choice");
    printf("\n                                                                                         ");
    printf("\t1.Domestic");
     printf("\n                                                                                         ");
    printf("\t2.International (Air)\n");
     printf("\n                                                                                         ");
     printf("Enter Choice: ");
    int choice;
    scanf("%d",&choice);

    if(choice==1)
    {
        reservation(mem);
        trip[20]="dom";
    }
    else if(choice==2)
    {
        reservation1(mem);
        trip[20]="inter";
    }
    else{
        SetColor(4);
        printf("\n\n                                                                                         ");
        printf("Invalid!");
        Sleep(2000);
        system("cls");
        SetColor(7);
    }
}

void stay(int mem){
    printf("\n                                                                                         ");
    printf("Enter the rooms number:");
    int rooms;
    int p;
    scanf("%d",&rooms);
    if(month>4 && month<9){
            printf("\n                                                                                         ");
        printf("Summer Season");
        p=500;
    }
    else if(month>=9 && month<11){
        printf("\n                                                                                         ");
        printf("Autumn Season");
        p=300;
    }
    else if(month==11 ||month==12||month==1||month==2){
        printf("\n                                                                                         ");
        printf("Winter Season");
        p=800;
    }
    else{
        printf("\n                                                                                         ");
        printf("Spring Season");
        p=600;
    }
        printf("\n                                                                                         ");
        printf("1:Europen Plan");
        printf("\n                                                                                         ");
        printf("2:Continental Plan");
        printf("\n                                                                                         ");
        printf("3:American Plan ");
        printf("\n                                                                                         ");
        printf("4:Modified American Plan");
        int choice;
        printf("\n                                                                                         ");
        printf("Enter Choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        hotelprice+=(mem*100)+p;

    }
    else if(choice==2)
    {
        hotelprice+=(mem*200)+p;

    }
    else if(choice==3)
    {
        hotelprice+=(mem*300)+p;

    }
    else if(choice==4)
    {
        hotelprice+=(mem*400)+p;

    }

    hotelprice*=rooms;
    printf("\n                                                                                         ");
    printf("Total Price Of Stay is %d rupees",hotelprice);
    char str[10];
    printf("\n\n                                                                                         ");
    printf("Do you wish to continue?(Write Yes or No):");
       scanf("%s",str);
                if(strcmp(str,"Yes")==0 || strcmp(str,"yes")==0){
                         system("cls");
                         loading();
                         hello(mem);
                }
                else if(strcmp(str,"No")==0 || strcmp(str,"no")==0)
                    system("exit");
}
void bill(int mem){
    total=ticketprice+hotelprice+localprice+money;
  printf("\n                                                                                                      ");
  printf("TOTAL BILL\n\n\n");
  printf("\n             ");
  printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
  printf("\n             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("|                                                                            Ticket Price:                                                              |                %d/-         |\n",ticketprice);
  printf("             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
  printf("\n             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("|                                                                            Stay Price:                                                                |                %d/-          |\n",hotelprice);
  printf("             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
  printf("\n             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("|                                                                            Taxi Price:                                                                |                %d/-          |\n",localprice);
  printf("             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
  printf("\n             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("|                                                                            Food Price:                                                                |                %d/-          |\n",money);
  printf("             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
  printf("\n             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("|                                                                            Total:                                                                     |                %d/-         |\n",total);
  printf("             ");
  printf("|                                                                                                                                                       |                                |\n");
  printf("             ");
  printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
  printf("\nWould you like to procees to payement procedure?\n[1]Yes\n[2]No\n");
int choice1;
printf("Enter Your Choice: ");
scanf("%d",&choice1);
if(choice1==1)
{
    payement(ticketprice+hotelprice+localprice+money,mem);

}
else
{int choice2;

    printf("\nDo you want to exit?\n[1]Yes\n[2]No\n");
    scanf("%d",&choice2);
    if(choice2==1)
    {
        system("cls");
        //exit(0);
    }
    else
    {

    system("cls");
    hello(mem);
    }
}
}
void payement(int money,int mem){
    printf("\n+++++++++++++++++++++++++++++++++\n");
    printf("             PAYEMENT");
    printf("\n+++++++++++++++++++++++++++++++++\n");
       printf("Enter you card details.\n");
       char card[100];
       scanf(" %s",card);
       printf("Enter card expiring date\nMonth: ");
       int m;
       scanf(" %d",&m);
       printf("\nYear: ");
       int y;
       scanf(" %d",&y);
       char pin[12];
       printf("\nEnter your pin");
       scanf(" %s",pin);
       printf("\nYou have to pay:\n %d + %d %% * %d (Tax)= %.2f",money,6,money,money+money*0.06);
       int pay;
       printf("\nPress 1 to continue or any other to exit!");
       scanf(" %d",&pay);
       if(pay==1)
       {

           printf("\n!!!Success!!!\n");
           system("cls");

    hello(mem);
}
        else
        {
            system("exit");
            //exit(0);
        }
}
void members(){
    printf("\n                                                                                         ");
       int mem;

       printf("\n                                                                                         ");
       printf("Enter Number Of Members:");
       scanf("%d",&mem);
       printf("\n                                                                                         ");
       printf("Enter From(Date):");
       scanf("%d %d %d",&date,&month,&year);
       printf("\n                                                                                         ");
       printf("To:");
       scanf("%d %d %d",&date1,&month1,&year1);
       system("cls");
       loading();
       hello(mem);

}
void hello(int mem){

       printf("\n                                                                                         ");
       printf("1.Book Tickets");
        printf("\n                                                                                         ");
       printf("2.Stay Hotel/Resort");
       printf("\n                                                                                         ");
       printf("3.Local Travels");
       printf("\n                                                                                         ");
       printf("4.Restaurant");
       printf("\n                                                                                         ");
       printf("5.Payment");
       printf("\n                                                                                         ");
       printf("6.Record");
       printf("\n                                                                                         ");
       printf("7.Log-Out");
       printf("\n\n                                                                                         ");
     printf("Enter Choice: ");
       int num,charge;
       scanf("%d",&num);
       system("cls");
        if(num==1){
            loading();
            ticket(mem);
        }
        else if(num==2){
            loading();
            stay(mem);
        }
        else if(num==3){
            loading();
            local(mem);
        }

        else if(num==4){
            loading();
            food(mem);
        }
        else if(num==5){
            loading();
            bill(mem);
        }
        else if(num==7){
            thankyou();
            f();
        }
        else if(num==6){
            loading();
            record(mem);
        }
        else{
            SetColor(4);
        printf("\n\n                                                                                         ");
        printf("Invalid!");
        Sleep(2000);
        system("cls");
        SetColor(7);
        hello(mem);
        }
}
void login()
{
    char user[35],tempName[30],correctPassword[30],userPassword[30],fileuserName[35];
    int x=0;
    SetColor(3);
    printf("\n                                                                                         ");
    printf("Login -");
    printf("\n\n                                                                                         ");
    SetColor(7);
 printf("Enter Your User Name:");
    scanf(" %[^\n]s",user);
    for(int i=0;i<strlen(user);i++)
    {
        if(user[i]>='0'&&user[i]<='9')
        {
            break;
        }
        else
        {
           tempName[x++]=user[i];
        }

    }
 FILE *fp=fopen(tempName,"r");
 if(fp!=NULL)
 {
     fscanf(fp,"%s",fileuserName);

  fscanf(fp,"%s",correctPassword);
  if(strcmp(user,fileuserName)==0)
  {
      printf("\n                                                                                         ");
      printf("Enter Your Password:");
      scanf(" %[^\n]s",userPassword);
   if(strcmp(correctPassword,userPassword)==0)
   {
       printf("\n                                                                                         ");
       SetColor(2);
       printf("Login Successful!\n");
       SetColor(7);
       wel();
       system("cls");
       members();
  }
  else
  {   SetColor(4);
      printf("\n                                                                                         ");
      printf("Wrong Password,Please Try Again\n");
      SetColor(7);
      Sleep(2000);
        system("cls");
        f();
  }
  }
  else
  {   SetColor(4);
      printf("\n                                                                                         ");
      printf("Wrong Username,Please Try Again\n");
      SetColor(7);
      Sleep(2000);
        system("cls");
        f();
  }
 }
  else
  {
      SetColor(4);
      printf("\n                                                                                         ");
      printf("No Account Exists with this Username..Please Try Again\n");
      SetColor(7);
      Sleep(2000);
        system("cls");
        f();
  }
  fclose(fp);
}
void signup(){
    char name[30];
    char password[30];
    char user[30];
    memset (user, 0,30);
    SetColor(3);
    printf("\n                                                                                         ");
    printf("Sign Up -");
    printf("\n\n                                                                                         ");
    SetColor(7);
    printf("Enter UserName: ");
    scanf(" %[^\n]s",name);
    strcat(user,name);
    FILE *fp=fopen(name,"a+");
    if(fgetc(fp)==EOF){
        fputs(name, fp);
         printf("\n                                                                                         ");
        printf("Your UserName is %s\n",user);
         printf("\n                                                                                         ");
        printf("Enter Password: ");
        scanf(" %[^\n]s",password);
        fputs("\n",fp);
        fputs(password,fp);
        for(int i=0;i<strlen(name);i++){
            uname[i]=name[i];
        }
        for(int i=0;i<strlen(password);i++){
            upass[i]=password[i];
        }
        check();
        fclose(fp);
    }
    else{
            printf("\n\n                                                                                         ");
        SetColor(4);
        printf("Account already Exists Please Login First!!\n");
        SetColor(7);
        Sleep(2000);
        system("cls");
        f();
        fclose(fp);
    }

}
int main(){
    char ch[30];
    SetColor(2);

    for(int i=0; i<10; i++)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n                                                                            ");
	printf("  OOOOOO      O      OOOOO   O       O     O          O      OOOOOOO  ");
	printf("\n                                                                            ");
	printf("  O          O O       O       O   O      O O        O O     O     O  ");
	printf("\n                                                                            ");
	printf("  OOOOOO    OOOOO      O         O       OOOOO      OOOOO    OOOOOOO  ");
	printf("\n                                                                            ");
	printf("       O   O     O     O         O      O     O    O     O   O  O     ");
	printf("\n                                                                            ");
	printf("  OOOOOO  O       O  OOOOO       O     O       O  O       O  O     O  ");
	Sleep(100);
      system("cls");
      Sleep(100);
    }

	printf("\n\n                                                                            ");
	printf("  OOOOOO      O      OOOOO   O       O     O          O      OOOOOOO  ");
	printf("\n                                                                            ");
	printf("  O          O O       O       O   O      O O        O O     O     O  ");
	printf("\n                                                                            ");
	printf("  OOOOOO    OOOOO      O         O       OOOOO      OOOOO    OOOOOOO  ");
	printf("\n                                                                            ");
	printf("       O   O     O     O         O      O     O    O     O   O  O     ");
	printf("\n                                                                            ");
	printf("  OOOOOO  O       O  OOOOO       O     O       O  O       O  O     O  ");
	SetColor(6);
	printf("\n\n\n                                                                                       ");
	printf("Get The Best Packages For Your Trip.");
	printf("\n\n                                                                                                ");
	SetColor(3);
	printf("1.Sign Up");
    printf("\n\n                                                                                                ");
    printf("2.Login to Your Account");
    printf("\n\n                                                                                         ");
    SetColor(7);
    printf("Enter Your Choice(signup/login): ");
    scanf("%s",ch);
    if(strcmp(ch,"SignUp")==0 || strcmp(ch,"signup")==0 || strcmp(ch,"Sign-up")==0 || strcmp(ch,"Signup")==0 || strcmp(ch,"sign-up")==0)
      signup();
    else if(strcmp(ch,"Login")==0 || strcmp(ch,"login")==0)
        login();

    else{
        SetColor(4);
        printf("\n\n                                                                                         ");
        printf("Invalid!");
        Sleep(2000);
        system("cls");
        SetColor(7);
        f();
    }    
}

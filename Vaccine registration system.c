#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>

struct details 
{       char nid[50];
        char day[20];
        char month[20];
        char year[20];
        char name1[20];
        char name2[20];
        char division[20];
        char district[20];
        char thana[20];
        char ward[20];
        char gram[20];
        int phone1;
        int phone2;
    }; 
 struct details a;

void welcome()
{
            printf("\n\n\n\n\n\n\t**************************************************");
         	printf("\n\t#                 WELCOME TO                     #");
         	printf("\n\t#                                                #");
         	fflush(stdin);
        	printf("\n\t#           VACCINE REGISTRATION SYSTEM          #");
        	fflush(stdin);
        	printf("\n\t#                                                #");
        	fflush(stdin);
        	printf("\n\t#               DESIGNED BY AVIRAL               #");
        	fflush(stdin);
        	printf("\n\t#                                                #");
        	fflush(stdin);
        	printf("\n\t**************************************************"); 
        	
        	printf("\n\tPlease Wait, The system is loading . ");
        	int i;
			for(i=0;i<10;i++)
        	{
        		sleep(0);
				printf(" . ");
        		
        	}
			printf("\n\t  PRESS ANY KEY TO CONTINUE ...        ");
        	getch();
        	system("cls");
        }
        
void login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	
    printf("\n  ################################################  LOGIN FORM  ################################################    ");
    printf(" \n\n\t\t\t                ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n\n\t\t\t                ENTER PASSWORD:-");
	while(i<10)
    
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13)
	    break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword); 
		if(strcmp(uname,"user")==0 && strcmp(pword,"password")==0)
	{
	printf("  \n\n\n\t\t##################################### REJOICE ######################################   \n\n\t######################################## LOGIN IS SUCCESSFUL######################################## ");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		system("cls");
		printf("\n\t       SORRY !!!!  \n\tLOGIN IS UNSUCESSFUL");
		a++;
		
	
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!! \nPlease try again after some time");
		getch();
		exit(0);
		}
		system("cls");
		
}

void phone()
{
	    printf("\n\n\t!!Enter the  OTP code !!\n\n\n");
        printf("\n\n\tThis Code is Auto generated for each time one access this!!");

        srand(time(0));

        int random=rand();

        int scanRandom;
        printf("\t|----------|\n");
        printf("\t|  OTP is  |\n");
        printf("\t|          |\n");
        printf("\t|   %d |\n",random);
        printf("\t|          |\n");
        printf("\t|          |\n");
        printf("\t|          |\n");
        printf("\t|----------|\n");
        printf("\t|_1___2___3|\n");
        printf("\t|_4___5___6|\n");
        printf("\t|_7___8___9|\n\n\n");

        while(1)
        {
            printf("Enter your OTP code from above: ");
            scanf("%d",&scanRandom);
            if(random==scanRandom)
            {
                break;
            }
            else
            printf("\n\nYou have entered the wrong OTP, please try again!\n\n");
           

        }
	
	
}

void citizen_reg()
{
	    FILE *file;
		file = fopen("citizen_reg.txt","a+");
        if(file==NULL)
        {
        	puts("\n\nt\tCan not open the file !!");
        	exit(1);
        	
		}
        printf(" _____________________________________\n");
        printf("| Selected type: Citizen registration |\n");
        printf("|_____________________________________|\n");
        

        printf("Please enter your Aadhar card number: ");
        gets(a.nid);


        printf("\n\t********NAME OF APPLICANT ******** ");
        
        fputs("\nNAME OF APPLICANT :",file);
        printf("\nFirst Name: ");
        gets(a.name1);
        fputs(a.name1,file);
        fputs(" ",file);
        printf("\nLast Name: ");
        gets(a.name2);
        fputs(a.name2,file);



        printf("\n\t********D.O.B(according to Aadhar card):  ******** \n");
        printf("Year: ");
        gets(a.year);
		if(a.year<="2004")
        {
          system("cls");
		  printf("\n\n\tYou are not Elligible!! \n\t\tSorry!!");
		  getch();
		  exit(0);
		}
        printf("\nMonth: ");
        gets(a.month);
        printf("\nDay: ");
        gets(a.day);
        fflush(stdin);
        fputs("\nDate of birth: ",file);
        fputs(a.day,file);
        fputs("/",file);
        fputs(a.month,file);
        fputs("/",file);
        fputs(a.year,file);




        printf("\n\t********PRESENT ADDRESS ********\n");
        printf("Division: ");
        gets(a.division);
        printf("District: ");
        gets(a.district);
        printf("Upazila/Thana: ");
        gets(a.thana);
        printf("Ward: ");
        gets(a.ward);
        printf("Gram/Para/Moholla: ");
        gets(a.gram);
        fputs("\nYour center for vaccination: ",file);
        fputs(a.gram,file);
        fputs(" Govt. Medical Hospital, ",file);
        fputs(a.district,file);
        fputs(", Dehradun\n",file);




        while(1)
        {
            printf("\n\nEnter your phone number: ");
            scanf("%d",&a.phone1);
            printf("Re-enter your phone number: ");
            scanf("%d",&a.phone2);

            if(a.phone1==a.phone2)
            {
                break;
            }
            else
                printf("\n\n\tYou have entered a wrong number, please try again carefully.");
        }
        phone();
        
        fclose(file);
     
         

            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("                                   YOUR VACCINATION FORM                                      \n\n\n");

           file = fopen("citizen_reg.txt","r");
           char ch;

            while(!feof(file))
			{
                ch = fgetc(file);
                printf("%c",ch);
            }

            fclose(file);

            printf("\nSerial Number: %d",rand());
            printf("\n\nThe date and time of your vaccination will be soon notify via SMS in the number you provided.\n");
            printf("                            till then STAY SAFE, STAY HOME!                                   \n");
            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n\n\n");
}


void govnt_reg()
{ 
        FILE *fp;
    	fp = fopen("govnt_reg.txt","a+");
        
        printf(" ___________________________________ \n");
        printf("|Selected type: Goverment employee  |\n");
        printf("|___________________________________|\n\n");


        printf("Please enter your Government Provided card number: ");
        gets(a.nid);


        printf("\n\t********NAME OF APPLICANT ******** \n\n ");
        fputs("Name of the applicant: ",fp);
        printf("First Name: ");
        gets(a.name1);
        fputs(a.name1,fp);
        fputs(" ",fp);
        printf("Last Name: ");
        gets(a.name2);
        fputs(a.name2,fp);



        printf("\n******** D.O.B(according to govnt. card): ******** \n");
        printf("Year: ");
        gets(a.year);
        if(a.year<="2004")
        {
          system("cls");
		  printf("\n\n\tYou are not Elligible!! \n\t\tSorry!!");
		  getch();
		  exit(0);
		}
        printf("\nMonth: ");
        gets(a.month);
        printf("\nDay: ");
        gets(a.day);
        fputs("\nDate of birth: ",fp);
        fputs(a.day,fp);
        fputs("/",fp);
        fputs(a.month,fp);
        fputs("/",fp);
        fputs(a.year,fp);




        printf("\n******** PRESENT ADDRESS: ********\n");
        printf("Division: ");
        gets(a.division);
        printf("\nDistrict: ");
        gets(a.district);
        printf("\nUpazila/Thana: ");
        gets(a.thana);
        printf("\nWard: ");
        gets(a.ward);
        printf("\nGram/Para/Moholla: ");
        gets(a.gram);
        fputs("\nYour center for vaccination: ",fp);
        fputs(a.gram,fp);
        fputs(" Govt. Medical Hospital, ",fp);
        fputs(a.district,fp);
        fputs(", Dehradun",fp);




        while(1)
        {
            printf("\n\nEnter your phone number: ");
            scanf("%d",&a.phone1);
            printf("Re-enter your phone number: ");
            scanf("%d",&a.phone2);

            if(a.phone1==a.phone2)
            {
                break;
            }
            else
                printf("\n\nYou have entered a wrong number, please try again carefully.");
        }
        phone();


        fclose(fp);

            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("                                   YOUR VACCINATION FORM                                      \n\n\n");

           fp=fopen("govnt_reg.txt","r");
           char ch;

            while(!feof(fp))
			{
                ch = fgetc(fp);
                printf("%c",ch);
            }

            fclose(fp);

            printf("\nSerial Number: %d",rand());
            printf("\n\nThe date and time of your vaccination will be soon notify via SMS in the number you provided.\n");
            printf("                            till then STAY SAFE, STAY HOME!                                   \n");
            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n\n\n");
}
        
void student_reg()        
{		

		FILE *fp1;
		fp1 = fopen("student_reg.txt","a+");
        char school[30];
        
        printf(" ________________________ \n");
        printf("|Selected type: Student  |\n");
        printf("|________________________|\n\n");
        
        printf("Please enter your Aadhar card number/School Id: ");
        gets(a.nid);

        fputs("\nName of the applicant: ",fp1);
        printf("First Name: ");
        gets(a.name1);
        fputs(a.name1,fp1);
        fputs(" ",fp1);
        printf("Last Name: ");
        gets(a.name2);
        fputs(a.name2,fp1);
        printf("\nName of your School/College/University: \n");
        fputs("Name of your School/College/University: ",fp1);
        gets(school);
        fputs(school,fp1);

        printf("\nDate of birth(according to NID/Birth certificate card): \n");
        printf("Year: ");
        gets(a.year);
        if(a.year<="2004")
        {
          system("cls");
		  printf("\n\n\tYou are not Elligible!! \n\t\tSorry!!");
		  getch();
		  exit(0);
		}
        printf("Month: ");
        gets(a.month);
        printf("Day: ");
        gets(a.day);
        fputs("\nDate of birth: ",fp1);
        fputs(a.day,fp1);
        fputs("/",fp1);
        fputs(a.month,fp1);
        fputs("/",fp1);
        fputs(a.year,fp1);

        printf("\nPresent address:\n");
        printf("Division: ");
        gets(a.division);
        printf("District: ");
        gets(a.district);
        printf("Upazila/Thana: ");
        gets(a.thana);
        printf("Ward: ");
        gets(a.ward);
        printf("Gram/Para/Moholla: ");
        gets(a.gram);
        fputs("\nYour center for vaccination: ",fp1);
        fputs(a.gram,fp1);
        fputs(" Govt. Medical Hospital, ",fp1);
        fputs(a.district,fp1);
        fputs(", Dehradun",fp1);
        phone();

        fclose(fp1);

            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("                                   YOUR VACCINATION FORM                                      \n\n\n");

           fp1 = fopen("students_reg.txt","r");
           char ch;

            while(!feof(fp1))
			{
                ch = fgetc(fp1);
                printf("%c",ch);
            }

            fclose(fp1);

            printf("\nSerial Number: %d",rand());
            printf("\n\nThe date and time of your vaccination will be soon notify via SMS in the number you provided.\n");
            printf("                            till then STAY SAFE, STAY HOME!                                   \n");
            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n\n\n");



}

void other_reg()
{       
        FILE *fp2;
		fp2 = fopen("other_reg.txt","a+");
        char identity[20];
        printf(" ________________________ \n");
        printf("|Selected type: Others   |\n");
        printf("|________________________|\n\n");

        printf("\nEnter your identity type: ");
        gets(identity);

        printf("\n\n");
        printf("Selected type: ");
        puts(identity);
        printf("\n\n");


        printf("Please enter your NID card number: ");
        gets(a.nid);



        fputs("Name of the applicant: ",fp2);
        printf("First Name: ");
        gets(a.name1);
        fputs(a.name1,fp2);
        fputs(" ",fp2);
        printf("Last Name: ");
        gets(a.name2);
        fputs(a.name2,fp2);



        printf("\nDate of birth(according to NID card): \n");
        printf("Year: ");
        gets(a.year);
        
        
        printf("Month: ");
        gets(a.month);
        printf("Day: ");
        gets(a.day);
        fputs("\nDate of birth: ",fp2);
        fputs(a.day,fp2);
        fputs("/",fp2);
        fputs(a.month,fp2);
        fputs("/",fp2);
        fputs(a.year,fp2);




        printf("\nPresent address:\n");
        printf("Division: ");
        gets(a.division);
        printf("District: ");
        gets(a.district);
        printf("Upazila/Thana: ");
        gets(a.thana);
        printf("Ward: ");
        gets(a.ward);
        printf("Gram/Para/Moholla: ");
        gets(a.gram);
        fputs("\nYour center for vaccination: ",fp2);
        fputs(a.gram,fp2);
        fputs(" Govt. Medical Hospital, ",fp2);
        fputs(a.district,fp2);
        fputs(", Dehradun",fp2);
        phone();
        fclose(fp2);

            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("                                   YOUR VACCINATION FORM                                      \n\n\n");

           fp2=fopen("other_reg.txt","r");
           char ch;

            while(!feof(fp2))
			{
                ch = fgetc(fp2);
                printf("%c",ch);
            }

            fclose(fp2);
            
            printf("\nSerial Number: %d",rand());
            printf("\n\nThe date and time of your vaccination will be soon notify via SMS in the number you provided.\n");
            printf("                            till then STAY SAFE, STAY HOME!                                   \n");
            printf("\n\n\n----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n");
            printf("----------------------------------------------------------------------------------------------\n\n\n");
}


void display()
{
	exit(0);
}
int main()
{
     

    printf("                Welcome to                  \n");
    printf("Vaccine Registration System\n\n\n");
	login();
    fflush(stdin);
    welcome();
    while(1)
	{

    int finalChoice;
    FILE *file;

    printf(" ___________________________________\n");
    printf("|      Identity verification:       |\n");
    printf("|                                   |\n");
    printf("| 1. Citizen registration           |\n");
    printf("| 2. Goverment employee             |\n");
    printf("| 3. Student                        |\n");
    printf("| 4. Others                         |\n");
    printf("| 5. Display the details.           |\n");
    printf("| 6. Exit.                          |\n");
    printf("|___________________________________|\n\n");

    char choice;

    printf("Enter your choice: ");
    scanf("%c",&choice);
    getchar();
    printf("\n");


    switch(choice)
    {

    case '1':
             citizen_reg();
             break;
        
    case '2':
             govnt_reg();
             break;
    	
    case '3':
      
             student_reg();
	       	 break;
	  
    case '4':
    
             other_reg(); 
             break;
        
    case '5':
             display();
             break;		
		
		case '6':
        	printf("\nThank you for using this reegistartion system!!");
        	printf("\nSystem will shut down shortly...");
        	int i;
			for(i=0;i<10;i++)
        	{
        		sleep(1);
				printf(" . ");
        		
        	}
        	exit(0);
    }



    if(choice=='1' || choice=='2' || choice=='3' || choice=='4')
	{
            printf("\n\t I hereby, declaring that all the information I have given above is correct:-");
            printf("\n\t 1.Confirm and save(To finish the registration)");
            printf("\n\t 2.Cancel(If you found any mistakes regarding your information in the form)");
            printf("\nEnter your choice: ");
            scanf("%d",&finalChoice);
            getchar();

            if(finalChoice == 1){
                printf("\n\n\n\n\n\n_____________________________________________________________________________________________\n");
                printf("|                                                                                            |\n");
                printf("|            Congratulations! Your registration has been completed successfully.             |\n");
                printf("|                                                                                            |\n");
                printf("|____________________________________________________________________________________________|\n");
                break;
            }
            else{
                printf("\n\nPlease be careful in this time while giving your information !\n\n");

            }
    }

    }


    return 0;
}

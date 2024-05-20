/*------------------------------------------------------Project Name: BUS TICKET RESERVATION SYSTEM-----------------------------------------------------------------*/

/*-----------------------------------------------------------Author: Md Raihan Chowdhoury---------------------------------------------------------------------------*/
/*--------------------------------------------------------Daffodil International University-------------------------------------------------------------------------*/
/*-------------------------------------------------------Depertment Of Software Engineering-------------------------------------------------------------------------*/
/*-----------------------------------------------------------------Batch:40th---------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------Third Semister--------------------------------------------------------------------------------------*/
/*----------------------------------------------------------------Section: B----------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------Id: 0242310005341002-----------------------------------------------------------------------------------*/


//---------------------------------------------------------Start of Header file-------------------------------------------------------------------------------------//

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<conio.h>

//---------------------------------------------------------End of Header file---------------------------------------------------------------------------------------//


//---------------------------------------------------------Start of function recall---------------------------------------------------------------------------------//

void welcome();
void user_list();
void login_admin();
void login_user();
void admin_menu();
void user_signup();
void bus_list();
void broading_time();
void bus_destination();
// void sit_allocation();
void invalid_choice();
void user_login_signup_menu();
void user_menu();
void bus_list();
void seat_view();
void ask_user_info();
void ticket();
void history();
void cancel();
void user_file_write();
void user_file_read();
void history_file_write();
void history_file_read();
void admin_history();
void admin_cancel();
void update();
void admin_update();
void print_ticket();
void pass_recovery();
void admin_print_ticket();
void sit_file_write();
void sit_file_read();

//---------------------------------------------------------End of function recall----------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Global veriable--------------------------------------------------------------------------------//

char bus[10][130]={"Hanif Enterprice","Shohag Enterprice","Lalon Shah Enterprice","Rozina Enterprice","Greenline"};
char time[10][120]={"07.00 AM","10.00 AM","12.00 PM","03.00 PM","06.00 PM","09.00 PM"};
char destination[10][50]={"Dhaka", "Chattogram", "Khulna", "Rajshahi", "Sylhet", "Barishal", "Rangpur", "Mymensingh"};
int fee[]={200,350,1000,800,1200,700,1100,400};
int selected_bus,selected_destination,selected_time,selected_menu=2,selected_seat;
char abcd[]="Raihan";
int temp;

struct booking_history
{
    int user_id;
	char name[50];
	char phn_no[50];
	char destination[50];
	char status[10];
	char time[50];
	char bus_name[50];
    int seat_no;
    int fare;
    int serial;
    int selected_seat;
    int selected_destination;
    int selected_bus;
    int selected_time;

};

struct booking_history booking_historys[100];
struct booking_history newbooking_history;
int history_count=0;

// struct sit_info
// {
//     bool sit_status;
//     char name[50];
//     char phn[20];
// };

// struct sit_info sit[8][6][5][32];

struct sign_up
{
    char username[10];
    char password[10];
    int serial;
};

struct sign_up sign_ups[10];
struct sign_up new_sign_up;
int user=0;

bool sit[8][6][5][32];

//---------------------------------------------------------End of Global veriable----------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Main Fucntion----------------------------------------------------------------------------------//

int main()
{
    // int columns = strtol(getenv("COLUMNS"), NULL, 10);
    // int fwidth = strlen(s) + (columns - strlen(s)) / 2;
    // printf("%*s\n", fwidth, s);
    system("color 70");
    // strcpy(newbooking_history.user_id,abcd);
    user_file_read();
    history_file_read();
    sit_file_read();
    welcome();
    // user_list();
    // login_admin();
    // login_user();
    // admin_menu();
    // user_signup();
    // bus_list();
    // broading_time();
    // broading_time();
    // bus_destination();
    // int x=1;
    // strcpy(newbooking_history.destination,destination[x-1]);
    // printf("%s",newbooking_history.destination);
    // user_login_signup_menu();
    // user_signup();
    // user_menu();
    // // bus_list();
    // seat_view();
    // ask_user_info();
    // ticket();
    // history();
    // cancel();
    // admin_history();
    // admin_cancel();
    // update();
    // admin_update();
    // print_ticket();
    // pass_recovery();
    // admin_print_ticket();
    return 0;
}

//---------------------------------------------------------Start of Main Fucntion----------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Common Part----------------------------------------------------------------------------------//
//---------------------------------------------------------Start of Common Part----------------------------------------------------------------------------------//

//---------------------------------------------------------Start of welcome Screen-------------------------------------------------------------------------------//

void welcome()
{
    system("cls");
    
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("                              Welcome to\n");
    printf("                   BUS TICKET RESERVATION SYSTEM\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("                    Thanks to our course Teacher\n");    
    printf("                         Abdul Hye Zebon\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");    
    printf("     Presenting to you in collaboration with \"Team Dare to Dream\"\n");
    printf("            Md Raihan Chowdhoury        -> 0242310005341002\n");
    printf("            Md Alif Khan                -> 232-35-740\n");
    printf("            Romana Akter Romky          -> 0242310005341073\n");
    printf("            Mst Jannatul Ferdous Asha   -> 0242310005341064\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   Press any key to continue...");
    getchar();
    system("cls");
    user_list();
}

//---------------------------------------------------------End of welcome Screen---------------------------------------------------------------------------------//


//---------------------------------------------------------Start of User List------------------------------------------------------------------------------------//

void user_list()
{
    int choice;
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  I am  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   [1] Admin\n\n");
        printf("   [2] Passenger\n\n");
        printf("   [3] Exit\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\n   ENTER YOUR CHOICE: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            login_admin();
            break;
        case 2:
            user_login_signup_menu();
            break;
        case 3:
            exit(1);
            break;
        default:
            system("cls");
            invalid_choice();
        }
        system("cls");
    }

}

//---------------------------------------------------------End of User List--------------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Bus list--------------------------------------------------------------------------------//

void bus_list()
{
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  BUS LIST  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
        for (int i = 0; i < 5; i++)
        {
            printf("   [%d]    %s\n\n",i+1,bus[i]);
        }
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        if (selected_menu==1)
        {
            fflush(stdin);
            printf("\n   Press any key to continue...");
            getchar();
            system("cls");
            if (temp==-1)
            {
                admin_menu();
            }
            
            user_menu();
        }

        printf("\n   ENTER YOUR CHOICE: ");
        scanf("%d", &selected_bus);
        system("cls");
        if (selected_bus >= 1 && selected_bus <= 5)
        {
            if (selected_menu==2)
            {               
                strcpy(newbooking_history.bus_name,bus[selected_bus-1]);
                seat_view();
                break;
            }
            break;
        }
        else
        {
            invalid_choice();
        }
    }
}

//---------------------------------------------------------End of Bus list----------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Invalid Choice--------------------------------------------------------------------------//

void invalid_choice()
{
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("        BUS TICKET RESERVATION SYSTEM");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("              Invalid Selection.\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   Press any key to continue...");
    getchar();
    getchar();
    system("cls");
}

//---------------------------------------------------------End of Invalid Choice----------------------------------------------------------------------------//


//---------------------------------------------------------Start of Bus Broading time-----------------------------------------------------------------------//

void broading_time()
{
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd  BUS BOARDING TIME  \xcd\xcd\xcd\xcd\xcd\xcd \n\n");
        for (int i = 0; i < 6; i++)
        {
            printf("   [%d]    %s\n\n",i+1,time[i]);
        }
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\n   ENTER YOUR CHOICE: ");
        scanf("%d",&selected_time);
        if (selected_time >= 1 && selected_time <= 6)
        {
            if (selected_menu==2)
            {               
                    strcpy(newbooking_history.time,time[selected_time-1]);
            }
            bus_list();
            break;
        }
        else
        {
            system("cls");
            invalid_choice();
        }
    }
}

//---------------------------------------------------------End of Bus Broading time-------------------------------------------------------------------------//


//---------------------------------------------------------Start of Bus Destination-------------------------------------------------------------------------//

void bus_destination()
{
    while (1)
    {
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  DESTINATION  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        for (int i = 0; i < 8; i++)
        {
            printf("   [%d]    %s\n\n",i+1,destination[i]);
        }
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\n   ENTER YOUR CHOICE: ");
        scanf("%d",&selected_destination);
        system("cls");
        if (selected_destination >= 1 && selected_destination <= 8)
        {
            if (selected_menu==2)
            {               
                    strcpy(newbooking_history.destination,destination[selected_destination-1]);
                    newbooking_history.fare=fee[selected_destination-1];
            }
            broading_time();
            break;
        }
        else
        {
            invalid_choice();
        }
    }
}

//---------------------------------------------------------End of Bus Destination--------------------------------------------------------------------=-------//


//---------------------------------------------------------Start of Sit plan--------------------------------------------------------------------=------------//

// void sit_allocation()
// {
//     for (int i = 1; i <= 8; i++)
//     {
//         for (int j = 1; j <= 6; j++)
//         {
//             for (int k = 1; k <=5; k++)
//             {
//                 for (int l = 1; l <=32; l++)
//                 {
//                     sit[i][j][k][l]=0;
//                 }

//             }

//         }

//     }

// }

//---------------------------------------------------------End of Sit plan--------------------------------------------------------------------=------------//


//---------------------------------------------------------Start of Seat Plan View-----------------------------------------------------------------------//

void seat_view()
{
    while (1)
    {
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\t\t\t     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd SEAT PLAN  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        for (int i = 1; i <= 8; i++)
        {
                // printf("      [%-2d]   [%-2d]      [%-2d]   [%-2d]\n",i,i+8,i+16,i+24);
                if (sit[selected_destination-1][selected_time-1][selected_bus-1][i-1]==1)
                {
                    printf("      [%-2d] %-10s",i,"Booked");
                }else
                {
                    printf("      [%-2d] %-10s",i,"Available");
                }
                if (sit[selected_destination-1][selected_time-1][selected_bus-1][i+8-1]==1)
                {
                    printf("   [%-2d] %-10s",i+8,"Booked");
                }else
                {
                    printf("   [%-2d] %-10s",i+8,"Available");
                }
                if (sit[selected_destination-1][selected_time-1][selected_bus-1][i+16-1]==1)
                {
                    printf("      [%-2d] %-10s",i+16,"Booked");
                }else
                {
                    printf("      [%-2d] %-10s",i+16,"Available");
                }
                if (sit[selected_destination-1][selected_time-1][selected_bus-1][i+24-1]==1)
                {
                    printf("   [%-2d] %-10s",i+24,"Booked");
                }else
                {
                    printf("   [%-2d] %-10s",i+24,"Available");
                }
                printf("\n");
                
        }
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        //printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("\n   ENTER SIT NUMBER: ");
        scanf("%d",&selected_seat);
        system("cls");
        if (selected_seat >= 1 && selected_seat <= 32 && sit[selected_destination-1][selected_time-1][selected_bus-1][selected_seat-1]!=1)
        {
            if (selected_menu==2)
            {               
                newbooking_history.seat_no=selected_seat;
                ask_user_info();
            }
            // printf("%d",newbooking_history.seat_no);
            // getchar();
            break;
        }
        else
        {
            invalid_choice();
        }
    }
    
}

//---------------------------------------------------------End of Seat Plan View-----------------------------------------------------------------------------//


//---------------------------------------------------------Start of User Info Asking-------------------------------------------------------------------------//

void ask_user_info()
{
    char str[30],phnno[12];
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t     BUS TICKET RESERVATION SYSTEM");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  Please Provide Information  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\n   ENTER YOUR NAME: ");
    fflush(stdin);
    gets(str);
    strcpy(newbooking_history.name,str);
    printf("   ENTER YOUR PHONE NO: ");
    fflush(stdin);
    scanf(" %s",phnno);
    strcpy(newbooking_history.phn_no,phnno);
    ticket();
    // printf("%s%s",newbooking_history.name,newbooking_history.phn_no);
}

//---------------------------------------------------------End of User Info Asking-------------------------------------------------------------------------//


//---------------------------------------------------------Start of Ticket Genaration----------------------------------------------------------------------//

void ticket() 
{
    char status[]="Booked";
    system("cls");
    char a[]="Wishing you a smooth trip filled with adventures and excitement.";
    char b[]="";
    // char c[]="10.00am";
    // char d[]="Md Raihan Chowdhoury";
    // char e[]="01771973004";
    // int f=10;
    // int g=200;
    // char h[]="Lalon Shah Poribahan";
    // char i[]="Dhaka";
    // strcpy(newbooking_history.bus_name,h);
    // strcpy(newbooking_history.destination,i);
    // strcpy(newbooking_history.time,c);
    // strcpy(newbooking_history.name,d);
    // strcpy(newbooking_history.phn_no,e);
    // newbooking_history.seat_no=f;
    // newbooking_history.fare=g;
    sit[selected_destination-1][selected_time-1][selected_bus-1][selected_seat-1]=1;
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("  |  \t\t\t  Ticket: %-25s \tSerial: %-2d  |",newbooking_history.bus_name,history_count+1);
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("  |  \tDestination: %-15s\t\tDeparture time: %-8s    |\n",newbooking_history.destination,newbooking_history.time);
    fflush(stdin);
    printf("  |  \tName: %-22s\t\tPhn no: %-15s     |\n",newbooking_history.name,newbooking_history.phn_no);
    printf("  |  \tSeat no: %-19d\t\tFare: BDT %-15d   |\n",newbooking_history.seat_no,newbooking_history.fare);
    printf("  |    %-66s   |\n",b);
    printf("  |    %-66s   |\n",a);
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    fflush(stdin);
    printf("\n   Press any key to continue...");
    getchar();
    system("cls");
    newbooking_history.serial=history_count+1;
    // booking_historys[history_count].status=1;
    strcpy(newbooking_history.status,status);
    newbooking_history.user_id=temp;
    newbooking_history.selected_destination=selected_destination;
    newbooking_history.selected_bus=selected_bus;
    newbooking_history.selected_seat=selected_seat;
    newbooking_history.selected_time=selected_time;
    sit_file_write();
    booking_historys[history_count++]=newbooking_history;
    history_file_write();
    if (temp==-1)
    {
        admin_menu();
    }
    
    user_menu();
}

//---------------------------------------------------------End of Ticket Genaration------------------------------------------------------------------------//


//---------------------------------------------------------Start of user file Read------------------------------------------------------------------------//

void user_file_read()
{
    FILE *fp;
    fp = fopen("user.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    user = 0;
    while (fscanf(fp, "%[^,] ,%[^,],%d\n",
            sign_ups[user].username, sign_ups[user].password, &sign_ups[user].serial) != EOF) {
        user++;
    }

    fclose(fp);
    // FILE *fp = fopen("user.txt", "r");
    // if (fp == NULL) {
    //     perror("Error opening file");
    //     return;
    // }

    // int user = 0;
    // while (user < 10) {
    //     if (fscanf(fp, " %99[^,],%99[^,],%d\n",
    //                sign_ups[user].username,
    //                sign_ups[user].password,
    //                &sign_ups[user].serial) == 3) {
    //         user++;
    //     } else {
    //         break;  // Exit the loop if reading fails
    //     }
    // }

    // if (ferror(fp)) {
    //     perror("Error reading file");
    // }

    // fclose(fp);
}

//---------------------------------------------------------End of user file Read------------------------------------------------------------------------//


//---------------------------------------------------------Start of user file write------------------------------------------------------------------------//

void user_file_write()
{
    //--------------------------------------------------------------------------------user/pass/serial wrire-------------------------------------------------------------------//
    // FILE *fp;
    // int i;
    // fp = fopen("user.txt", "a");
    // if (fp == NULL)
    // {
    //     printf("Error opening file!\n");
    //     exit(1);
    // }
    // for (int i = 0; i < user; i++)
    // {
    //     fprintf(fp, "%s,%s,%d\n",sign_ups[i].username,sign_ups[i].password,sign_ups[i].serial);
    // }    
    // fclose(fp);
        FILE *fp = fopen("user.txt", "a");
    if (fp == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    
    // for (int i = 0; i < user; i++) {
        fprintf(fp, "%s,%s,%d\n", sign_ups[user].username, sign_ups[user].password, sign_ups[user].serial);
    // }
    
    fclose(fp);
    //--------------------------------------------------------------------------------user/pass/serial wrire-------------------------------------------------------------------//
}

//---------------------------------------------------------End of user file write------------------------------------------------------------------------//


//---------------------------------------------------------Start of History file write------------------------------------------------------------------------//

void history_file_write()
{
  FILE *fp;
  int i;
  fp = fopen("history.txt", "w");
  if (fp == NULL)
  {
    printf("Error opening file!\n");
    exit(1);
  }
  for (i = 0; i < history_count; i++)
  {
    fprintf(fp, "%d,%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d,%d,%d\n",booking_historys[i].user_id,booking_historys[i].name,booking_historys[i].phn_no,booking_historys[i].destination,booking_historys[i].status,booking_historys[i].time,booking_historys[i].bus_name,booking_historys[i].seat_no,booking_historys[i].fare,booking_historys[i].serial,booking_historys[i].selected_seat,booking_historys[i].selected_destination,booking_historys[i].selected_bus,booking_historys[i].selected_time);
  }
  fclose(fp);
}

//---------------------------------------------------------End of History file write------------------------------------------------------------------------//


//---------------------------------------------------------Start of History file read------------------------------------------------------------------------//

void history_file_read()
{
    FILE *fp;
    fp = fopen("history.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    history_count = 0;
    while (fscanf(fp, "%d,%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%d,%d,%d,%d,%d,%d,%d\n",&booking_historys[history_count].user_id, booking_historys[history_count].name, booking_historys[history_count].phn_no, booking_historys[history_count].destination, booking_historys[history_count].status, booking_historys[history_count].time,booking_historys[history_count].bus_name,&booking_historys[history_count].seat_no,&booking_historys[history_count].fare,&booking_historys[history_count].serial,&booking_historys[history_count].selected_seat,&booking_historys[history_count].selected_destination,&booking_historys[history_count].selected_bus,&booking_historys[history_count].selected_time) != EOF) {
        history_count++;
    }

    fclose(fp);
}

//---------------------------------------------------------End of History file read------------------------------------------------------------------------//


//---------------------------------------------------------Start of Seat file write------------------------------------------------------------------------//

void sit_file_write()
{
    FILE *fp;
    int i;
    fp = fopen("seat.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                for (int l = 0; l < 32; l++)
                {
                    
                    if (l==31)
                    {
                        fprintf(fp, "%d\n",sit[i][j][k][l]);
                    }else
                    {
                        fprintf(fp, "%d,",sit[i][j][k][l]);
                    }

                }
                
            }
            
        }
        
    }
  
  fclose(fp);
}

//---------------------------------------------------------End of Seat file write------------------------------------------------------------------------//


//---------------------------------------------------------Start of Seat file Read------------------------------------------------------------------------//

void sit_file_read()
{
    FILE *fp;
    int i;
    fp = fopen("seat.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                for (int l = 0; l < 32; l++)
                {
                    
                    if (l==31)
                    {
                        fscanf(fp, "%d\n",&sit[i][j][k][l]);
                    }else
                    {
                        fscanf(fp, "%d,",&sit[i][j][k][l]);
                    }

                }
                
            }
            
        }
        
    }
  
  fclose(fp);
}

//---------------------------------------------------------End of Seat file Read------------------------------------------------------------------------//


//---------------------------------------------------------End of Common Part------------------------------------------------------------------------------------//
//---------------------------------------------------------End of Common Part------------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Admin---------------------------------------------------------------------------------------//
//---------------------------------------------------------Start of Admin---------------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Admin Login---------------------------------------------------------------------------------//

void login_admin()
{
    char user[10];
    char username[] = "Admin";
    char password[] = "admin";
    char pass[11],ch;
    int i=0;
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\t    BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ADMIN LOGIN  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
        fflush(stdin);
        printf("\n\n   ENTER USERNAME: ");
        fflush(stdin);
        scanf("%s", user);
        printf(" \n   ENTER PASSWORD: ");
        while (i < 11)
        {
            fflush(stdin);
            ch = getch();
            if (ch == '\r' || ch == '\n')
                break;
            else if (ch == '\b' && i > 0)
            {
                printf("\b \b");
                i--;
            } else {
                pass[i++] = ch;
                printf("*");
            }
        }
        pass[i] = '\0';
        if(strcmp(username,user)==0 && strcmp(password,pass)==0)
        {
            temp=-1;
            admin_menu();
            break;
        }

    }

}

//---------------------------------------------------------Start of Admin Login--------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Admin Menu---------------------------------------------------------------------------------//

void admin_menu()
{
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MAIN MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   [1] View Bus Info\n\n");
        printf("   [2] Book Tickets\n\n");
        printf("   [3] Print Ticket Tickets\n\n");
        printf("   [4] Update Tickets Info\n\n");
        printf("   [5] Cancel Booking\n\n");
        printf("   [6] Booking History\n\n");
        printf("   [7] Password Recovery\n\n");
        printf("   [8] Sign out\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\n   ENTER YOUR CHOICE: ");
        scanf("%d",&selected_menu);
        system("cls");
        if (selected_menu >= 1 && selected_menu <= 8)
        {
            switch (selected_menu)
            {
            case 1:
                bus_destination();
                break;
            case 2:
                bus_destination();
                break;
            case 3:
                admin_print_ticket();
                break;
            case 4:
                admin_update();
                break;
            case 5:
                admin_cancel();
                break;
            case 6:
                admin_history();
                break;
            case 7:
                pass_recovery();
                break;
            case 8:
                user_list();
                break;

            // default:
            //     break;
            }
            // break;
        }
        else
        {
            invalid_choice();
        }
    }
}

//---------------------------------------------------------End of Admin Menu----------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Admin Ticket Print----------------------------------------------------------------------------------//

void admin_print_ticket()
{
    while (1)
    {
        int x;
        char a;
        char b[]="Canceled";
        char m[]="Booked";
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  PRINT TICKET  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
        printf("\n   ENTER TICKET SERIAL NO: ");
        scanf("%d",&x);
        if (x > history_count || x<1)
        {
            system("cls");
            invalid_choice();
        }else
        {
            if ((strcmp(booking_historys[x-1].status,m))==0)
            {
                /* code */
            
            
                system("cls");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("\t\t\t\t\t\t\t\t           BUS TICKET RESERVATION SYSTEM\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  History  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  |    %-10s    |    %-15s    |    %-25s    |    %-8s    |    %-8s    |    %-22s    |    %-12s    |    %-8s    |\n","Serial no","Destination","Bus","Time","Seat no","Passenger name","Phone no","Status");
                printf("   -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                
                // for (int i = 0; i < history_count; i++)
                // {


                // if (strcmp(booking_historys[i].user_id,abcd) == 0)
                // {
                printf("  |    %-10d    |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[x-1].serial,booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no,booking_historys[x-1].status);
                // printf("  |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |",booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no);
                // if (booking_historys[x-1].status==1)
                // {
                //     printf("    %-8s    |\n","Booked");
                // }else
                // {
                //     printf("    %-8s    |\n","Canceled");
                // }
                    printf("   -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // }  
                // }
                printf("   Press y to Print Ticket, any other key to go to menu... ");
                fflush(stdin);
                scanf("%c",&a);
                if (a=='y')
                {
                    // strcpy(booking_historys[x-1].status,b);
                    system("cls");
                    // printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    // printf("        BUS TICKET RESERVATION SYSTEM");
                    // printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    // printf("          Ticket Successfully Canceled.\n\n");
                    // printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    // printf("   Press any key to continue...");
                    // getchar();
                    // getchar();
                    // history_file_write();
                    char status[]="Booked";
                    system("cls");
                    char e[]="Wishing you a smooth trip filled with adventures and excitement.";
                    char f[]="";
                    // char c[]="10.00am";
                    // char d[]="Md Raihan Chowdhoury";
                    // char e[]="01771973004";
                    // int f=10;
                    // int g=200;
                    // char h[]="Lalon Shah Poribahan";
                    // char i[]="Dhaka";
                    // strcpy(newbooking_history.bus_name,h);
                    // strcpy(newbooking_history.destination,i);
                    // strcpy(newbooking_history.time,c);
                    // strcpy(newbooking_history.name,d);
                    // strcpy(newbooking_history.phn_no,e);
                    // newbooking_history.seat_no=f;
                    // newbooking_history.fare=g;
                    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("  |  \t\t\t  Ticket: %-25s \tSerial: %-2d  |",booking_historys[x-1].bus_name,booking_historys[x-1].serial);
                    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("  |  \tDestination: %-15s\t\tDeparture time: %-8s    |\n",booking_historys[x-1].destination,booking_historys[x-1].time);
                    fflush(stdin);
                    printf("  |  \tName: %-22s\t\tPhn no: %-15s     |\n",booking_historys[x-1].name,booking_historys[x-1].phn_no);
                    printf("  |  \tSeat no: %-19d\t\tFare: BDT %-15d   |\n",booking_historys[x-1].seat_no,booking_historys[x-1].fare);
                    printf("  |    %-66s   |\n",f);
                    printf("  |    %-66s   |\n",e);
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    fflush(stdin);
                    printf("\n   Press any key to continue...");
                    getchar();
                    // system("cls");
                    admin_menu();
                    system("cls");
                }
                system("cls");
                admin_menu();
                break;
                // booking_historys[x].status=0;

                break;
            }else
            {
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("        BUS TICKET RESERVATION SYSTEM");
                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                printf("              Ticket Cancelled\n\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   Press any key to continue...");
                getchar();
                getchar();
                system("cls");
            }
        }
    }
}

//---------------------------------------------------------End of Admin Ticket Print----------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Admin Update info----------------------------------------------------------------------------------//

void admin_update()
{
    while (1)
    {
        int x;
        int y;
        char a;
        char str[30],phnno[12];
        // char b[]="Canceled";
        char m[]="Booked";
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  UPDATE TICKET  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
        printf("\n   ENTER TICKET SERIAL NO: ");
        scanf("%d",&x);
        if (x > history_count || x<1)
        {
            system("cls");
            invalid_choice();
        }else
        {
            if ((strcmp(booking_historys[x-1].status,m))==0)
            {
                /* code */
            
            
                system("cls");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("\t\t\t\t\t\t\t\t           BUS TICKET RESERVATION SYSTEM\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  History  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  |    %-10s    |    %-15s    |    %-25s    |    %-8s    |    %-8s    |    %-22s    |    %-12s    |    %-8s    |\n","Serial no","Destination","Bus","Time","Seat no","Passenger name","Phone no","Status");
                printf("   -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                
                // for (int i = 0; i < history_count; i++)
                // {


                // if (strcmp(booking_historys[i].user_id,abcd) == 0)
                // {
                printf("  |    %-10d    |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[x-1].serial,booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no,booking_historys[x-1].status);
                // printf("  |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |",booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no);
                // if (booking_historys[x-1].status==1)
                // {
                //     printf("    %-8s    |\n","Booked");
                // }else
                // {
                //     printf("    %-8s    |\n","Canceled");
                // }
                    printf("   -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // }  
                // }
                printf("   Press y to coninue Update any other keys to go to main menu... ");
                fflush(stdin);
                scanf("%c",&a);
                if (a=='y')
                {
                    system("cls");
                    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("     BUS TICKET RESERVATION SYSTEM");
                    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MAIN MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    printf("   [1] Update Name\n\n");
                    printf("   [2] Update Phn no\n\n");
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("\n   ENTER YOUR CHOICE: ");
                    scanf("%d",&y);
                    if (y >= 1 && y <= 2)
                    {
                        switch (y)
                        {
                            case 1:
                                system("cls");
                                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("\t     BUS TICKET RESERVATION SYSTEM");
                                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  Please Provide Information  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("\n   ENTER YOUR NAME: ");
                                fflush(stdin);
                                gets(str);
                                strcpy(booking_historys[x-1].name,str);
                                break;
                                // printf("   ENTER YOUR PHONE NO: ");
                                // fflush(stdin);
                                // scanf(" %s",phnno);
                                // strcpy(newbooking_history.phn_no,phnno);
                                // ticket();
                                // break;
                            case 2:
                                system("cls");
                                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("\t     BUS TICKET RESERVATION SYSTEM");
                                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  Please Provide Information  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("\n   ENTER YOUR PHONE NO: ");
                                fflush(stdin);
                                gets(str);
                                strcpy(booking_historys[x-1].phn_no,str);   
                                break;                 
                        }
                    }
                    // strcpy(booking_historys[x-1].status,b);
                    system("cls");
                    history_file_write();
                    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("        BUS TICKET RESERVATION SYSTEM");
                    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    printf("          Updated Successfully.\n\n");
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("   Press any key to continue...");
                    getchar();
                    // getchar();
                    history_file_write();
                    user_menu();
                    system("cls");
                }
                system("cls");
                user_menu();
                break;
                // booking_historys[x].status=0;

                break;
            }else
            {
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("        BUS TICKET RESERVATION SYSTEM");
                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                printf("              Ticket canceled Already.\n\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   Press any key to continue...");
                getchar();
                getchar();
                system("cls");
            }
        }
    }
}

//---------------------------------------------------------End of Admin Update info----------------------------------------------------------------------------------//


//---------------------------------------------------------Start of Admin Ticket Cancel----------------------------------------------------------------------------------//

void admin_cancel()
{
    while (1)
    {
        int x;
        char a;
        char b[]="Canceled";
        char m[]="Booked";
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  CANCEL TICKET  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
        printf("\n   ENTER TICKET SERIAL NO: ");
        scanf("%d",&x);
        if (x > history_count || x<1)
        {
            system("cls");
            invalid_choice();
        }else
        {
            if ((strcmp(booking_historys[x-1].status,m))==0)
            {
                /* code */
            
            
                system("cls");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("\t\t\t\t\t\t\t\t           BUS TICKET RESERVATION SYSTEM\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  History  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  |    %-10s    |    %-15s    |    %-25s    |    %-8s    |    %-8s    |    %-22s    |    %-12s    |    %-8s    |\n","Serial no","Destination","Bus","Time","Seat no","Passenger name","Phone no","Status");
                printf("   -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                
                // for (int i = 0; i < history_count; i++)
                // {


                // if (strcmp(booking_historys[i].user_id,abcd) == 0)
                // {
                printf("  |    %-10d    |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[x-1].serial,booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no,booking_historys[x-1].status);
                // printf("  |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |",booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no);
                // if (booking_historys[x-1].status==1)
                // {
                //     printf("    %-8s    |\n","Booked");
                // }else
                // {
                //     printf("    %-8s    |\n","Canceled");
                // }
                    printf("   -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // }  
                // }
                printf("   Press y to Confirm cancelation any othe key to go to menu... ");
                fflush(stdin);
                scanf("%c",&a);
                if (a=='y')
                {
                    strcpy(booking_historys[x-1].status,b);
                    system("cls");
                    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("        BUS TICKET RESERVATION SYSTEM");
                    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    printf("          Ticket Successfully Canceled.\n\n");
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    sit[(booking_historys[x-1].selected_destination)-1][(booking_historys[x-1].selected_time)-1][(booking_historys[x-1].selected_bus)-1][(booking_historys[x-1].selected_seat)-1]=0;
                    sit_file_write();
                    printf("   Press any key to continue...");
                    getchar();
                    getchar();
                    history_file_write();
                    user_menu();
                    system("cls");
                }
                system("cls");
                user_menu();
                break;
                // booking_historys[x].status=0;

                break;
            }else
            {
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("        BUS TICKET RESERVATION SYSTEM");
                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                printf("              Already Cancelled.\n\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   Press any key to continue...");
                getchar();
                getchar();
                system("cls");
            }
        }
    }
}

//---------------------------------------------------------End of Admin Ticket Cancel----------------------------------------------------------------------------------//


//---------------------------------------------------------sTART of Admin history----------------------------------------------------------------------------------//

void admin_history()
{    
    if (history_count==0)
    {
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("        BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("              No History Found!\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("   Press any key to continue...");
        getchar();
        getchar();
        system("cls");
        user_menu();
    }

    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\t\t\t\t\t\t\t\t         BUS TICKET RESERVATION SYSTEM\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  History  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("  |    %-10s    |    %-10s    |    %-15s    |    %-25s    |    %-8s    |    %-8s    |    %-22s    |    %-12s    |    %-8s    |\n","Serial no","User id","Destination","Bus","Time","Seat no","Passenger name","Phone no","Status");
    printf("   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < history_count; i++)
    {            
            printf("  |    %-10d    |    %-10s    |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[i].serial,sign_ups[booking_historys[i].user_id].username,booking_historys[i].destination,booking_historys[i].bus_name,booking_historys[i].time,booking_historys[i].seat_no,booking_historys[i].name,booking_historys[i].phn_no,booking_historys[i].status);
            printf("   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    }

        printf("   Press any key to continue...");
        getchar();
        getchar();
        system("cls");

}

//---------------------------------------------------------End of Admin history----------------------------------------------------------------------------------//


//---------------------------------------------------------Start of pass recovery----------------------------------------------------------------------------------//

void pass_recovery()
{
    char a[10];
    bool flag=1;
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\t    BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ADMIN LOGIN  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
        fflush(stdin);
        printf("\n\n   ENTER USERNAME: ");
        fflush(stdin);
        scanf("%s", a);
        for (int i = 0; i < user; i++)
        {
            if ((strcmp(sign_ups[i].username,a)==0))
            {
                flag=0;
                printf("\n\n   PASSWORD IS: %s",sign_ups[i].password);
                break;
            }
            
            // strcmp(sign_ups[i].username,)
        }

        if (flag)
        {
            printf("\n\n   USERNAME NOT FOUND");
        }
        fflush(stdin);
        printf("\n\n   Press any key to continue...");
        getchar();
        system("cls");
        admin_menu();
        
        
    }
    

}

//---------------------------------------------------------End of pass recovery----------------------------------------------------------------------------------//


//---------------------------------------------------------End of Admin---------------------------------------------------------------------------------------//
//---------------------------------------------------------End of Admin---------------------------------------------------------------------------------------//


//---------------------------------------------------------Start of User-------------------------------------------------------------------------------------//
//---------------------------------------------------------Start of User-------------------------------------------------------------------------------------//

//---------------------------------------------------------Start of User login/signup------------------------------------------------------------------------//

void user_login_signup_menu()
{
    int choice;
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  User Zone  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   [1] Sign up\n\n");
        printf("   [2] Log in\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\n   ENTER YOUR CHOICE: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            user_signup();
            break;
        case 2:
            login_user();
            break;
        default:
            system("cls");
            invalid_choice();
        }
        system("cls");
    }

}

//---------------------------------------------------------End of User login/signup--------------------------------------------------------------------------//


//---------------------------------------------------------Start of User Exist or not------------------------------------------------------------------------//

bool user_Exists(const char *username) {
    bool flag=0;
    // FILE *file = fopen("user.txt", "r");
    // if (file == NULL) {
    //     return false;
    // }
    // char line[10 + 10 + 2];
    // while (fgets(line, sizeof(line), file) != NULL) {
    //     char *token = strtok(line, ":");
    //     if (token != NULL && strcmp(token, username) == 0) {
    //         fclose(file);
    //         return true;
    //     }
    // }
    // fclose(file);
    // return false;
    for (int i = 0; i < user; i++)
    {
        if (strcmp(sign_ups[i].username,username)==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag)
    {
        return true;
    }else
    {
        return false;
    }
    
    
}

//---------------------------------------------------------End of User Exist or not--------------------------------------------------------------------------//


//---------------------------------------------------------Start of Signup-----------------------------------------------------------------------------------//
// void clearBuffer() {
//     int ch;
//     while ((ch = getchar()) != '\n' && ch != EOF);
// }

void user_signup() {
    char username[10];
    char password[10];
    char confirm[10];
    // clearBuffer();
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\t    BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  USER SIGNUP  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
        printf("\n\n   ENTER USERNAME: ");
        fflush(stdin);
        // gets(username);
        fgets(username, 10, stdin);
        username[strcspn(username, "\n")] = '\0';

        if (user_Exists(username)) {
            system("cls");
            printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("     BUS TICKET RESERVATION SYSTEM");
            printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  USER SIGNUP  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("          Username already exists.\n");
            printf("     Please choose a different username.\n\n");
            printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("   Press any key to continue...");
            getchar();
            system("cls");
            user_signup();
            return;
        }

        strcpy(new_sign_up.username,username);
        printf("   ENTER PASSWORD: ");
        int i = 0;
        char ch;
        while (1) {
            fflush(stdin);
            ch = getch();
            if (ch == '\r') {
                password[i] = '\0';
                break;
            } else if (ch == 8 && i > 0) {
                printf("\b \b");
                i--;
            } else if (ch >= 32 && ch <= 126) {
                printf("*");
                password[i] = ch;
                i++;
            }
        }
        printf("\n");

        printf("   ENTER CONFIRM PASSWORD: ");
        i = 0;
        while (1) {
            fflush(stdin);
            ch = getch();
            if (ch == '\r') {
                confirm[i] = '\0';
                break;
            } else if (ch == 8 && i > 0) {
                printf("\b \b");
                i--;
            } else if (ch >= 32 && ch <= 126) {
                printf("*");
                confirm[i] = ch;
                i++;
            }
        }
        printf("\n");

        if (strcmp(password, confirm) != 0) {
            system("cls");
            printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("     BUS TICKET RESERVATION SYSTEM");
            printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  USER SIGNUP  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("           Password doesn't match\n\n");
            printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("   Press any key to continue...");
            getchar();
            system("cls");
        }else
        {
            strcpy(new_sign_up.password,confirm);
            new_sign_up.serial=user;
            sign_ups[user]=new_sign_up;
            user_file_write();
            user++;
            // printf("%s%s%d",sign_ups[user-1].username,sign_ups[user-1].password,sign_ups[user-1].serial);
            // getchar();
            break;

            // getchar();
            // FILE *file = fopen("user.txt", "a");
            // if (file == NULL) {
            //     printf("Error opening file.\n");
            // }

            // fprintf(file, "%s:%s\n", username, password);
            // fclose(file);
            // break;
        }
    }
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("     BUS TICKET RESERVATION SYSTEM");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  USER SIGNUP  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("             Signup Successful.\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   Press any key to continue...");
    getchar();
    system("cls");
    user_login_signup_menu();
}

//---------------------------------------------------------End of Signup------------------------------------------------------------------------------------//


//---------------------------------------------------------Start of user login------------------------------------------------------------------------------//

void login_user() 
{
    char username[10];
    char password[10];
    char confirm[10];
    bool flag=0;
    // clearBuffer();
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\t    BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  USER LOGIN  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
        printf("\n\n   ENTER USERNAME: ");
        fflush(stdin);
        // gets(username);
        fgets(username, 10, stdin);
        username[strcspn(username, "\n")] = '\0';

        printf("   ENTER PASSWORD: ");
        int i = 0;
        char ch;
        while (1) {
            fflush(stdin);
            ch = getch();
            if (ch == '\r') {
                password[i] = '\0';
                break;
            } else if (ch == 8 && i > 0) {
                printf("\b \b");
                i--;
            } else if (ch >= 32 && ch <= 126) {
                printf("*");
                password[i] = ch;
                i++;
            }
        }
        printf("\n");

        for (int i = 0; i < user; i++)
        {
            if ((strcmp(username,sign_ups[i].username) == 0) && (strcmp(password,sign_ups[i].password) ==0)) {
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("     BUS TICKET RESERVATION SYSTEM");
                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  USER LOGIN  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                printf("           Login Successful\n\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                temp=i;
                printf("   Press any key to continue...");
                getchar();
                system("cls");
                flag=1;
                user_menu();
                break;
            }
        }
        if (flag)
        {
            break;
        }else
        {
            system("cls");
            printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("        BUS TICKET RESERVATION SYSTEM");
            printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  USER LOGIN  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("           Wrong User or Password\n\n");
            printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            // printf("%s%s",username,password);
            printf("   Press any key to continue...");
            getchar();
            system("cls");
        }
        
    }

        


    // bool flag=0;
    // char username[10];
    // char password[10];
    // while (1)
    // {
    //     /* code */
    // }
    
    // int i = 0;
    // fflush(stdin);
    // printf("Enter Username: ");
    // fgets(username, 10, stdin);
    // username[strcspn(username, "\n")] = '\0';

    // printf("Enter Password: ");
    // while (1) {
    //     char ch = getch();
    //     if (ch == '\r') {
    //         password[i] = '\0';
    //         break;
    //     } else if (ch == 8 && i > 0) { // Backspace
    //         printf("\b \b");
    //         i--;
    //     } else if (ch >= 32 && ch <= 126 && i < 9) { // Valid printable ASCII characters
    //         printf("*");
    //         password[i] = ch;
    //         i++;
    //     }
    // }
    // printf("\n");

    // for (int j = 0; j < user; j++)
    // {
    //     if (strcmp(sign_ups[i].username,username)==0 && strcmp(sign_ups[i].password,password)==0)
    //     {
    //         user_menu();
    //     }else
    //     {
    //         flag=1;
    //     }
        
    // }

    // if (flag)
    // {
    //     printf("Fail to login");
    //     getchar();
    // }
    
    

    // FILE *file = fopen("user.txt", "r");
    // if (file == NULL) {
    //     printf("Error opening file.\n");
    //     // return 0;
    // }

    // while (fgets(buffer, sizeof(buffer), file) != NULL) {
    //     char *stored_username = strtok(buffer, ":");
    //     char *stored_password = strtok(NULL, "\n");

    //     if (stored_username != NULL && stored_password != NULL) {
    //         if (strcmp(stored_username, username) == 0 && strcmp(stored_password, password) == 0) {
    //             fclose(file);
    //             printf("Success");
    //             // return 1; // Login successful
    //         }
    //     }else
    //     {
    //         printf("Success");
    //         login_user();
    //     }
    // }

    // fclose(file);
    // // return 0; // Login failed
}

//---------------------------------------------------------End of user login--------------------------------------------------------------------------------//


//---------------------------------------------------------Start of User menu-----------------------------------------------------------------=------------//

void user_menu()
{
    while (1)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MAIN MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   [1] View Bus Info\n\n");
        printf("   [2] Book Tickets\n\n");
        printf("   [3] Print Ticket Tickets\n\n");
        printf("   [4] Update Tickets Info\n\n");
        printf("   [5] Cancel Booking\n\n");
        printf("   [6] Booking History\n\n");
        printf("   [7] Sign out\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("\n   ENTER YOUR CHOICE: ");
        scanf("%d",&selected_menu);
        system("cls");
        if (selected_menu >= 1 && selected_menu <= 7)
        {
            switch (selected_menu)
            {
            case 1:
                bus_destination();
                break;
            case 2:
                bus_destination();
                break;
            case 3:
                print_ticket();
                break;
            case 4:
                update();
                break;
            case 5:
                cancel();
                break;
            case 6:
                history();
                break;
            case 7:
                user_list();
                break;

            // default:
            //     break;
            }
            // break;
        }
        else
        {
            invalid_choice();
        }
    }

}

//---------------------------------------------------------End of User menu-----------------------------------------------------------------=------------//


//---------------------------------------------------------Start of User ticket print--------------------------------------------------------------------------------//

void print_ticket()
{
    while (1)
    {
        int x;
        char a;
        char b[]="Canceled";
        char m[]="Booked";
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  PRINT TICKET  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
        printf("\n   ENTER TICKET SERIAL NO: ");
        scanf("%d",&x);
        if (x > history_count || x<1)
        {
            system("cls");
            invalid_choice();
        }else
        {
            if (temp==booking_historys[x-1].user_id && (strcmp(booking_historys[x-1].status,m))==0)
            {
                /* code */
            
            
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("\t\t\t\t\t\t\t\t      BUS TICKET RESERVATION SYSTEM\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  History  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  |    %-10s    |    %-15s    |    %-25s    |    %-8s    |    %-8s    |    %-22s    |    %-12s    |    %-8s    |\n","Serial no","Destination","Bus","Time","Seat no","Passenger name","Phone no","Status");
                printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // for (int i = 0; i < history_count; i++)
                // {


                // if (strcmp(booking_historys[i].user_id,abcd) == 0)
                // {
                printf("  |    %-10d    |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[x-1].serial,booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no,booking_historys[x-1].status);
                // printf("  |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |",booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no);
                // if (booking_historys[x-1].status==1)
                // {
                //     printf("    %-8s    |\n","Booked");
                // }else
                // {
                //     printf("    %-8s    |\n","Canceled");
                // }
                    printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // }  
                // }
                printf("   Press y to Print Ticket, any other key to go to menu... ");
                fflush(stdin);
                scanf("%c",&a);
                if (a=='y')
                {
                    // strcpy(booking_historys[x-1].status,b);
                    system("cls");
                    // printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    // printf("        BUS TICKET RESERVATION SYSTEM");
                    // printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    // printf("          Ticket Successfully Canceled.\n\n");
                    // printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    // printf("   Press any key to continue...");
                    // getchar();
                    // getchar();
                    // history_file_write();
                    char status[]="Booked";
                    system("cls");
                    char e[]="Wishing you a smooth trip filled with adventures and excitement.";
                    char f[]="";
                    // char c[]="10.00am";
                    // char d[]="Md Raihan Chowdhoury";
                    // char e[]="01771973004";
                    // int f=10;
                    // int g=200;
                    // char h[]="Lalon Shah Poribahan";
                    // char i[]="Dhaka";
                    // strcpy(newbooking_history.bus_name,h);
                    // strcpy(newbooking_history.destination,i);
                    // strcpy(newbooking_history.time,c);
                    // strcpy(newbooking_history.name,d);
                    // strcpy(newbooking_history.phn_no,e);
                    // newbooking_history.seat_no=f;
                    // newbooking_history.fare=g;
                    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("  |  \t\t\t  Ticket: %-25s \tSerial: %-2d  |",booking_historys[x-1].bus_name,booking_historys[x-1].serial);
                    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("  |  \tDestination: %-15s\t\tDeparture time: %-8s    |\n",booking_historys[x-1].destination,booking_historys[x-1].time);
                    fflush(stdin);
                    printf("  |  \tName: %-22s\t\tPhn no: %-15s     |\n",booking_historys[x-1].name,booking_historys[x-1].phn_no);
                    printf("  |  \tSeat no: %-19d\t\tFare: BDT %-15d   |\n",booking_historys[x-1].seat_no,booking_historys[x-1].fare);
                    printf("  |    %-66s   |\n",f);
                    printf("  |    %-66s   |\n",e);
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    fflush(stdin);
                    printf("\n   Press any key to continue...");
                    getchar();
                    // system("cls");
                    user_menu();
                    system("cls");
                }
                system("cls");
                user_menu();
                break;
                // booking_historys[x].status=0;

                break;
            }else
            {
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("        BUS TICKET RESERVATION SYSTEM");
                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                printf("              Cancelled or No access.\n\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   Press any key to continue...");
                getchar();
                getchar();
                system("cls");
            }
        }
    }
}

//---------------------------------------------------------End of User ticket print--------------------------------------------------------------------------------//


//---------------------------------------------------------Start of User ticket Update--------------------------------------------------------------------------------//

void update()
{
    while (1)
    {
        int x;
        int y;
        char a;
        char str[30],phnno[12];
        // char b[]="Canceled";
        char m[]="Booked";
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd  CANCEL TICKET  \xcd\xcd\xcd\xcd\xcd\xcd \n\n");
        printf("\n   ENTER TICKET SERIAL NO: ");
        scanf("%d",&x);
        if (x > history_count || x<1)
        {
            system("cls");
            invalid_choice();
        }else
        {
            if ((strcmp(booking_historys[x-1].status,m))==0)
            {
                /* code */
            
            
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("\t\t\t\t\t\t\t\t      BUS TICKET RESERVATION SYSTEM\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  History  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  |    %-10s    |    %-15s    |    %-25s    |    %-8s    |    %-8s    |    %-22s    |    %-12s    |    %-8s    |\n","Serial no","Destination","Bus","Time","Seat no","Passenger name","Phone no","Status");
                printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // for (int i = 0; i < history_count; i++)
                // {


                // if (strcmp(booking_historys[i].user_id,abcd) == 0)
                // {
                printf("  |    %-10d    |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[x-1].serial,booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no,booking_historys[x-1].status);
                // printf("  |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |",booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no);
                // if (booking_historys[x-1].status==1)
                // {
                //     printf("    %-8s    |\n","Booked");
                // }else
                // {
                //     printf("    %-8s    |\n","Canceled");
                // }
                    printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // }  
                // }
                printf("   Press y to coninue Update any other keys to go to main menu... ");
                fflush(stdin);
                scanf("%c",&a);
                if (a=='y')
                {
                    system("cls");
                    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("     BUS TICKET RESERVATION SYSTEM");
                    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MAIN MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    printf("   [1] Update Name\n\n");
                    printf("   [2] Update Phn no\n\n");
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("\n   ENTER YOUR CHOICE: ");
                    scanf("%d",&y);
                    if (y >= 1 && y <= 2)
                    {
                        switch (y)
                        {
                            case 1:
                                system("cls");
                                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("\t     BUS TICKET RESERVATION SYSTEM");
                                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  Please Provide Information  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("\n   ENTER YOUR NAME: ");
                                fflush(stdin);
                                gets(str);
                                strcpy(booking_historys[x-1].name,str);
                                break;
                                // printf("   ENTER YOUR PHONE NO: ");
                                // fflush(stdin);
                                // scanf(" %s",phnno);
                                // strcpy(newbooking_history.phn_no,phnno);
                                // ticket();
                                // break;
                            case 2:
                                system("cls");
                                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("\t     BUS TICKET RESERVATION SYSTEM");
                                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  Please Provide Information  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                                printf("\n   ENTER YOUR PHONE NO: ");
                                fflush(stdin);
                                gets(str);
                                strcpy(booking_historys[x-1].phn_no,str);
                                break;                    
                        }
                    }
                    // strcpy(booking_historys[x-1].status,b);
                    system("cls");
                    history_file_write();
                    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("        BUS TICKET RESERVATION SYSTEM");
                    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    printf("          Updated Successfully.\n\n");
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("   Press any key to continue...");
                    getchar();
                    // getchar();
                    history_file_write();
                    user_menu();
                    system("cls");
                }
                system("cls");
                user_menu();
                break;
                // booking_historys[x].status=0;

                break;
            }else
            {
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("        BUS TICKET RESERVATION SYSTEM");
                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                printf("              Ticket canceled Already or no access\n\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   Press any key to continue...");
                getchar();
                getchar();
                system("cls");
            }
        }
    }
}

//---------------------------------------------------------End of User ticket Update--------------------------------------------------------------------------------//


//---------------------------------------------------------Start of User ticket Cancel--------------------------------------------------------------------------------//

void cancel()
{
    while (1)
    {
        int x;
        char a;
        char b[]="Canceled";
        char m[]="Booked";
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd  CANCEL TICKET  \xcd\xcd\xcd\xcd\xcd\xcd \n\n");
        printf("\n   ENTER TICKET SERIAL NO: ");
        scanf("%d",&x);
        if (x > history_count || x<1)
        {
            system("cls");
            invalid_choice();
        }else
        {
            if (temp==booking_historys[x-1].user_id && (strcmp(booking_historys[x-1].status,m))==0)
            {
                /* code */
            
            
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("\t\t\t\t\t\t\t\t      BUS TICKET RESERVATION SYSTEM\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  History  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  |    %-10s    |    %-15s    |    %-25s    |    %-8s    |    %-8s    |    %-22s    |    %-12s    |    %-8s    |\n","Serial no","Destination","Bus","Time","Seat no","Passenger name","Phone no","Status");
                printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // for (int i = 0; i < history_count; i++)
                // {


                // if (strcmp(booking_historys[i].user_id,abcd) == 0)
                // {
                printf("  |    %-10d    |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[x-1].serial,booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no,booking_historys[x-1].status);
                // printf("  |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |",booking_historys[x-1].destination,booking_historys[x-1].bus_name,booking_historys[x-1].time,booking_historys[x-1].seat_no,booking_historys[x-1].name,booking_historys[x-1].phn_no);
                // if (booking_historys[x-1].status==1)
                // {
                //     printf("    %-8s    |\n","Booked");
                // }else
                // {
                //     printf("    %-8s    |\n","Canceled");
                // }
                    printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // }  
                // }
                printf("   Press y to Confirm cancelation any othe key to go to menu... ");
                fflush(stdin);
                scanf("%c",&a);
                if (a=='y')
                {
                    strcpy(booking_historys[x-1].status,b);
                    system("cls");
                    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("        BUS TICKET RESERVATION SYSTEM");
                    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    printf("          Ticket Successfully Canceled.\n\n");
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    sit[(booking_historys[x-1].selected_destination)-1][(booking_historys[x-1].selected_time)-1][(booking_historys[x-1].selected_bus)-1][(booking_historys[x-1].selected_seat)-1]=0;
                    sit_file_write();
                    printf("   Press any key to continue...");
                    getchar();
                    getchar();
                    history_file_write();
                    user_menu();
                    system("cls");
                }
                system("cls");
                user_menu();
                break;
                // booking_historys[x].status=0;

                break;
            }else
            {
                system("cls");
                printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("        BUS TICKET RESERVATION SYSTEM");
                printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                printf("              Already Cancelled or No access.\n\n");
                printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("   Press any key to continue...");
                getchar();
                getchar();
                system("cls");
            }
        }
    }
}

//---------------------------------------------------------End of User ticket Cancel--------------------------------------------------------------------------------//


//---------------------------------------------------------Start of User History--------------------------------------------------------------------------------//

void history()
{
    int z=0;
    // for (int i = 0; i < history_count; i++)
    // {
    //     if (strcmp(booking_historys[i].user_id,abcd) == 0)
    //     {
    //         z=1;
    //         break;
    //     }  
    // }

    
    if (history_count==0)
    {
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("        BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("              No History Found!\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("   Press any key to continue...");
        getchar();
        getchar();
        system("cls");
        user_menu();
    }

    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t\t\t\t\t\t\t      BUS TICKET RESERVATION SYSTEM\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  History  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("  |    %-10s    |    %-15s    |    %-25s    |    %-8s    |    %-8s    |    %-22s    |    %-12s    |    %-8s    |\n","Serial no","Destination","Bus","Time","Seat no","Passenger name","Phone no","Status");
    printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < history_count; i++)
    {


        // if (strcmp(booking_historys[i].user_id,abcd) == 0)
        // {
            // printf("  |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |",booking_historys[i].destination,booking_historys[i].bus_name,booking_historys[i].time,booking_historys[i].seat_no,booking_historys[i].name,booking_historys[i].phn_no);
            // if (booking_historys[i].status==1)
            // {
            //     printf("    %-8s    |\n","Booked");
            // }else
            // {
            //     printf("    %-8s    |\n","Canceled");
            // }
            if (temp==booking_historys[i].user_id)
            {
                //printf("  |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[i].destination,booking_historys[i].bus_name,booking_historys[i].time,booking_historys[i].seat_no,booking_historys[i].name,booking_historys[i].phn_no,booking_historys[i].status);
                //printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                z++;
            }
            
            //printf("  |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[i].destination,booking_historys[i].bus_name,booking_historys[i].time,booking_historys[i].seat_no,booking_historys[i].name,booking_historys[i].phn_no,booking_historys[i].status);
            //printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        // }  
    }
    if(z==0)
    {
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("        BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
        printf("              No History Found!\n\n");
        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        // printf("   Press any key to continue...");
    //     getchar();
    //     getchar();
    //     system("cls");
    //     user_menu();        
    }else
    {
        for (int i = 0; i < history_count; i++)
        {
            if (temp==booking_historys[i].user_id)
            {
                printf("  |    %-10d    |    %-15s    |    %-25s    |    %-8s    |    %-8d    |    %-22s    |    %-12s    |    %-8s    |\n",booking_historys[i].serial,booking_historys[i].destination,booking_historys[i].bus_name,booking_historys[i].time,booking_historys[i].seat_no,booking_historys[i].name,booking_historys[i].phn_no,booking_historys[i].status);
                printf("   ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                // z++;
            }   
        }
    }
        printf("   Press any key to continue...");
        getchar();
        getchar();
        system("cls");
        if (selected_menu==5)
        {
            user_menu();
        }
        
        

    //printf("ID\t\t\tName\t\t\tDepartment\tBatch\tAge\tCgpa\n");
    // printf("%-12s%-30s%-13s%-10s%-10s%-10.2s\n", "ID", "Name", "Department", "Batch", "Age", "CGPA");
    // for (int i = 0; i < studentCount; i++)
    // {
    //     printf("%-12s%-30s%-13s%-10d%-10d%-10.2f\n",
    //            students[i].id, students[i].name, students[i].dept, students[i].batch, students[i].age, students[i].cgpa);
    // }

    // getchar();
    // choice();
}

//---------------------------------------------------------End of User History--------------------------------------------------------------------------------//
 

//---------------------------------------------------------End of User-------------------------------------------------------------------------------------//
//---------------------------------------------------------End of User-------------------------------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// macros defined
#define MAX_W 50
#define MAX_NUM 10 //assuming contacts will have 10-digit american phone numbers

typedef struct Contact 
{
    char name[MAX_W];
    int number[MAX_NUM];
    char email[MAX_W];
};


// function prototypes
void addContact(); 
void viewContacts();
void deleteContact();

int main(void)
{
    
    bool validChoice = true;
    int choice;

    // do while statement to make sure home page is excecued at least once and continues to loop if invalid imput is recieved
    do
    {

        // basic use of print statements to display menu for fucntion choices
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");

        // takes users inpit
        scanf("%d", &choice);

        // switch statement used to evaluate user inout and act accordingly
        switch (choice)
        {
            case 1:
                printf("Add Contacts selected!");
                addContact();
                break;
            case 2:
                printf("View Contacts selected!");
                viewContacts();
                break;
            case 3:
                printf("Delete Contacts selected!");
                deleteContact();
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid Choice. Try again\n");
                validChoice = false;

        }
    } while(validChoice == false);




    return 0;
}


void addContact()
{

}


void viewContacts()
{

}


void deleteContact()
{

}
/* Create a program to manage a to-do list. Implement a structure to store
task details (task ID, description, and status). Write a menu-driven
program to add, update, and display tasks. Use functions for each
operation.*/

#include<stdio.h>

typedef struct List
{
    int task_id;
    char description[30];
    char status[30];

}List;

void addtask();
void updatetask();
void displaytasks();

List list[100];
int count=0;

int main()
{
    int choice;
    while(1)
    {
        printf("\n1.add task.");
        printf("\n2.update task.");
        printf("\n3.display tasks.");
        printf("\n4.Exit.");


        printf("\n\nEnter a choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:addtask();
                break;
            case 2:updatetask();
                break;
            case 3:displaytasks();
                break;
            case 4:return 0;
                    break;
            default:
                printf("\ninvalid choice.");
            
        }

    }
    
}

void addtask()
{
    printf("Enter task id:");
    scanf("%d",&list[count].task_id);

    printf("Enter description:");
    scanf(" %s",list[count].description);

    printf("Enter status:");
    scanf(" %s",list[count].status);

    count++;

    printf("\nadded successfully");
}
void updatetask()
{

    int id;
    printf("Enter task id:");
    scanf("%d",&id);

       for(int i=0;i<count;i++)
       {
            if(list[i].task_id==id)
            {
                printf("\nenter new status:");
                scanf("%s",list[i].status);
                printf("\nstatus updated successfully");
                
            }
       } 
}
void displaytasks()
{
    if(count==0)
    {
        printf("\nno task available");
    }

    for(int i=0;i<count;i++)
    {
        printf("\nTask id:%d",list[i].task_id);
        printf("\nTask description:%s",list[i].description);
        printf("\nTask Status:%s",list[i].status);
    }

}

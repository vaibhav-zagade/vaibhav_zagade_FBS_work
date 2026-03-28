// Create a program to manage a to-do list. Implement a structure to store
// task details (task ID, description, and status). Write a menu-driven
// program to add, update, and display tasks. Use functions for each
// operation.

typedef struct To_Do{
    int Id;
    char desc[100];
    char status[20];
}td;

// void Add(int*,td);
// void Update(int*,td);
// void Display(int*,td);

void main(){
    int max = 100;
    int count = 0;
    int choice;
    td *ptr = (td*)malloc(sizeof(max));
    
    printf("=========To do management=========\n\n");

    do{
    printf("Menu\n");
    printf("1.Add tasks\n");
    printf("2.Update tasks\n");
    printf("3.Display tasks\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 0:printf("Exiting!!");
        break;
        case 1: Add(&count,ptr);
        break;
        case 2: Update(&count,ptr);
        break;
        case 3: Display(&count,ptr);
        break;
        default: printf("Invalid choice");
    }
    }while(choice!=0);

}

void Add(int *count,td ptr[]){
    printf("Enter Id : ");
    scanf("%d",&ptr[*count].Id);
    printf("Enter description : ");
    scanf(" %[^\n]",ptr[*count].desc);
    printf("Enter status : ");
    scanf(" %[^\n]",ptr[*count].status);
    printf("task added successfully\n");
    *count = *count +1;
    printf("Press Enter to return to menu");
    getch();
}

void Update(int *count,td ptr[]){
    int id;
    printf("Enter Id of a task to update : ");
    scanf("%d",&id);
    int found = 0;
    for(int i = 0; i<*count; i++){
        if(id==ptr[i].Id){
            printf("Enter status to update : ");
            scanf(" %[^\n]",ptr[i].status);
            printf("Status updated successfully\n");
            found = 1;
            break;
        }
    }
    if(found==0){
        printf("Not Found\n");
    }
    printf("Press Enter to return to menu");
    getch();
}

void Display(int *count,td ptr[]){
    for(int i = 0; i<*count; i++){
        printf("Task Id: %d\n",ptr[i].Id);
        printf("Task description : %s\n",ptr[i].desc);
        printf("Task Status: %s\n",ptr[i].status);
        
    }
}

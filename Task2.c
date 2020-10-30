//We are going to Implement the Behaviour of an Image Viewer using the Singly Linked List

//Header Files
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
#include<time.h>
#include<string.h>

//Declaring Global Variables
int start=1;
char temp_image1[15]="TAJ.jpg",temp_image2[15]="GIRL.jpg",temp_image3[15]="THREE.jpg",temp_image4[15]="MALACA.jpg",temp_image5[15]="EIFFEL.jpg";

//Defining a Node data type
struct node{
    char image[15];
    struct node *next;
};

typedef struct node snode;
snode *newnode,*temp;
snode *first=NULL,*last=NULL;

//Declaring Functions
void image_viewer(int);
void insert_nodes();
void spaces(int);
void pre_defined_images(int);
void default_display();
void delay(int);
int conformation();

//Defining Functions
void image_viewer(int a)
{
    int occ,rem;
    spaces(10);
    for(int i=0;i<20;i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        spaces(10);
        printf("|");
        spaces(18);
        printf("|\n");
    }
    spaces(10);
    printf("|");
    spaces(4);
    if(a==1)
    {
        printf("%s",temp_image1);
        occ=strlen(temp_image1);
        rem=14-occ;
        spaces(rem);
        printf("|\n");
    }
    else
    {
        if(a==2)
        {
            printf("%s",temp_image2);
            occ=strlen(temp_image2);
            rem=14-occ;
            spaces(rem);
            printf("|\n");
        }
        else
        {
            if(a==3)
            {
                printf("%s",temp_image3);
                occ=strlen(temp_image3);
                rem=14-occ;
                spaces(rem);
                printf("|\n");
            }
            else
            {
                if(a==4)
                {
                    printf("%s",temp_image4);
                    occ=strlen(temp_image4);
                    rem=14-occ;
                    spaces(rem);
                    printf("|\n");
                }
                else
                {
                    printf("%s",temp_image5);
                    occ=strlen(temp_image5);
                    rem=14-occ;
                    spaces(rem);
                    printf("|\n");
                }
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        spaces(10);
        printf("|");
        spaces(18);
        printf("|\n");
    }
    spaces(10);
    for(int i=0;i<20;i++)
    {
        printf("-");
    }
    printf("\n\n");
}

void insert_nodes()
{
    newnode=(snode*)malloc(sizeof(snode));
    if(newnode==NULL)
    {
        printf("Memory was not allocated.Please try again");
        delay(3);
        printf("\n");
    }
    else
    {
        newnode->image[15]=temp_image1;
        newnode->next=NULL;
        if(first==last && first==NULL)
        {
            first=last=newnode;
            first->next=NULL;
            last->next=NULL;
        }
        else
        {
            temp=first;
            first=newnode;
            first->next=temp;
        }
    }
    newnode=(snode*)malloc(sizeof(snode));
    if(newnode==NULL)
    {
        printf("Memory was not allocated.Please try again");
        delay(3);
        printf("\n");
    }
    else
    {
        newnode->image[15]=temp_image2;
        newnode->next=NULL;
        if(first==last && first==NULL)
        {
            first=last=newnode;
            first->next=NULL;
            last->next=NULL;
        }
        else
        {
            temp=first;
            first=newnode;
            first->next=temp;
        }
    }
    newnode=(snode*)malloc(sizeof(snode));
    if(newnode==NULL)
    {
        printf("Memory was not allocated.Please try again");
        delay(3);
        printf("\n");
    }
    else
    {
        newnode->image[15]=temp_image3;
        newnode->next=NULL;
        if(first==last && first==NULL)
        {
            first=last=newnode;
            first->next=NULL;
            last->next=NULL;
        }
        else
        {
            temp=first;
            first=newnode;
            first->next=temp;
        }
    }
    newnode=(snode*)malloc(sizeof(snode));
    if(newnode==NULL)
    {
        printf("Memory was not allocated.Please try again");
        delay(3);
        printf("\n");
    }
    else
    {
        newnode->image[15]=temp_image4;
        newnode->next=NULL;
        if(first==last && first==NULL)
        {
            first=last=newnode;
            first->next=NULL;
            last->next=NULL;
        }
        else
        {
            temp=first;
            first=newnode;
            first->next=temp;
        }
    }
    newnode=(snode*)malloc(sizeof(snode));
    if(newnode==NULL)
    {
        printf("Memory was not allocated.Please try again");
        delay(3);
        printf("\n");
    }
    else
    {
        newnode->image[15]=temp_image5;
        newnode->next=NULL;
        if(first==last && first==NULL)
        {
            first=last=newnode;
            first->next=NULL;
            last->next=NULL;
        }
        else
        {
            temp=first;
            first=newnode;
            first->next=temp;
        }
    }
}

void spaces(int a)
{
    for(int i=0;i<a;i++)
    {
        printf(" ");
    }
}

void pre_defined_images(int a)
{
    if(a==1)
    {
        insert_nodes();
        start+=1;
    }
}

void default_display()
{
    printf("\n");
    for(int i=0;i<30;i++)
    {
        printf("-");
    }
    printf("\n\nOperations on an Image Viewer\n\n");
    for(int i=0;i<30;i++)
    {
        printf("-");
    }
    printf("\n\n1.Beginning of the Image\n2.Moving to next Image\n3.Moving to previous Image\n4.Display all the Images\n5.Exit\n\n");
    for(int i=0;i<30;i++)
    {
        printf("~");
    }
    printf("\n\nEnter your Choice : ");
}

void delay(int sec)
{
    int temp_sec=0;
    clock_t start_time=clock();
    for(int i=1;i<=sec;i++)
    {
        temp_sec+=1000;
        while(clock()<start_time+temp_sec)
        {
            printf("");
        }
        printf(" . ");
    }
}

int conformation()
{
    char ch;
    printf("\nDo you want to Continue(Y/N)?:");
    scanf(" %c",&ch);
    printf("\n");
    if(ch=='Y' || ch=='y')
    {
        return 1;
    }
    else
    {
        if(ch=='N' || ch=='n')
        {
            return 0;
        }
        else
        {
            printf("Invalid Input.Please Try Again");
            delay(3);
            printf("\n");
            return 1;
        }
    }
}

//Main Function
int main()
{
    printf(" - - - AVAILABLE IMAGE FILES - - -\n");
    printf("%s\n%s\n%s\n%s\n%s\n",temp_image1,temp_image2,temp_image3,temp_image4,temp_image5);
    int choice,conf,current;
    char ans='Y';
    pre_defined_images(start);
    while(ans=='Y'||ans=='y')
    {
        default_display();
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
        case 1:
            printf(" - - - Beginning of the Image - - -\n");
            delay(3);
            current=1;
            printf("\n\n");
            image_viewer(current);
            conf=conformation();
            if(conf==1)
            {
                delay(5);
                ans='Y';
                printf("\a");
                system("cls");
            }
            else
            {
                ans='N';
                printf("\n - - - Exiting - - - \n");
                delay(5);
                printf("\a");
                system("cls");
            }
            break;
        case 2:
            printf(" - - - Moving to Next Image - - - \n");
            delay(3);
            printf("\n\n");
            if(current!=5)
            {
                current+=1;
                spaces(15);
                printf("I M A G E  %d\n",current);
            }
            else
            {
                current=1;
                spaces(15);
                printf("I M A G E  %d\n",current);
            }
            image_viewer(current);
            conf=conformation();
            if(conf==1)
            {
                delay(5);
                ans='Y';
                printf("\a");
                system("cls");
            }
            else
            {
                ans='N';
                printf("\n - - - Exiting - - - \n");
                delay(5);
                printf("\a");
                system("cls");
            }
            break;
        case 3:
            printf(" - - - Moving to Previous Image - - - \n");
            delay(3);
            printf("\n\n");
            if(current!=1)
            {
                current-=1;
                spaces(15);
                printf("I M A G E  %d\n",current);
            }
            else
            {
                current=5;
                spaces(15);
                printf("I M A G E  %d\n",current);
            }
            image_viewer(current);
            conf=conformation();
            if(conf==1)
            {
                delay(5);
                ans='Y';
                printf("\a");
                system("cls");
            }
            else
            {
                ans='N';
                printf("\n - - - Exiting - - - \n");
                delay(5);
                printf("\a");
                system("cls");
            }
            break;
        case 4:
            system("cls");
            printf("\a");
            printf(" - - - Displaying Images from Beginning!!! - - - \n");
            delay(5);
            for(int i=1;i<=5;i++)
            {
                spaces(15);
                printf("I M A G E  %d\n",i);
                image_viewer(i);
                printf("\n");
                delay(3);
                system("cls");
                printf("\a");
            }
            spaces(15);
            printf(" - - - C O M P L E T E D ! ! ! - - - \n");
            delay(5);
            conf=conformation();
            if(conf==1)
            {
                delay(5);
                ans='Y';
                printf("\a");
                system("cls");
            }
            else
            {
                ans='N';
                printf("\n - - - Exiting - - - ");
                delay(5);
                printf("\a");
                system("cls");
            }
            break;
        case 5:
            ans='N';
            printf("\n - - - Closing Image Viewer - - - \n");
            delay(5);
            break;
        default:
            printf("Invalid Input.Please Try Again");
            delay(3);
            break;
        }
    }
    return 0;
}

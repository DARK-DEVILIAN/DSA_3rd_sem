//We are going to Implement the Database Design For Hospital Functionality Based on Heap Sorting Algorithm

//Header Files
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>

//Defining a Node Data type
struct node{
    unsigned long long int id;
    int age,pos;
    char *name,*disease,*date;
}data_1,data_2,data_3,data_4,data_5;

//Declaring Functions
void find_data();
void find_age(int,int);
void pre_defined_datas();
void default_display();
void spaces(int);
void delay(int);
void display_data();
int conformation();

//Defining Functions
void find_age(int i,int age)
{
    if(age==data_1.age)
    {
        printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_1.name,data_1.age,data_1.id,data_1.disease,data_1.date);
    }
    else
    {
        if(age==data_2.age)
        {
            printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_2.name,data_2.age,data_2.id,data_2.disease,data_2.date);
        }
        else
        {
            if(age==data_3.age)
            {
                printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_3.name,data_3.age,data_3.id,data_3.disease,data_3.date);
            }
            else
            {
                if(age==data_4.age)
                {
                    printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_4.name,data_4.age,data_4.id,data_4.disease,data_4.date);
                }
                else
                {
                    printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_5.name,data_5.age,data_5.id,data_5.disease,data_5.date);
                }
            }
        }
    }
}

void swapping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifying(int arr[], int n, int i)
{
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    // Swapping and continue heapifying if root is not largest
    if (largest != i)
    {
      swapping(&arr[i], &arr[largest]);
      heapifying(arr, n, largest);
    }
}

void heaping_sort(int arr[],int n)
{
     // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapifying(arr, n, i);
    // Heap sort
    for (int i = n - 1; i >= 0; i--)
        {
            swapping(&arr[0], &arr[i]);
            // Heapifying root element to get highest element at root again
            heapifying(arr, i, 0);
        }
}

void heap_sort()
{
    int arr[5];
    arr[0]=data_1.age;
    arr[1]=data_2.age;
    arr[2]=data_3.age;
    arr[3]=data_4.age;
    arr[4]=data_5.age;
    int n = sizeof(arr) / sizeof(arr[0]);
    heaping_sort(arr,n);
    printf("SORTED DATABASE\n");
    delay(3);
    printf("\n\n");
    for(int i=1;i<=5;i++)
    {
        find_age(i,arr[i-1]);
    }
}

void find_data()
{
    int age;
    printf("Enter the Age :");
    scanf("%d",&age);
    printf(" - - - SEARCHING - - -\n");
    if(age==data_1.age)
    {
        printf("Data Found\n");
        printf("Details\n");
        printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_1.name,data_1.age,data_1.id,data_1.disease,data_1.date);
    }
    else
    {
        if(age==data_2.age)
        {
            printf("Data Found\n");
            printf("Details\n");
            printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_2.name,data_2.age,data_2.id,data_2.disease,data_2.date);
        }
        else
        {
            if(age==data_3.age)
            {
                printf("Data Found\n");
                printf("Details\n");
                printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_3.name,data_3.age,data_3.id,data_3.disease,data_3.date);
            }
            else
            {
                if(age==data_4.age)
                {
                    printf("Data Found\n");
                    printf("Details\n");
                    printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_4.name,data_4.age,data_4.id,data_4.disease,data_4.date);
                }
                else
                {
                    if(age==data_5.age)
                    {
                        printf("Data Found\n");
                        printf("Details\n");
                        printf("\n%s\n%d\n%llu\n%s\n%s\n\n",data_5.name,data_5.age,data_5.id,data_5.disease,data_5.date);
                    }
                    else
                    {
                        printf("Result Not Found.Please Try Again\n");
                        delay(5);
                    }
                }
            }
        }
    }
}

void pre_defined_datas()
{
    data_1.name="Athish";
    data_1.age=20;
    data_1.pos=1;
    data_1.id=570041;
    data_1.disease="Cold";
    data_1.date="May 06,2018";
    data_2.name="Rama";
    data_2.age=24;
    data_1.pos=2;
    data_2.id=570042;
    data_2.disease="Fever";
    data_2.date="August 08,2017";
    data_3.name="Jayanth";
    data_3.age=16;
    data_1.pos=3;
    data_3.id=570043;
    data_3.disease="COVID-19";
    data_3.date="February 04,2020";
    data_4.name="Paarvathi";
    data_4.age=48;
    data_1.pos=4;
    data_4.id=570044;
    data_4.disease="Typhoid";
    data_4.date="June 05,2019";
    data_5.name="Selvi";
    data_5.age=37;
    data_1.pos=5;
    data_5.id=570045;
    data_5.disease="Malaria";
    data_5.date="November 24,2010";
}

void default_display()
{
    printf("\n");
    for(int i=0;i<30;i++)
    {
        printf("-");
    }
    printf("\n\nOperations that can be performed\n\n");
    for(int i=0;i<30;i++)
    {
        printf("-");
    }
    printf("\n\n1.Searching Data\n2.Sorting Data\n3.Displaying Data\n4.Exit\n\n");
    for(int i=0;i<30;i++)
    {
        printf("~");
    }
    printf("\n\nEnter your Choice : ");
}

void spaces(int a)
{
    for(int i=0;i<a;i++)
    {
        printf(" ");
    }
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

void display_data()
{
    printf("\nNAME\nAGE\nID\nDISEASE\nDATE\n\n");
    printf("1.\n%s\n%d\n%llu\n%s\n%s\n\n",data_1.name,data_1.age,data_1.id,data_1.disease,data_1.date);
    printf("2.\n%s\n%d\n%llu\n%s\n%s\n\n",data_2.name,data_2.age,data_2.id,data_2.disease,data_2.date);
    printf("3.\n%s\n%d\n%llu\n%s\n%s\n\n",data_3.name,data_3.age,data_3.id,data_3.disease,data_3.date);
    printf("4.\n%s\n%d\n%llu\n%s\n%s\n\n",data_4.name,data_4.age,data_4.id,data_4.disease,data_4.date);
    printf("5.\n%s\n%d\n%llu\n%s\n%s\n\n",data_5.name,data_5.age,data_5.id,data_5.disease,data_5.date);
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
    int choice,conf;
    char ans='Y';
    pre_defined_datas();
    while(ans=='Y'||ans=='y')
    {
        default_display();
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
        case 1:
            printf("\n- - - SEARCHING DATA - - -\n");
            delay(3);
            printf("\n");
            find_data();
            printf("\n\n");
            conf=conformation();
            if(conf==1)
            {
                delay(3);
                ans='Y';
                printf("\a");
                system("cls");
            }
            else
            {
                ans='N';
                printf("\n - - - Exiting - - - \n");
                delay(3);
                printf("\a");
                system("cls");
            }
            break;
        case 2:
            printf("\n - - - SORTING DATA - - -\n");
            printf("\n - - - PERFORMING HEAP SORTING - - -\n");
            delay(3);
            heap_sort();
            printf("\n\n");
            conf=conformation();
            if(conf==1)
            {
                delay(3);
                ans='Y';
                printf("\a");
                system("cls");
            }
            else
            {
                ans='N';
                printf("\n - - - Exiting - - - \n");
                delay(3);
                printf("\a");
                system("cls");
            }
            break;
        case 3:
            system("cls");
            printf("\a");
            printf(" - - - DISPLAYING DATA - - -\n");
            delay(3);
            display_data();
            conf=conformation();
            if(conf==1)
            {
                delay(3);
                ans='Y';
                printf("\a");
                system("cls");
            }
            else
            {
                ans='N';
                printf("\n - - - Exiting - - - \n");
                delay(3);
                printf("\a");
                system("cls");
            }
            break;
        case 4:
            ans='N';
            printf("\n - - - Closing Hospital Database - - - \n");
            delay(3);
            break;
        default:
            printf("Invalid Input.Please Try Again!!!");
            delay(3);
            break;
        }
    }
    return 0;
}

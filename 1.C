#include<stdio.h>

typedef struct
{
    
    char name[20];
    int marks[5];
    char grade;
    int total;
    float percent;



}grade;

void get_details(grade students[]);
void display_details();

grade students[3];


int main()
{
    get_details(students);
    
    display_details();

    return 0;
}

void get_details(grade students[])
{
    for(int i=0;i<3;i++)
    {
        int j=0;
        students[i].total=0;
        printf("Student %d\n\n",i);
        printf("Enter name: ");
        scanf(" %s",&students[i].name);
        printf("Enter marks: ");
        for(j=0;j<5;j++)
        {
            printf("Subject %d: ",j);
            scanf(" %d",&students[i].marks[j]);
            students[i].total = students[i].total+students[i].marks[j];

        }
        students[i].percent = students[i].total/5;

        float percentage = students[i].percent;

        if(percentage<=50.0)  students[i].grade='F';
        else if(percentage<=60) students[i].grade='P';
        else if(percentage<=70) students[i].grade='C';
        else if(percentage<=80) students[i].grade='B';
        else if(percentage<=90) students[i].grade='A';
        else students[i].grade='D';
    }
    
}

void display_details()
{
    for(int i=0;i<3;i++)
    {
        printf("Student %d\n",i);
        printf("Name: %s\n",students[i].name);
        printf("Percentage: %f\n",students[i].percent);
        printf("Grade: %c\n\n",students[i].grade);
    }
}
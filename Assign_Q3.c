//3. Create array of 10 students(rollno, name, marks) and sort students by their marks.

#include<stdio.h>
#include<string.h>

#define SIZE 10
#define MAX_LEN 50

struct student
{
    int roll_no;
    char name[MAX_LEN];
    float marks;
};

void display(struct student data[], int n );
void sort_marks(struct student data[], int marks );
 
 int main()
 {
     struct student data[SIZE] ={
         {1,"Bhakti",85.5},
         {2,"Vivek",80.4},
         {3,"Abhi",82.6},
         {4,"Pooja",90.8},
         {5,"Vaishali",88.55},
         {6,"Amruta",81.10},
         {7,"Priyanka",84.96},
         {8,"Shraddha",87.32},
         {9,"Jyoti",89.54},
         {10,"Shital",86.52}
     };

     printf("\nStudents before sorting:\n");
     display(data,SIZE);

     sort_marks(data,SIZE);

     printf("\nStudents after sorting:\n");
     display(data,SIZE);
     return 0;
 }

void sort_marks(struct student data[], int n )
{
    struct student temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (data[j].marks > data[j + 1].marks) 
            {
                // Swap the students
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void display(struct student data[], int n )
{
    printf("Roll No\tName\t\tData\n");
    printf("-------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%f\n",data[i].roll_no,data[i].name,data[i].marks);
    }
}
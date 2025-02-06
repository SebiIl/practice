#include<stdio.h>

struct Student 
{
    int age; 
    char name[50]; 
    float marks; 
};


int main()
{
    struct Student s1, s2; 

   //Input for the first student 
   printf("Input detail for student 1:\n"); 
   printf("Name: "); 
   scanf("%s", s1.name); 
   printf("Age: "); 
   scanf("%d", &s1.age); 
   printf("Marks: "); 
   scanf("%f", &s1.marks); 

	  //Input for the second student 
   printf("Input detail for student 2:\n"); 
   printf("Name: "); 
   scanf("%s", s2.name); 
   printf("Age: "); 
   scanf("%d", &s2.age); 
   printf("Marks: "); 
   scanf("%f", &s2.marks); 

   //Display the information for student 1
	 printf("Student 1 information: \n"); 
	 printf("Name: %s\n", s1.name); 
	 printf("Age: %d\n", s1.age);
	 printf("Marks: %f\n", s1.marks);  

	 //Display the information for student 2
	 printf("Student 1 information: \n"); 
	 printf("Name: %s\n", s2.name); 
	 printf("Age: %d\n", s2.age);
	 printf("Marks: %f\n", s2.marks);  

    return 0; 
}
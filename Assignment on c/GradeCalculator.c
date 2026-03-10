#include<stdio.h>

int main()
{
    float s1,s2,s3,s4,s5;
    float total, percentage;
    char grade;

    printf("Enter all subject marks: \n");
    scanf("%f%f%f%f%f", &s1,&s2,&s3,&s4,&s5);

    total = s1 + s2 + s3 + s4 + s5;

    percentage = total / 5;

    grade = (percentage >= 75 ) ? 'A' : (percentage >=60) ? 'B' : (percentage >=45) ? 'C' : 'F';

    printf("\n----- Result -----\n");
    printf("Subject 1: %.2f\n", s1);
    printf("Subject 2: %.2f\n", s2);
    printf("Subject 3: %.2f\n", s3);
    printf("Subject 4: %.2f\n", s4);
    printf("Subject 5: %.2f\n", s5);
    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    (grade == 'F') ? printf("Grade: Fail\n") : printf("Grade: %c\n", grade);
            
}
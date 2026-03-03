#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float percentage;
};

void main() 
{
    struct student s[100], temp;
    int n, i, j;
    float classTotalPercentage = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
	{
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", &s[i].name);

        printf("Marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3.0;

        classTotalPercentage += s[i].percentage;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i].total < s[j].total) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nTop 3 Students\n");
    for (i = 0; i < 3 && i < n; i++) {
        printf("\nRank %d\n", i + 1);
        printf("Roll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %d\n", s[i].total);
        printf("Percentage: %.2f\n", s[i].percentage);
    }

 
    printf("\nClass Average Percentage: %.2f\n",classTotalPercentage / n);

}


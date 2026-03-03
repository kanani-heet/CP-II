//Read n numbers from user and print in normal and reverse order (Array)
#include<stdio.h>
void main()
{
	int n, i,arr[n];
    printf("Enter The Number : ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
     }
     
    printf("\nNumbers In Normal Order: ");
    for (i = 0; i < n; i++)
	 {
        printf("%d ", arr[i]);
     }

    printf("Numbers In Reverse Order: ");
    for (i = n - 1; i >= 0; i--)
	 {
        printf("%d ", arr[i]);
     }
}

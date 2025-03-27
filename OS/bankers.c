#include <stdio.h>
int main()
{
    int p, r, count = 0, i, j;
    printf("Enter The no of processes:  ");
    scanf("%d", &p);
    printf("Enter The no of Resources:  ");
    scanf("%d", &r);

    int prs[p], ava[r], allo[p][r], max[p][r], need[p][r];
    int work[r], safeseq[p], finished[p];

    for (i = 0; i < p; i++) {
        prs[i] = i;
        finished[i] = 0;
    }

    
    printf("Enter The Available Resources: ");
    for (i = 0; i < r; i++) {
        scanf("%d", &ava[i]);
    }

   
    printf("\nEnter Max Demand Matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    
    printf("Enter The Allocation Matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &allo[i][j]);
        }
    }

        	
    printf("The need matrix is: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            need[i][j] = max[i][j] - allo[i][j];
            printf("%d\t", need[i][j]);
        }
        printf("\n");
    }

   
    for (i = 0; i < r; i++) {
        work[i] = ava[i];
    }

   
    while (count < p) {
        int found = 0;
        for (i = 0; i < p; i++) {
            if (!finished[i]) {
                int canAllocate = 1;
              
                for (j = 0; j < r; j++) {
                    if (need[i][j] > work[j]) {
                        canAllocate = 0;
                        break;
                    }
                }

                if (canAllocate) {
                    
                    for (j = 0; j < r; j++) {
                        work[j] += allo[i][j];  
                    }
                    safeseq[count++] = prs[i];
                    finished[i] = 1;
                    found = 1;
                }
            }
        }

        if (!found) {
            printf("System is in an unsafe state.\n");
            return 0; 
        }
    }


    printf("Safe sequence: ");
    for (i = 0; i < p; i++) {
        printf("%d ", safeseq[i]);  
    }
    printf("\n");

    return 0;
}











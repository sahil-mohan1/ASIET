#include<stdio.h>
int main(){
    int p,r,i,j,canAlloc,found,count=0;
    printf("enter no. of processes: ");
    scanf("%d",&p);
    printf("enter no. of resources: ");
    scanf("%d",&r);
    int ava[r],max[p][r],alloc[p][r],need[p][r],finished[p],work[r],safeseq[p];

    printf("enter available resources: ");
    for(i=0;i<r;i++)
        scanf("%d", &ava[i]);

    for(i=0;i<p;i++)
        finished[i]=0;
    for(i=0;i<r;i++)
        work[i]=ava[i];
    
    printf("enter max demand matrix: ");
    for(i=0;i<p;i++)
        for(j=0;j<r;j++)
            scanf("%d", &max[i][j]);

    printf("enter allocation matrix: ");
    for(i=0;i<p;i++)
        for(j=0;j<r;j++)
                scanf("%d", &alloc[i][j]);

    printf("need matrix is:\n");
    for(i=0;i<p;i++){
        for(j=0;j<r;j++){
            need[i][j]=max[i][j]-alloc[i][j];
            printf("%d\t", need[i][j]);
        }
        printf("\n");
    }

    while(count<p)
    {
        found=0;
        for(i=0;i<p;i++){
            if(!finished[i]){
                canAlloc=1;
                for(j=0;j<r;j++){
                    if(need[i][j]>work[j]){
                        canAlloc=0;
                        break;
                    }
                }
                if (canAlloc){
                    for(j=0;j<r;j++)
                        work[j] += alloc[i][j];
                    finished[i]=1;
                    safeseq[count++]=i;
                    found=1;
                }
            }
        }

        if(!found){
            printf("system is in unsafe state.\n");
            return 0;
        }
    }

    printf("The safe sequence is: \n");
    for(i=0;i<p;i++)
        printf("P%d ",safeseq[i]); 

}
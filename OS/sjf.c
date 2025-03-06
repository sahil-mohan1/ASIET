#include <stdio.h>

void main(){
	int p[20], bt[20], tt[20], wt[20], i, j, n, temp;
	float tt_avg=0, wt_avg=0;

printf("enter no of processes: ");
scanf("%d",&n);
printf("enter burst time:\n");

for (i=0;i<n;i++){
	printf("p%d: ",i);
	p[i]=i;
	scanf("%d",&bt[i]);
}


for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
		if (bt[j]>bt[j+1]){
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
			temp=bt[j];
			bt[j]=bt[j+1];
			bt[j+1]=temp;
		}
}}

printf("burst times:\n");
for (i=0;i<n;i++){
	printf("p%d: ",i);
	printf("%d\n",bt[i]);
}

wt[0]=0;
for(i=1;i<n;i++){
	wt[i]=wt[i-1]+bt[i-1];
	wt_avg+=wt[i];
}

for(i=0;i<n;i++){
	tt[i]=wt[i]+bt[i];
	tt_avg+=tt[i];
}

wt_avg/=n;
tt_avg/=n;
printf("average waiting time: %f\n",wt_avg);
printf("average turnaround time: %f\n",tt_avg);

printf("Gantt chart:\n");
printf("--------------------------------------------------------------------------------\n");
for(i=0;i<n;i++)
	printf("|\tp%d\t|",p[i]);
printf("\n");
printf("--------------------------------------------------------------------------------\n");
for(i=0;i<n;i++)
	printf("\t%d\t", wt[i]);
}

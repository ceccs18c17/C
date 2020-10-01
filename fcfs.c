#include<stdio.h>
 void main()
 {
    int i,j,n,bt[50],wt[50],tat[50],avgwt=0,avgtat=0;
    printf("Enter total number of processes: ");
    scanf("%d",&n);
    printf("Enter Process Burst Time:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    wt[0]=0;   
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avgwt+=wt[i];
        avgtat+=tat[i];
        printf("\n%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    avgwt/=i;
    avgtat/=i;
    printf("\n\nAverage Waiting Time: %d",avgwt);
    printf("\nAverage Turnaround Time: %d",avgtat);
 }
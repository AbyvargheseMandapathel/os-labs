#include<stdio.h>
int main() {
  int i,n,temp[20],bt[20],wt[20],tat[20],at[20];
  float atat=0,awt=0;
  printf("\n enter the number of process");
  scanf("%d",&n);
  printf("enter the burst time");
  for(i=0;i<n;i++)
  {
    scanf("%d",&bt[i]);
  }
  printf("enter arrival time");
  for(i=0;i<n;i++){
    scanf("%d",&at[i]);
     temp[i]=0;
  }
  printf("\nprocess\t\tat\tbt\ttat\n");
  for(i=0;i<n;i++){
    wt[i]=0;
    tat[i]=0;
    temp[i+1]=temp[i]+bt[i];
    wt[i]=temp[i]-at[i];
    tat[i]=wt[i]+bt[i];
   awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
      }
            
            awt=awt/n;
            atat=atat/n;
            printf("awt=%f\n",awt);
            printf("atat=%f",atat); 
            tat[i]=wt[i]+bt[i];

  }

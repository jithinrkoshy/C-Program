/*  Simulation of Bankers Algorithm   */

/*
  Creator:Jithin Reji Koshy

*/

#include<stdio.h>
void main()
{
int n,m,i,j,q,c,cn,count,cnew;c=0,cn=0,count=0,cnew=0;
int alloc[20][20],max[20][20],need[20][20],s[20],avail[20];
int finish[10],p[10];
printf("\nEnter the number of processes:");                     //Enter the number of processes
scanf("%d",&n);
printf("\nEnter the number of resources: ");                    //Enter the number of resources
scanf("%d",&m);
j=0;
for(i=0;i<n;i++)                                              //Loop for allocation of resources to each process
 { finish[i]=0;}
printf("\nEnter the allocations to process\n");
 for(i=0;i<n;i++)
 { printf("\nEnter the allocation to process P%d in order",i);
   for(j=0;j<m;j++)
   {  scanf("%d",&alloc[i][j]);
   }
 }
printf("\nEnter the max allocations to process\n");               
 for(i=0;i<n;i++)                                                     //Loop for maximum allocation of resources to each process
 { printf("\nEnter the max allocation to process P%d in order\n",i);
   for(j=0;j<m;j++)
   {  scanf("%d",&max[i][j]);
   }
 } 
printf("\nEnter the available instances in order:\n");               
 for(i=0;i<m;i++)                                                     //Loop for the available instances
 {
 scanf("%d",&avail[i]);
  } 
 printf("\n\t\tNeed Matrix");
 for(i=0;i<n;i++)                                                    //Prints the correspondind need matrix
 {
       printf("\n");
     for(j=0;j<m;j++)
     {
      need[i][j]=max[i][j]-alloc[i][j];
      printf("\t%d",need[i][j]); 
     } 

}

while(c<n)
{

for(i=0;i<n;i++)                                                         //Checks for the safe sequence
{ 
  cn=0;
 for(j=0;j<m;j++)
 {  
  if(need[i][j]<=avail[j])
  {
     cn++;
    if(cn==m)
    {
     for(q=0;q<m;q++)
     {  avail[q]=avail[q]+alloc[i][q];
        need[i][q]=1000; 
      }
    s[count]=i;count++;
    finish[i]=1;
                  
   }
  }
 
}}
c++;
}

for(q=0;q<n;q++)                                      
{
  if(finish[q]==1)
    cnew++;
 }
if(cnew==n)
{
printf("\nThe process is in safe state");
}
else
{
printf("\nThe process is in unsafe state");

}
}  

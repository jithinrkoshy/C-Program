/*C code to determine the winning and losing of a game.The game is as follows: There will be n players and villains.Energies of the each players and Strength of each villains are given.If the energy of a player is greater than the strength of a villain,player kills the villain otherwise not.If all the players can kill every villain like this,player WINS otherwise LOSE*/
/*
Created By:Jithin Reji Koshy
*/
#include<stdio.h>
int y=0,i=0;int player[1000],villain[1000];int z=0,c=0;int n,p;int tmpi=0,tmp;int flag[10];
void scanp()
{
if(y<p)
{
scanf("%d",&player[i]);
tmpi=i;
while(tmpi>0)
{
  if(player[tmpi]<player[tmpi-1])
  {
      tmp=player[tmpi];
      player[tmpi]=player[tmpi-1];
      player[tmpi-1]=tmp;
  }
  tmpi--;
}


y++;
i++;
scanp();
}
}
void scanv()
{
if(y<p)
{
scanf("%d",&villain[i]);
tmpi=i;
while(tmpi>0)
{
  if(villain[tmpi]<villain[tmpi-1])
  {
      tmp=villain[tmpi];
      villain[tmpi]=villain[tmpi-1];
      villain[tmpi-1]=tmp;
  }
  tmpi--;
}

y++;i++;
scanv();
}
}


int main()
{   
        printf("\nEnter the number of testcases: \n");
	scanf("%d",&n);
        printf("\nEnter the number of players and villains: \n");
	scanf("%d",&p);
     if(n<=10)
     {
	while(z<n)
	{
           printf("\nTest case %d\n",z+1);    
           printf("\nEnter the strength of villains as space separated values: \n");
          scanv();
	 y=0;i=0;
         tmpi=0;
         printf("\nEnter the energies of players as space separated values: \n");
	 scanp();
	  for(i=0;i<p;i++)
          {
             
             if(player[i]<villain[i])
             {
                    c=1;
             }
          }
          
	  
     if(c==0)
	 {
		flag[z]=0;
	 }
	 else
	 {
		 flag[z]=1;
	 }
     z++;
     y=0;i=0;c=0;
	}
     i=0;
  printf("\nGame Status: \n");
   while(i<n)
   {
     printf("\nTest case %d \n",i+1);
     if(flag[i]==0)
	 {
		printf("WIN\n");
	 }
	 else
	 {
		 printf("LOSE\n");
	 }
     i++;
   }
  }

}


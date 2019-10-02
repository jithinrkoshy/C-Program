/*  Simulation of symbol table used in assembler    */
/*
  Creator:Jithin Reji Koshy

*/
#include<stdio.h>
#include<string.h>
struct symtab
{
char label[20];
int address;
};

void main()
{ int c=1;int ch,x;char lb[20],l[20];int add,max,m;
  struct symtab sd[30];
  
  int hash(char l[],int m)                          //Hash for calculating the position in symbol table
  { int x1,x2;
    x1=l[0];
    x2=l[1];
    x=x1+x2;
    x=x%m;
    return x;
  } 
 printf("\nEnter the maximum size of symtab: ");       //max size of symbol table
   scanf("%d",&max);
  while(c==1)
  {
   
   
  printf("\nEnter your choice:\n1.Insert to symtab\t2.Search in symtab\n");
  scanf("%d",&ch);
  if(ch==1)
 {
  printf("\nEnter the label:  ");                                           //Block for inserting in to symbol table
  scanf("%s",lb);
  printf("\nEnter the address:  ");
  scanf("%d",&add); 
  x=hash(lb,max);                                               //Hash function returns the position in symbol table
  strcpy(sd[x].label,lb);                                       //Copying the label value to the symbol table
  sd[x].address=add;                                             //Copying the address value to the symbol table
  
 }
 else if(ch==2)
 { 
  printf("\nEnter the label:  ");                                        //Block for searching in the symbol table
  scanf("%s",lb);
  x=hash(lb,max);
 if(sd[x].label==NULL&&sd[x].address=='\0')
 {  printf("\nSYMBOL NOT FOUND!\n\n");
 }
 else
 {
 printf("\nLABEL: %s",sd[x].label);                                             //Display the value in symbol table
 printf("\nADDRESS: %d",sd[x].address);
 } 

 }
 else
 {
  printf("\nWRONG INPUT!");

 }

 printf("\nIf you want to continue press 1: ");
 scanf("%d",&c);
  }


  

}


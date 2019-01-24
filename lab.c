#include<stdio.h>
int a[20],n;
void trever();
void inser();
void delete();
int ask();
void main(){
printf("enter the size of array");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int cas,cont;

while(cont){
printf("enter the operation you want to perform:-\n1:treversing \n2:insertion \n3:deletion");
scanf("%d",&cas);
switch(cas){
    case 1:trever();
    cont=ask();
    break;
    case 2:
    inser();
    cont=ask();
    break;
    case 3:
    delete();
    cont=ask();
    break;
    default:
    printf("enter a valid option");
}
}
}
int ask(){
    int ch;
    printf("do you want to perform another operation:(1/0)");
    scanf("%d",&ch);
    return ch;
}
void trever(){
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
void inser(){
    int ind;
    printf("enter the index at which you want to enter the value");
    scanf("%d",&ind);
    for(int i=n-1;i>=ind;i--)
    {
        a[i+1]=a[i];
    }
    printf("enter the value u want to insert");
    scanf("%d",&a[ind]);
    n++;
}
void delete(){
    int ind;
    printf("enter the index of value which you want to delete");
    scanf("%d",&ind);
    for(int i=ind;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=NULL;
    n--;
}
#include<stdio.h>
#include<conio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);
void print(int[],int);
void swap(int*,int*);
void main()
{
int n,arr[20],i;
clrscr();
printf("Size of the array: \n");
scanf("%d",&n);
printf("Enter elements: \n");
for(i=0;i<n;i++){
scanf("%d ",&arr[i]);
}
quicksort(arr,0,n-1);
printf("Sorted array is:\n");
print(arr,n);
getch();
}
void quicksort(int arr[],int low,int high){
int pi;
if(low<high){
pi=partition(arr,low,high);
quicksort(arr,low,pi-1);
quicksort(arr,pi+1,high);
}
}
int partition(int arr[],int low,int high){
int i,j,pivot,temp;
pivot=arr[high];
i=low-1;
for(j=low;j<high;j++){
if(arr[j]<=pivot){
i++;
swap(&arr[i],&arr[j]);
}  }
swap(&arr[i+1],&arr[high]);
return i+1;
}
void print(int arr[],int n){
int i;
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
void swap(int* x,int* y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}


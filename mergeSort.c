#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void merge(int *a,int mid,int low,int high){
    int i=low,j=mid+1,k=low;
    int b[high+1];
    while(i<=mid&&j<=high){
        if(a[i]<a[j]){
        b[k]=a[i];
        i++;
        k++;
    }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high){
        b[k]=a[j];
        j++;
        k++;
    }
    for(i=low;i<high+1;i++){
        a[i]=b[i];
    }
}
void MergeSort(int *a,int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        merge(a,mid,low,high);
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int *a,n,i;
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    for(i=0;i<n;i++)
    printf("Before= %d\n",a[i]);
    MergeSort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("After=%d\n",a[i]);
    return 0;
}

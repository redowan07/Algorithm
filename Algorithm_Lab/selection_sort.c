#include<stdio.h>
void swap(int arr[],int n,int m){
    int temp=arr[n];
    arr[n]=arr[m];
    arr[m]=temp;
}
int main(){
    int n;
    printf("enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int k=0;k<n-1;k++) {
        int min=k;
        for(int j=k+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr,min,k);
    }
    printf("sorted array: ");
    for(int l=0;l<n;l++) printf("%d ",arr[l]);
    printf("\n");
    return 0;
}

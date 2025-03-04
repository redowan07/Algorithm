#include<stdio.h>
int main(){
    int n;
    printf("enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array given below: \n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

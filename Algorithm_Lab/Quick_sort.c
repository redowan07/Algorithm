//#include<stdio.h>
//int partition(int arr[],int lb,int ub){
//    int start=lb,pivot=arr[lb];
//    int end=ub;
//    while(start<end){
//        while(arr[start]<=pivot){
//            start++;
//        }
//        while(arr[end]>pivot){
//            end--;
//        }
//        if(start<end){
//            int temp;
//            temp=arr[start];
//            arr[start]=arr[end];
//            arr[end]=temp;
//        }
//    }
//            int tem;
//            tem=arr[end];
//            arr[end]=arr[lb];
//            arr[lb]=tem;
//        return end;
//    }
//
//void  quick_sort(int arr[],int lb,int ub){
//    int loc;
//      if(lb<ub){
//          loc=partition(arr,lb,ub);
//          quick_sort(arr,lb,loc-1);
//          quick_sort(arr,loc+1,ub);
//      }
//  }
//int main(){
//    int n,lb=0,ub;
//    printf("enter the size of the array: ");
//    scanf("%d",&n);
//    ub=n-1;
//    int arr[n];
//    printf("enter the array elements: ");
//    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
//    quick_sort(arr,lb,ub);
//    printf("sorted elements are given below :\n");
//    for(int i=0;i<n;i++) printf("%d ",arr[i]);
//           printf("\n");
//    return 0;
//}

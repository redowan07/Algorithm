//#include<stdio.h>
//void sort(int brr[],int n){
//    int temp;
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(brr[i]>brr[j]){
//                temp=brr[i];
//                brr[i]=brr[j];
//                brr[j]=temp;
//            }
//        }
//    }
//}
//void binary_search(int crr[],int m,int l,int r){
//    if(l>r){
//        printf("\n%d isn't in the list\n",m);
//        return;
//    }
//    int mid=(l+r)/2;
//    if(m==crr[mid]){
//        printf("\n%d found at position %d\n",m,mid);
//        return;
//    }
//    else if(m<crr[mid]){
//        return binary_search(crr,m,l,mid-1);
//    }else if(m>crr[mid]){
//        return binary_search(crr,m,mid+1,r);
//    }
//}
//int main(){
//    int n,m;
//    printf("enter the the array size: ");
//    scanf("%d",&n);
//    int arr[n];
//    printf("enter array elements: ");
//    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
//    printf("enter the number to be searched: ");
//    scanf("%d",&m);
//    sort(arr,n);
//    for(int i=0;i<n;i++) printf("%d ",arr[i]);
//    int l=0,r=n-1;
//    binary_search(arr,m,l,r);
//    return 0;
//}

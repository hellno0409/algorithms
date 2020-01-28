#include<stdio.h>
 
 int binary_search(int arr[],int lb,int ub,int key)
 {
     int index=-1;
     int mid=(lb+ub)/2;
     if(key==arr[mid])
     {
         return mid;
     }
     if(ub>lb)
     {
         if(key<arr[mid])
         index =binary_search(arr,lb,mid-1,key);
     
     else
     {
         index=binary_search(arr,mid+1,ub,key);
     }}
     else
     {
         return -1;
     }
return index;
 }

 void main()
 {
     int arr[]={1,2,3,4,5,5,6,7,8,9};
    int index= binary_search(arr,0,9,5);
    printf("%d",index);

 }
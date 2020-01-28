//to count the no of occurence of a num in log(n)time 

#include<stdio.h>
 
 int binary_searchl(int arr[],int lb,int ub,int key)
 {
     int index=-1;
     int mid=(lb+ub)/2;
     if(key==arr[mid])
     {
         if(arr[mid-1]==key)
          index=binary_searchl(arr,lb,mid-1,key);// to find the leftmost occurence of the key

          else 
          index=mid;
          
          return index;
      //   return mid;
     }
     if(ub>lb)
     {
         if(key<arr[mid])
         index =binary_searchl(arr,lb,mid-1,key);
     
     else
     {
         index=binary_searchl(arr,mid+1,ub,key);
     }}
     else
     {
         return -1;
     }
return index;
 }

 int binary_searchr(int arr[],int lb,int ub,int key)
 {
     int index=-1;
     int mid=(lb+ub)/2;
     if(key==arr[mid])
     {
         if(arr[mid+1]==key)
          index=binary_searchr(arr,mid+1,ub,key);// to find the rightmost occurence of the key

          else 
          index=mid;
          
          return index;
      //   return mid;
     }
     if(ub>lb)
     {
         if(key<arr[mid])
         index =binary_searchr(arr,lb,mid-1,key);
     
     else
     {
         index=binary_searchr(arr,mid+1,ub,key);
     }}
     else
     {
         return -1;
     }
return index;
 }

 void main()
 {
     int arr[]={1,2,3,4,5,5,6,7,7,7,8,9};
    int num= (binary_searchr(arr,0,11,7)-binary_searchl(arr,0,11,7))+1;
    printf("%d",num);

 }
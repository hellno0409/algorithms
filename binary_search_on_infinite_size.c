//probable interview question
// to search a element in an infinite size array in log(n) time

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

 int bs_infinite(int arr[],int key)//from index 1 we succesively multiply by 2 till we find the element at the index greater or equal to the required key .if we find the element to be just greater we perform binary search on the elements left of the index
 {
  if(arr[0]==key)
  return key;
  int i=1;
  while(arr[i]<=key)
  i=i*2;
  if(arr[i]==key)
  return i;
  else 
 i= binary_search(arr,0,i,key);
 return i;
 }

 void main()
 {
     int arr[]={1,2,3,4,5,5,6,7,8,9};
    int index= bs_infinite(arr,5);
    printf("%d",index);

 }
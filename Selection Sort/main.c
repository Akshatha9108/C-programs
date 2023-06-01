#include <stdio.h>
void selectionSort(int array[], int size){
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i; //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;

      //placing in correct position
      int temp;
      temp = array[i];
      array[i] = array[imin];
      array[imin] = temp;
   }
}
int main(){
   int n,arr[50];
   printf("Enter Size of array");
   scanf("%d",&n);
   printf("enter array elements:");
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);

   printf("Array before Sorting: ");
   for(int i = 0; i<n; i++)
      printf("%d ",arr[i]);
   printf("\n");
   selectionSort(arr, n);
   printf("Array after Sorting: ");
   for(int i = 0; i<n; i++)
      printf("%d ", arr[i]);
   printf("\n");
}

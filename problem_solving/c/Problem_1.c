#include <stdio.h>
void main()
{
    int i,n;  
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}

//'i' is temporary variable used for iterating for loop.
//consider an array size with 'n' and array named 'a';
  //note: if we consider array the allocation position number will start from 0; if the size of array is 5 then the allocation positions will from 0 to 4 i.e; 5 locations.
  //that means, first allocation position in array will be 0 and last allocation elemt will be 4 i.e; n-1;

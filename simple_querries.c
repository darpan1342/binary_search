int compare(const void * a,const void * b)
{
    return( *(int*) a- *(int*)b);
}
int* counts(int nums_count, int* nums, int maxes_count, int* maxes, int* result_count) {
    *result_count=maxes_count;
    int *a=(int *)malloc(sizeof(int)*maxes_count); 
    qsort(nums,nums_count,sizeof(int),compare);
   for(int i=0;i<maxes_count;i++)
   {
       int l=0;
       int r=nums_count;
       while(l<r)
       {
        int mid=(l+r)/2;
           if(nums[mid]<=maxes[i])
           {
               l=mid+1;
           }
           else
               r=mid;
       }
       a[i]=l;
   }
 
    return a;

}



int compare(const void *a,const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int* jobOffers(int scores_size, int* scores, int lowerLimits_size, int* lowerLimits, int upperLimits_size, int* upperLimits, int* result_size) { 
   
    *result_size=upperLimits_size;
    int *a=(int *)malloc(sizeof(int)*upperLimits_size);
    qsort(scores,scores_size,sizeof(int),compare);
for(int i=0;i<lowerLimits_size;i++)
{
    int l=0;
    int r=scores_size;
 while(l<r)
 {
     int mid=(l+r)/2;
     if(scores[mid]>=lowerLimits[i])
     {
         r=mid;
     }
     else
     {
         l=mid+1;
     }
}
    a[i]=l;
}
 for(int i=0;i<upperLimits_size;i++)
{
    int l=0;
    int r=scores_size;
 while(l<r)
 {
     int mid=(l+r)/2;
     if(scores[mid]>upperLimits[i])
     {
         r=mid;
     }
     else
     {
         l=mid+1;
     }
}
    a[i]=r-a[i];
} 
    
    return a;
}


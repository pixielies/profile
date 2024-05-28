int main()
{
    int ar[10],i,n,j,temp;
    printf("enter array limit=");
    scanf("%d",&n);
    if(n<=10)
    {
        for(i=0;i<n;i++)
        {
        printf("enter array element[%d]=",i);
        scanf("%d",&ar[i]);
        }
        printf("\n unsorted elements");
        for(i=0;i<n;i++)
        {
        printf("\n %d",ar[i]);
        }
        for(i=0;i<n-1;i++)
        {

        for(j=0;j<n-i-1;j++)
            {
        if(ar[j]>ar[j+1])
                {
                    temp=ar[j+1];
                    ar[j+1]=ar[j];
                    ar[j]=temp;
                }
            }
        }
        printf("\n sorted elements");
        for(i=0;i<n;i++)
    {
        printf("\n %d",ar[i]);
    }
 }
        else{
        printf("\n over limit");
  }
}

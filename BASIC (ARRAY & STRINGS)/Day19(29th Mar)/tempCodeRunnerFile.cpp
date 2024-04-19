void merge(int *arr,int s,int e)
{
    int q=s+e/2;
    int len1=q-s+1;
    int len2=e-q;
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    int k=0;
    for (int i = 0; i < len1; i++)
    {
        arr1[i]=arr[k];
        k++;
    }
     for (int i = 0; i < len2; i++)
    {
        arr2[i]=arr[k];
        k++;
    }

    int i=0;
    int j=0;
    k=s;
    while(i<len1&&j<len2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
        }
        else{
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<len1){
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<len2){
        arr[k]=arr2[j];
        j++;
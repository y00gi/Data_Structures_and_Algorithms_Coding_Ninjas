int pairsum(int *arr, int lo,int hi, int tar){
    int ans=0;
    while(lo<hi){
        if(arr[lo]+arr[hi]<tar){
            lo++;
        }else if(arr[lo]+arr[hi]>tar){
            hi--;
        }else{
            ans++;
            int k=lo+1;
            while(k<hi&&arr[k]==arr[lo]){
                k++;
                ans++;
            }hi--;
        }
    }return ans;
}
int tripletSum(int *arr, int n, int sum)
{
    sort(arr,arr+n);
    int count=0;
    for(int i=0;i<n-2;i++){
        count=count+pairsum(arr,i+1,n-1,sum-arr[i]);
    }
    return  count;
}

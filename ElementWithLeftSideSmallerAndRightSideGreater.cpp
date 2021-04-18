int findElement(int arr[], int n) {
   int min = arr[0];
   int max = arr[n-1];
   for(int i=1; i<n-1; i++){
        int flag = 0;
        int j=0;
        while(j<i){
            if(arr[i] >= arr[j]){
                j++;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            int k=n-1;
            while(k>i)
            {
                if(arr[i] <= arr[k]){
                    k--;
                }
                else
                {
                    break;
                }
            }
            if(k == i)
            {
                return arr[i];
            }
        }
    }
    return -1;
}

 int s=0;
    int e=n-1;
    while (s<=e){
        int mid=((s+e)/2);
        if(arr[mid]==key){
            return mid;
        }
        //go to left part
        else if(arr[mid]>key){
            e=mid-1;
        }
        //go to right part
        else{
            s=mid+1;
        }

    }
   return -1;

}
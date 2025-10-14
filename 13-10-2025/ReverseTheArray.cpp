void reverseArray(vector<int> &arr , int m) {
    int st=m+1,end=arr.size()-1;
    while (st<end){
        swap(arr[st],arr[end]);
        st++,end--;
    }
}
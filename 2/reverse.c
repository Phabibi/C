void swap(int arr[],unsigned int first,unsigned int last){

  int temp = arr [first];
  arr[first] = arr [last];
  arr[last] = temp;
}

void reverse( int arr[], unsigned int len ) {
  for(int i = 0 ; i < len/2 ; i++){   //need to do since you only want to switch once
    swap(arr, i , len-i-1);
  }
}

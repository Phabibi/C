int identical(int a[],  int b[] , unsigned int len){
  int result = 1;
  if (len == 0){
    return 1;
  }
  for(int i = 0 ; i < len; i++){
    if(a[i]==b[i]){
      result = 1;
    }
    else {
      return 0;
    }
  }
  if (result == 1 ){
    return 1;
  }
}

int scrambled( unsigned int a[], unsigned int b[], unsigned int len ) {
  int result = 0;
  if (len == 0){
    return 1;
  }
  int suma = 0;
  int sumb = 0;
  for(int i = 0 ;  i < len ; i++){
    suma+=a[i];
    sumb+=b[i];
  }

  for(int j = 0; j < len ; j++){
    int k = 0;
    while ( k < len){
      if (a[j] == b[k]){
        result+=1;
        k+=1;
        break;
      }
      k+=1;
    }
  }
  if(result == len && suma==sumb ){
    return 1;
  }
  else
  {
    return 0;
  }
}

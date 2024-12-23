#include <stdio.h>
int checkPrime(int a){
  int factors =0;
  for (int i=1;i<=a;i++){
    if (a%i==0){
      factors++;
    }
  }
  if(factors==2)
    return 1;
  else
    return 0;
}

int main(){
  int n;
  FILE*fileptr;
  fileptr=fopen("primes.txt","w");
  printf("Enter range of number for primes in it you want in file:\n");
  scanf("%d", &n);
  for (int i=1; i<=n;i++){
    if (checkPrime(i)==1){
      fprintf(fileptr, "%d", i);
      fprintf(fileptr,"\n");
    }
  }
  fclose(fileptr);
  return 0;
}
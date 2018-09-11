#include<stdio.h>

int check(int n){
  int flag = -1;
  scanf("%d",&n);
  int arr[7];
  
  for(int i = 0; i < 7; i++){
    scanf("%d", &arr[i]);
  }
  
  for(int i = 0; i < 7; i++){
    if(arr[i] == n){
      flag = i;
    }
  }
  if(flag > 0){
    printf("%d\n", flag);
  }
  else{
    printf("num not present");
  }
}

int main(){
  int n;
  scanf("%d",&n);
  check(n);
}

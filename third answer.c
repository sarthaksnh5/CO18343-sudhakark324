#include<stdio.h>

int main(){
  int arr[3];
  int sum = 0;
  int flag= 0;
  
  for(int i = 0;i < 3; i++){
    scanf("%d",&arr[i]);
  }
  
  for(int i = 0; i < 3; i++){
  sum = 0;
    for(int j = 0; j < 3; j++){
      if(i != j){
        sum = sum + arr[j];
      }
    }
    if(sum > i){
      flag = 1;
    }
  }
  printf("%d",flag);
}     

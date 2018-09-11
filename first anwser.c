#include<stdio.h>

int main(){
  int arr[3] = {};
  int flag = 1;
  
  for(int i = 0; i < 3; i++){
    scanf("%d",&arr[i]);
   }
   
   for(int i = 0; i < 3; i++){
    for(int j = i+1; j < 3; j++){
      if(arr[i] == arr[j]){
        flag = 0;
      }
     }
    }
    printf("%d\n",flag);
    return 0;
}

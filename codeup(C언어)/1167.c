#include<stdio.h>


int main(void){
  int f, s, t;
  scanf("%d %d %d",&f, &s, &t);
  if(f > s && f > t){
    if(s > t){
      printf("%d", s);
    }else{
      printf("%d", t);
    }
  }else if(s > f && s > t){
    if (f > t){
      printf("%d",f);
    }else{
      printf("%d",t);
    }
  }else if(t> f && t > s){
    if(f>s){
      printf("%d",f);
    }else{
      printf("%d",s);
    }
  }else{
    printf("%d",f);
  }
  

  
}
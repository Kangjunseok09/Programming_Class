#include<stdio.h>
#include<string.h>

#define MAX 102

char stack[MAX];
int top = -1;

void push(char ch){
  stack[++top] = ch;
}

int pop(char ch){
  if(top == -1) return 0;
  if((ch == ')' && stack[top] != '(') || (ch == ']' && stack[top] != '[')) return 0;
  top--;
  return 1;
}

int judge(char* ch){
  
  top = -1;
  for(int i = 0; i < strlen(ch); i++){
    if((ch[i] == '(') || (ch[i] == '[')){
      push(ch[i]);
    }else if((ch[i] == ')') || (ch[i] == ']')){
      if(!pop(ch[i])) return 0;
    }
  }
  return(top == -1);
}

int main(void){

  char s[MAX];

  while(1){
    fgets(s, sizeof(s), stdin);

    if(s[0] == '.' && (s[1] == '\n' || s[1] == '\0')) break;

    if(judge(s)){
      printf("yes\n");
    }else{
      printf("no\n");
    }
  }

  return 0;
}
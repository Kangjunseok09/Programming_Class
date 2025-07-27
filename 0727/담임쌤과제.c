#include<stdio.h>

int main(void){
  char message[1001];
  char encrypted[1001];
  char decrypted[1001];
  char key = 0xAA;  
  int i = 0, j = 0, k = 0, l = 0;

  printf("암호화할 문자열을 입력하세요: ");
  fgets(message, sizeof(message), stdin);

  while (message[i] != '\0') {
      if (message[i] == '\n') {
          message[i] = '\0';
          break;
      }
      i++;
  }

  while (message[j] != '\0') {
      encrypted[j] = message[j] ^ key;
      j++;
  }
  encrypted[j] = '\0';

  printf("\n암호화된 데이터 (16진수): ");
  while (encrypted[k] != '\0') {
      printf("%X ", (unsigned char)encrypted[k]);
      k++;
  }

  while (encrypted[l] != '\0') {
      decrypted[l] = encrypted[l] ^ key;
      l++;
  }
  decrypted[l] = '\0';

  printf("\n복호화된 문자열: %s\n", decrypted);

  return 0;
}
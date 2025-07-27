#include <stdio.h>

#define MAX 101

int graph[MAX][MAX];
int visited[MAX];    
int n;               

void dfs(int current, int target, int* found) {
  visited[current] = 1;
  if (current == target) {
    *found = 1;
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (graph[current][i] && !visited[i]) {
      dfs(i, target, found);
    }
  }
}

int main(void) {
  int choice;

  printf("노드 개수를 입력하세요 (최대 100): ");
  scanf("%d", &n);

  while (1) {
    printf("\n--- 메뉴 ---\n");
    printf("1. 연결 추가\n");
    printf("2. 연결 여부 확인\n");
    printf("3. 전체 네트워크 출력\n");
    printf("0. 종료\n");
    printf("선택: ");
    scanf("%d", &choice);

    if (choice == 1) {
      int u, v;
      printf("연결할 두 노드 입력 (예: 1 2): ");
      scanf("%d %d", &u, &v);
      if (u >= 1 && v >= 1 && u <= n && v <= n) {
        graph[u][v] = 1;
        graph[v][u] = 1;
        printf("연결 완료: %d - %d\n", u, v);
      } else {
        printf("유효하지 않은 노드 번호입니다.\n");
      }
    } else if (choice == 2) {
      int src, dst, found = 0;
      printf("출발 노드와 도착 노드 입력 (예: 1 5): ");
      scanf("%d %d", &src, &dst);

      for (int i = 1; i <= n; i++) visited[i] = 0;

      dfs(src, dst, &found);
      if (found) printf("노드 %d와 %d는 연결되어 있습니다.\n", src, dst);
      else printf("노드 %d와 %d는 연결되어 있지 않습니다.\n", src, dst);
    }
    else if (choice == 3) {
      printf("\n전체 네트워크 상태 :\n");
      for (int i = 1; i <= n; i++) {
        printf("노드 %2d: ", i);
        for (int j = 1; j <= n; j++) {
          if (graph[i][j]) {
            printf("- %2d ", j);
          }
        }
        printf("\n");
      }
    }
    else if (choice == 0) {
      printf("프로그램을 종료합니다.\n");
      break;
    }
    else {
      printf("잘못된 메뉴입니다.\n");
    }
  }

  return 0;
}
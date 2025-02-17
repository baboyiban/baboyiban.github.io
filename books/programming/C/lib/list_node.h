#define _CRT_SECURE_NO_WARNINGS

#include <stdbool.h>
#include <stdio.h>
// #include <stdlib.h>

#include "./list_node.h"

// 소수 판단 함수
bool isPrimeNumber(int n) {
  if (n < 2) {
    return false;
  }

  for (int i = n - 1; i > 1; i--) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

// 2 ~ n 사이의 소수를 배열로 반환하는 함수
ListNode *getPrimeNumbers(int n) {
  ListNode *list_node = init_list();
  for (int i = 0; i < n; i++) {
    if (isPrimeNumber(i)) {
      add_first_node(list_node, i);
    }
  }
  return list_node;
};

int main(void) {
  int n;
  scanf("%d", &n);

  ListNode *primeNumbers = getPrimeNumbers(n);

  print_all_node(primeNumbers);

  delete_all_node(primeNumbers);

  return 0;
}

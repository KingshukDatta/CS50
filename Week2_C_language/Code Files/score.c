#include <stdio.h>

int main(void)
{
  //   int score1 = 72;
  //   int score2 = 73;
  //   int score3 = 33;

  // ---- array-----//
  // int scores[3];

  // input in array (manually)
  // scores[0] = 72;
  // scores[1] = 73;
  // scores[2] = 33;

  // input in array (user)
  // scanf("%d", &scores[0]);
  // scanf("%d", &scores[1]);
  // scanf("%d", &scores[2]);

  // using for loop
  // for (int i = 0; i < 3; i++)
  // {
  //   scores[i] = scanf("%d", &scores[i]);
  // }
  const int N = 3;
  int scores[N];
  for (int i = 0; i < N; i++)
  {
    scores[i] = scanf("%d", &scores[i]);
  }

  printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
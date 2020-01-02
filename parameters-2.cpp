#include <iostream>
using std::cout;
using std::endl;

void swapThese(int*, int*);
int avg(int[], int*);

int main()
{
  int a = 10, b = 20;
  swapThese(&a, &b);

  int x[] = {...};
  int stdDev;
  int z = avg(a, &stdDev);
}

void swapThese(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
#include <iostream>
using std::cout;

#include <algorithm>
using std::sort;
using std::swap;

void nestedForLoop(int[], int);

int main()
{
  int a[] = {14, 2, 41, 2, -1, 66, 32, 63, 12};
  const int N = sizeof(a) / sizeof(a[0]);

  sort(a, a + N);
  nestedForLoop(a, N);
  //nestedForLoop(b, N);

}

void nestedForLoop(int x[], int n)
{
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (x[j] < x[i])
        swap(x[i], x[j]);
}
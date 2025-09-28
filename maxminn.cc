#include <iostream>

void maxmin(int prob1, int prob2, int prob3, int *max, int *min);





/* Find a max & min probabilities */
int main() {
  int x, y, z;
 
  std::cin >> x >> y >> z;
  if (std::cin.good() && std::cin.peek() == '\n') {
    int max, min;
    maxmin(x, y, z, &max, &min);
    std::cout <<  max << " " << min;
  } else {
    std::cout << "n/a";
  }
  return 0;
}

/* This function should be kept !!! */
/* But errors & bugs should be fixed */
void maxmin(int prob1, int prob2, int prob3, int *max, int *min) {
  *max = *min = prob1;

  if (prob2 > *max) *max = prob2;
  if (prob2 < *min) *min = prob2;
  if (prob3 > *max) *max = prob3;
  if (prob3 < *min) *min = prob3;

}
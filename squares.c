#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Usage: squares {num_squares}\n");
    exit(1);
  }
  int largest_square = atoi(argv[1]);

  // Your "loop" goes here
}

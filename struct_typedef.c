#include <stdio.h>

// The name after "struct" is called struct tag and is optional.
// The variables enlisted between braces in a structed type are called members
// of the struct.
// "p1" is a variable of type "struct Point1"

// (1)
struct Point1 {
  int x1;
  int y1;
};
struct Point1 p1;

// (2)
struct Point2 {
  int x2;
  int y2;
} p2;

// (3)
struct {
  int x3;
  int y3;
} p3;

// (4) - Not recommended: redundant/confusing, and ill-formed in C++
// (redefinition) => prefer (4.1) or (5)
struct Point4 {
  int x4;
  int y4;
};
typedef struct Point4 Point4;
Point4 p4;

// (4.1)
typedef struct Point41 {
  int x41;
  int y41;
} Point41;
Point41 p41;

// (5)
typedef struct {
  int x5;
  int y5;
} Point5;
Point5 p5;

int main(void) {
  printf("hello\n");
  return 0;
}
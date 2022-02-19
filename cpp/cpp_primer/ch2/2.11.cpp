
int main() {
  extern int ix = 1024;  // Definition
  int iy;  // Definition
  extern int iz;  // Declaration
  //extern int ix2 = 1024;  // Error
  int iy2;  // Definition
  extern int iz2;  // Declaration

  return 0;
}
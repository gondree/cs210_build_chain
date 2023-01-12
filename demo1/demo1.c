// macro text
#define MESSAGE "Demo Program"
// macro to get sum
#define SUM(A,B) ((A)+(B))

// global variable
int g = 0xEE;
// function to get diff
int diff(int a, int b) { return a-b; }

// main function
int main() {
  int x = 0xAB, y = x, z = 0xCD;
  char *s = MESSAGE;
  y =  SUM(x,z);
  y = diff(x,z);
}


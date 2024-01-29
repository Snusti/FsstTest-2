#include <stdio.h>
#include <stdbool.h>


void bubblesort(int feld[], int laenge) {
  bool changed;
  do {
    changed = false;
    for (int i = 0; i < laenge; i++) {
      if (feld[i] < feld[i + 1]) {
        int temp = feld[i + 1];
        feld[i + 1] = feld[i];
        feld[i] = temp;
        changed = true;
      }
    }
  } while (changed);
}

void getstringinfo(const char s[],int  size, int length) {
  for (int i = 0; i < size; i++) {
    if (s[i] != '\0') {
      length++;
      switch (s[i]) {
        case' ':length--;
      }
    }
  }
}

int main() {
  double feld[4] = { 3.2,9.1,1.4,6.7 };
  bubblesort(feld, 4);

  int leghth;
  char s[1024];
  gets(s);
  getstringinfo(s, 30, leghth);
  printf("Anzahl Zeichen:\n\n");
  int leghth;
  printf("%d", leghth);
}
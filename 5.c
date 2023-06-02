#include <stdio.h>
#include <string.h>

struct* PC fastestPC(struct University data[], int n) {
    
  int max_speed = 0;
  for (int i=0; i<n; i++) {
    if (data[max_speed].speed < data[0].speed) max_speed = i;
  }
  return &data[max_speed]
}

struct PC {
    char* name;
    int speed;
		int RAM;
};
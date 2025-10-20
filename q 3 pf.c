#include<stdio.h>0

#define JOINTS 2
#define MOVEMENTS 3
#define COORDS 3

int main() {
	 int data[JOINTS][MOVEMENTS][COORDS];

	int j;
	int c;
	int m;
    for ( j = 0; j < JOINTS; j++) {
        for (m = 0; m < MOVEMENTS; m++) {
            for ( c = 0; c < COORDS; c++) {
                data [j][m][c] = j + m + c;  // Just an example value
            }
        }
    }

    for ( j = 0; j < JOINTS; j++) {
        for (m = 0; m < MOVEMENTS; m++) {
            printf("Joint %d, Movement %d: ", j, m);
            for ( c = 0; c < COORDS; c++) {
                printf("%d ", data[j][m][c]);
            }
            printf("\n");
        }
    }

    return 0;
}



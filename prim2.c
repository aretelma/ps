#include <stdio.h>

#define MAX_SIZE 10001
#define INF 1<<20 

 int pQue[MAX_SIZE];
 int V[MAX_SIZE];
 

 void init(int q[]) {
    q[0] = 0; 
    for (int i = 1; i < MAX_SIZE; ++i) q[i] = INF;
}

void insert(int q[], int data) {
    int target_pos = 1 + q[0]++;
    q[target_pos] = data;
}

int pop(int q[]) {
    if (q[0] == 0) return -INF;
    int max_val = -INF, max_val_idx;
    for (int i = 1; i < q[0]; ++i) {
        if (q[i] > max_val) {
            max_val = q[i];
            max_val_idx = i;
        }
    }
    q[0]--;
    for (int i = max_val_idx; i < MAX_SIZE; ++i) {
        int tmp = q[i];
        q[i] = q[i + 1];
        q[i + 1] = tmp;
    }
    return max_val;
}
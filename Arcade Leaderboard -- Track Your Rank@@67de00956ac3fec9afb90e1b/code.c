// Your code here...
void trackPlayerRanks(int ranked[] , int n, int player[], int m, int result[]) {
    int ranks[200000], rank = 1;

    ranks[0] = rank;
    for(int i = 0; i<n; i++) {
        if(ranked[i] = ranked[i-1]) {
            ranks[i] = rank;
        }
        else {
            ranks[i] = ++rank;
        }
    }
} 
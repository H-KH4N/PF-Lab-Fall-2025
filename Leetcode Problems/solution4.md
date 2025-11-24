70. Climbing Stairs
int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    int twoStepsBefore = 1;
    int oneStepBefore = 2;
    int currentWays = 0;
    for (int i = 3; i <= n; i++) {
        currentWays = oneStepBefore + twoStepsBefore;
        twoStepsBefore = oneStepBefore;
        oneStepBefore = currentWays;
    }
    return oneStepBefore;
}

1137. N-th Tribonacci Number
int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    int a = 0;
    int b = 1; 
    int c = 1; 
    int current = 0;
    for (int i = 3; i <= n; i++) {
        current = a + b + c;
        a = b;
        b = c;
        c = current;
    }
    return c;
}

HackerRank Structs in C
struct Student {
    int age;
    char first_name[51]; // Limit + 1 for null terminator
    char last_name[51];
    int standard;
};

int main() {
    struct Student st;
    
    // 2. Read Input
    // %s reads a string until it hits whitespace (space/newline)
    scanf("%d %s %s %d", &st.age, st.first_name, st.last_name, &st.standard);
    
    // 3. Print Output
    printf("%d %s %s %d", st.age, st.first_name, st.last_name, st.standard);
    
    return 0;
}

HackerRank boxes through a tunnel
struct box
{
	int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
	return b.length * b.width * b.height;
}

int is_lower_than_max_height(box b) {
	if (b.height < MAX_HEIGHT) {
        return 1; // True
    } else {
        return 0; // False
    }
}

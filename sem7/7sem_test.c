int sum(int a, int b) { return a + b; }

int test(int a, int b, int want) { return (sum(a, b) == want) ? sum(a, b) : 0; }
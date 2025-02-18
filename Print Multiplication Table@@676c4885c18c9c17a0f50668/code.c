
int main() {
    int n, i;

    // Input the number n for which we need the multiplication table
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to print the multiplication table from 1 to 10
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
#include <stdio.h>

int generateParentheses(int n, int loc, int opbr, int clsbr){
	static char str[22];
    //Base case, i.e. when the recursion stops:
	if (opbr==n && clsbr==n) {
		printf("%s\n", str);
		return 0;
	}
	else {
		if (opbr > clsbr) {
			str[loc] = ')';
			generateParentheses(n, loc + 1, opbr, clsbr + 1);
		}

		if (opbr < n) {
			str[loc] = '(';
			generateParentheses(n, loc + 1, opbr + 1, clsbr);
		}
	}
}
int check(int n)
{
	if (n >=1 && n<=11){
        generateParentheses(n, 0, 0, 0);
    }
	return 0;
}
int main()
{
	int n;
    printf("Enter no. of opening/closing parentheses: ");
    scanf("%d",&n);
	check(n);
}

//c programming
#include <stdio.h>

void sum_of_two() {
    int x, y, z;
    printf("enter two number: ");
    scanf("%d%d", &x,&y);
    z = x + y;
    printf("%d", z);
}

void simple_interest() {
    int p, r, t, si;
    printf("enter principal, rate, time: ");
    scanf("%d%d%d", &p,&r,&t);
    si = (p * t * r) / 100;
    printf("simple interest is: %d\n", si);
}

void positive_or_negative() {
    printf("enter a number: ");
    int number;
    scanf("%d", &number);
    if (number == 0) {
        printf("0 is neither negative nor positive\n");
    } else if (number > 0) {
        printf("%d is positive\n", number);
    } else {
        printf("%d is negative\n", number);
    }
}

void odd_or_even() {
    printf("enter a number: ");
    int number;
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
}

void largest_among_3() {
    int x, y, z;
start:
    printf("enter any three number: ");
    scanf("%d%d%d", &x,&y,&z);
    if (x == y || x == z || y == z) {
        printf("\ninvalid input: all three numbers must be different. try again!\n");
        goto start;
    }
    if(x>y && x>z){
    	printf("%d is the largest",x);
	}
	else if (y>x && y>z){
		printf("%d is the largest",y);
	}
	else{
		printf("%d is the largest",z);
	}
}

void sum_of_n_numbers() {
    printf("how many numbers do you have?");
    int N;
    scanf("%d", &N);

    int ans = 0;
    for (int i = 1; i <= N; i = i + 1) {
        int v;
        printf("enter number: ");
        scanf("%d", &v);
        ans +=  v;
    }
    printf("the sum of the given numbers is: %d\n", ans);
}

void sum_of_1_to_n() {
    printf("enter n: ");
    int n;
    scanf("%d", &n);
    int i = 1;
    int ans = 0;
    while (i <= n) {
        ans = ans + i;
        i = i + 1;
    }
    printf("the sum from 1 to %d is %d\n", n, ans);
}

void factorial() {
    printf("enter n: ");
    int n;
    scanf("%d", &n);
    int ans = 1;
    while (n != 0) {
        ans = ans * n;
        n = n - 1;
    }
    printf("ans = %d", ans); 
}

void electricity_bill_amount(){
    printf("Enter the total units consumed: ");
    int units, ba;
    scanf("%d", &units);
    if (units <= 20)
        ba = 80;
    else if (units <= 120)
        ba = 80 + (units - 20) * 8;
    else
        ba = 80 + 100 * 8 + (units - 120) * 10;
	printf("your electric bill amount is %d",ba);
}

void HCFS_LCMS(){
	int a,b,temp,x,y,hcf,lcm;
	printf("enter any two number:");
	scanf("%d%d", &x,&y);
	a = x;
	b = y;
	while (b!=0){
		temp = b;
		b = a % b;
		a = temp;
	}
	hcf = a;
	lcm = (x*y)/hcf;
	printf("%d is highest common factor\n",hcf);
	printf("%d is lowest common factor\n",lcm);
}

void Fibonacci_series(){
	int a=0,b=1,c,i,n;
	printf("enter a number:\n");
	scanf("%d",&n);
	printf("The Fibonacci series is:\n");
	printf("%d%d",a,b);
	for(i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}

void check_number(){
	 int num, n1, n2;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    if (num > n1 && num < n2 && num % 7 == 0) {
        printf("%d is greater than %d, less than %d, and divisible by 7.\n", num, n1, n2);
    } else {
        printf("%d doesn't satisfy the conditions.\n", num);
    }
}

void reverse_number(){
	 int num, rn = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num!=0) {
        rem=num % 10;
        rn= rn*10+rem;
        num/= 10;
    }
    printf("Reversed number: %d\n", rn);
}

void count_digits(){
	 int num,count=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num!=0){
        num/=10;
        count++;
    }
    printf("Number of digits: %d\n", count);
}

void prime_number(){
	int num, i;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for(i=2;i<=num;i=i+1)
    while(num%i==0){
    	num=num/i;
    	printf("%d is prime factor\n",num);
	}
}

void display_menu() {
    printf("\n\n0. exit\n");
    printf("1. calculate the sum of two given numbers:\n");
    printf("2. calculate the simple interest using SI=(P*T*R)/100:\n");
    printf("3. check if a number is +ve or -ve:\n");
    printf("4. check if a number is odd or even:\n");
    printf("5. find largest among given three different numbers:\n");
    printf("6. read n numbers and find their sum:\n");
    printf("7. find the sum of series 1+2+3+4+5+...+N:\n");
    printf("8. calculate factorial of a given number N:\n");
    printf("9. Your electricity bill amount:\n");
    printf("10. Calculate HCF and LCM of two number:\n");
    printf("11. To find the Fibonacci series:\n");
    printf("12. To check given number is greter than n1,less than n2 and divisible by 7:\n");
    printf("13. To reverse the digits in a number:\n");
    printf("14. To count the number of digits in a number:\n");
    printf("15. To find the prime factor of a given number:\n");
}

int main() {
    // calculate sum of two given numbers
    int choice;
    do {
        display_menu();
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0: break;
            case 1: sum_of_two(); break;
            case 2: simple_interest(); break;
            case 3: positive_or_negative(); break;
            case 4: odd_or_even(); break;
            case 5: largest_among_3(); break;
            case 6: sum_of_n_numbers(); break;
            case 7: sum_of_1_to_n(); break;
            case 8: factorial(); break;
            case 9: electricity_bill_amount(); break;
            case 10: HCFS_LCMS(); break;
            case 11: Fibonacci_series(); break;
			case 12: check_number(); break; 
			case 13: reverse_number(); break;
			case 14: count_digits(); break;
			case 15: prime_number(); break;
            default: printf("invalid choice: try again!");
        }
    } while (choice != 0);
}
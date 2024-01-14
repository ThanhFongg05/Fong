#include <stdio.h>
int isPrime(int num);
void printTriangle(int height);
void printSquare(int width);
void printArray(int arr[], int n);
void printPrimeInArray(int arr[], int n);

int main() {
    int option;
    do {
    	printf (" Menu\n");
	 	printf ("1.Check Prime Number\n");
	 	printf ("2.Check Time\n");
	 	printf ("3.Print Triangle\n");
	 	printf ("4.Print Square\n");
		printf ("5.Input and Output an Array\n");
		printf ("6.Print Prime number in an Array\n");
		printf ("7.Quit\n");
		printf ("Please choose your option (1-7): ");
		scanf (" %d", &option);
	switch(option) {
            case 1:
                {
                    int num;
                    printf("Input number to check: ");
                    scanf("%d", &num);
                    
                    if (isPrime(num)) {
                        printf("Valid!\n");
                    } else {
                        printf("Invalid!\n");
                    }
                }
                break;
            case 2:
                {
                    int hours, minutes;
                    printf("Input time (hh mm) to check: ");
                    scanf("%d %d", &hours, &minutes);
                    
                    if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60) {
                        printf("Valid!\n");
                    } else {
                        printf("Invalid!\n");
                    }
                }
                break;
            case 3:
                {
                    int height;
                    printf("Triangle: Input n: ");
                    scanf("%d", &height);
                    printTriangle(height);
                }
                break;
            case 4:
                {
                    int width;
                    printf("Square: Input n: ");
                    scanf("%d", &width);
                    printSquare(width);
                }
                break;
            case 5:
                {
                    int n;
                    printf("Input number of elements: ");
                    scanf("%d", &n);
                    
                    int arr[n];
                    for (int i = 0; i < n; i++) {
                        printf("Input A[%d] = ", i);
                        scanf("%d", &arr[i]);
                        printf("A[%d] is %d\n", i, arr[i]);
                    }
                }
                break;
            case 6:
                {
                    int n;
                    printf("Input number of elements: ");
                    scanf("%d", &n);
                    
                    int arr[n];
                    for (int i = 0; i < n; i++) {
                        printf("Input array: ");
                        scanf("%d", &arr[i]);
                    }
                    printPrimeInArray(arr, n);
                }
                break;
            case 7:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid option. Please choose a valid option.\n");
        }
    } while (option != 7);

 
}
int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1; 
}
void printTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
void printSquare(int width) {
    for (int i = 1; i <= width; i++) {
        for (int j = 1; j <= width; j++) {
            printf("*\t");
        }
        printf("\n");
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("A[%d] is %d\n", i, arr[i]);
    }
  
}
void printPrimeInArray(int arr[], int n) {
    printf("Number prime in your array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
}

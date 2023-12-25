/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Define a struct for a term in a polynomial
struct Term {
    float coefficient;
    int exponent;
};

// Define a struct for a polynomial
struct Polynomial {
    struct Term terms[100]; // Assuming a maximum of 100 terms in the polynomial
    int degree;             // Degree of the polynomial
};

// Function to accept input for a polynomial
void acceptPolynomial(struct Polynomial *poly) {
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &poly->degree);

    printf("Enter the coefficients and exponents for each term:\n");
    for (int i = 0; i <= poly->degree; i++) {
        printf("Coefficient for x^%d: ", i);
        scanf("%f", &poly->terms[i].coefficient);
        poly->terms[i].exponent = i;
    }
}

// Function to display a polynomial
void displayPolynomial(const struct Polynomial *poly) {
    printf("Polynomial: ");
    for (int i = poly->degree; i >= 0; i--) {
        printf("%.2fx^%d", poly->terms[i].coefficient, poly->terms[i].exponent);
        if (i > 0) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    struct Polynomial myPolynomial;

    // Accept input for the polynomial
    acceptPolynomial(&myPolynomial);

    // Display the polynomial
    displayPolynomial(&myPolynomial);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff, expo;
    struct node* link;
};

struct node* createNode(int coeff, int expo) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->coeff = coeff;
    newNode->expo = expo;
    newNode->link = NULL;
    return newNode;
}

void insertNode(struct node** head, int coeff, int expo) {
    struct node** temp = head;
    while (*temp) temp = &((*temp)->link);
    *temp = createNode(coeff, expo);
}
void printList(struct node* poly) {
    while (poly) {
        printf("%d*x^%d", poly->coeff, poly->expo);
        if (poly->link) printf(" + ");
        poly = poly->link;
    }
    printf("\n");
}

struct node* addPolynomials(struct node* p1, struct node* p2) {
    struct node* result = NULL;
    while (p1 || p2) {
        if (!p2 || (p1 && p1->expo > p2->expo)) {
            insertNode(&result, p1->coeff, p1->expo); p1 = p1->link;
        } else if (!p1 || (p2 && p1->expo < p2->expo)) {
            insertNode(&result, p2->coeff, p2->expo); p2 = p2->link;
        } else {
            if (p1->coeff + p2->coeff) insertNode(&result, p1->coeff + p2->coeff, p1->expo);
            p1 = p1->link; p2 = p2->link;
        }
    }
    return result;
}
int main() {
    struct node *poly1 = NULL, *poly2 = NULL;
    int n, coeff, expo;

    printf("Enter number of terms for polynomial 1: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &expo);
        insertNode(&poly1, coeff, expo);
    }

    printf("Enter number of terms for polynomial 2: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &expo);
        insertNode(&poly2, coeff, expo);
    }

    printf("Polynomial 1: "); printList(poly1);
    printf("Polynomial 2: "); printList(poly2);

    struct node* result = addPolynomials(poly1, poly2);
    printf("Resultant Polynomial: "); printList(result);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct poly {
    int coeff;
    int exp;
    struct poly *link;
} *temp;
struct poly *createpoly(int n);
struct poly *displaypoly(struct poly *);
void addpoly(struct poly *head1, struct poly *head2);
int main()
 {
    int p, q;
    struct poly *head1 = NULL, *head2 = NULL;
    printf("Enter the number of terms of polynomial 1\n");
    scanf("%d", &p);
    printf("Enter the terms of polynomial 1...\n");
    head1 = createpoly(p);
    displaypoly(head1);

    printf("\nEnter the number of terms of polynomial 2\n");
    scanf("%d", &q);
    printf("Enter the terms of polynomial 2...\n");
    head2 = createpoly(q);
    displaypoly(head2);

    printf("\nResultant polynomial after addition:\n");
    addpoly(head1, head2);

    return 0;
}

struct poly *createpoly(int n) {
    int c, e, i;
    struct poly *head = NULL, *ptr;

    for (i = 0; i < n; i++) {
        printf("Enter the coefficient and exponent\n");
        scanf("%d%d", &c, &e);
        temp = (struct poly*)malloc(sizeof(struct poly));
        temp->coeff = c;
        temp->exp = e;
        temp->link = NULL;

        if (head == NULL) {
            head = temp;
            ptr = head;
        } else {
            ptr->link = temp;
            ptr = temp;
        }
    }
    return head;
}

struct poly *displaypoly(struct poly *h1) {
    struct poly *p = h1;
    while (p != NULL) {
        if (p->link != NULL)
            printf("(%d X ^%d) + ", p->coeff, p->exp);
        else
            printf("(%d X ^%d)", p->coeff, p->exp);
        p = p->link;
    }
    printf("\n");
    return h1;
}

void addpoly(struct poly *head1, struct poly *head2) {
    struct poly *p = head1;
    struct poly *q = head2;
    struct poly *r = NULL, *head3 = NULL, *ptr = NULL;

    while (p != NULL && q != NULL) {
        struct poly *temp = (struct poly*)malloc(sizeof(struct poly));

        if (p->exp == q->exp) {
            temp->coeff = p->coeff + q->coeff;
            temp->exp = p->exp;
            p = p->link;
            q = q->link;
        } else if (p->exp > q->exp) {
            temp->coeff = p->coeff;
            temp->exp = p->exp;
            p = p->link;
        } else {
            temp->coeff = q->coeff;
            temp->exp = q->exp;
            q = q->link;
        }

        temp->link = NULL;

        if (head3 == NULL) {
            head3 = temp;
            ptr = head3;
        } else {
            ptr->link = temp;
            ptr = ptr->link;
        }
    }

    while (p != NULL) {
        struct poly *temp = (struct poly*)malloc(sizeof(struct poly));
        temp->coeff = p->coeff;
        temp->exp = p->exp;
        temp->link = NULL;
        ptr->link = temp;
        ptr = ptr->link;
        p = p->link;
    }

    while (q != NULL) {
        struct poly *temp = (struct poly*)malloc(sizeof(struct poly));
        temp->coeff = q->coeff;
        temp->exp = q->exp;
        temp->link = NULL;
        ptr->link = temp;
        ptr = ptr->link;
        q = q->link;
    }

    displaypoly(head3);
}

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct node {
    struct node* prev;
    int value;
    int size;
    struct node* next;
} node;

node* create() {
    node* t = malloc(sizeof(node));
    printf("Enter the value: ");
    scanf("%d", &(t->value));
    printf("Enter the size: ");
    scanf("%d", &(t->size));
    t->next = NULL;
    t->prev = NULL;
    return t;
}

node* insert(node* t, node* H) {
    // Insert at the end
    if (H == NULL) {
        H = t;
    } else {
        node* p = H;
        while (p->next) {
            p = p->next;
        }
        p->next = t;
        t->prev = p;
    }
    return H;
}

node* insertGarbage(int p, node* H) {
    // Insert a garbage node
    node* t = malloc(sizeof(node));
    t->next = NULL;
    t->prev = NULL;
    t->size = p;
    t->value = INT_MIN;
    if (H == NULL) {
        H = t;
    } else {
        node* p = H;
        while (p->next) {
            p = p->next;
        }
        p->next = t;
        t->prev = p;
    }
    return H;
}

void display(node* H) {
    printf("\nThe current list is: ");
    node* p = H;
    if (p) {
        while (p) {
            if (p->value != INT_MIN) {
                printf("%d -> ", p->value);
            } else {
                printf("# -> ");
            }
            p = p->next;
        }
    }
    printf("\nThe corresponding sizes are: ");
    p = H;
    if (p) {
        while (p) {
            printf("%d -> ", p->size);
            p = p->next;
        }
    }
    printf("\n");
}

void displayGarbage(node* HG) {
    printf("\nThe garbage values are: ");
    node* p = HG;
    if (p) {
        while (p) {
            printf("%d -> ", p->size);
            p = p->next;
        }
    }
    printf("\n");
}

node* delete(node* H, node* HG) {
    int pos;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    if (H == NULL || pos < 1) {
        printf("Invalid position.\n");
        return HG;
    }

    node* p = H;
    for (int i = 1; i < pos && p; i++) {
        p = p->next;
    }
    
    if (p && p->value != INT_MIN) {
        p->value = INT_MIN;
        HG = insertGarbage(p->size, HG);
    } else {
        printf("Invalid position or already garbage.\n");
    }
    
    display(H);
    return HG;
}

void garbageCollection(node* H, node* HG) {
    node* p = H;
    int garbage = 0;
    if (p) {
        while (p) {
            if (p->value == INT_MIN) {
                garbage += p->size;
            }
            p = p->next;
        }
    }
    printf("The amount of garbage collected is: %d\n", garbage);
    displayGarbage(HG);
}

int main() {
    node* HL = NULL;
    node* HG = NULL;
    int n;

    while (1) {
        printf("\n============================");
        printf("\n1. Display\n2. Insert\n3. Delete\n4. Collect Garbage\n5. Exit");
        printf("\n============================");
        printf("\nEnter Choice: ");
        scanf("%d", &n);

        node* t;
        switch (n) {
            case 1:
                display(HL);
                break;
            case 2:
                t = create();
                HL = insert(t, HL);
                display(HL);
                break;
            case 3:
                HG = delete(HL, HG);
                break;
            case 4:
                garbageCollection(HL, HG);
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong option selected\n");
        }
    }
}

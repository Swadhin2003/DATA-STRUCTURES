#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int data;
    struct node *lptr;
    struct node *rptr;
};
int height(struct node*);
void create(struct node **root, int num)
{
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n -> data = num;
    n -> lptr = NULL;
    n -> rptr = NULL;
    struct node *temp = (*root), *par = NULL;
    if(*root == NULL)
        *root = n;
    else
    {
        while(temp != NULL)
        {
            par = temp;
            if(num < temp -> data)
                temp = temp -> lptr;
            else
                temp = temp -> rptr;
        }
        if(num < par -> data)
            par -> lptr = n;
        else
            par -> rptr = n;
    }
}
void in(struct node **root)
{
    if((*root) == NULL)
        return;
    struct node *temp = (*root);
    in(&temp -> lptr);
    printf("%d\t", temp -> data);
    in(&temp -> rptr);
}
void pre(struct node **root)
{
    if((*root) == NULL)
        return;
    struct node *temp = (*root);
    printf("%d\t", temp -> data);
    pre(&temp -> lptr);
    pre(&temp -> rptr);
}
void post(struct node **root)
{
    if(*root == NULL)
        return;
    struct node *temp = (*root);
    pre(&temp -> lptr);
    pre(&temp -> rptr);
    printf("%d\t", temp -> data);
}
void level(struct node *root, int h)
{
    struct node *temp = (root);
    if(root == NULL)
        return;

    if(h == 1)
        printf("%d\t", temp -> data);
    else if(h > 1)
    {
        level(temp -> lptr, h - 1);
        level(temp -> rptr, h - 1);
    }
}
void order(struct node *root)
{
    struct node *temp = (root);
    int h = height(root);
    for(int i=1;i<=h;i++)
        level(temp, i);
}
int height(struct node *root)
{
    struct node *temp = root;
    if(temp == NULL)
        return 0;
    else
    {
        int lheight = height(temp -> lptr);
        int rheight = height(temp -> rptr);
        if(lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}
int flag = 0;
struct node* search(struct node *root, int num)
{
    if(root == NULL)
    {
        return root;
    }
    if(root -> data == num)
    {
        return root;
    }
    else
    {
        if(num < root -> data)
            return search(root -> lptr, num);
        else
            return search(root -> rptr, num);
    }
}
struct node* minVal(struct node *root)
{
    struct node *curr = root;
    while(curr && curr -> lptr != NULL)
        curr = curr -> lptr;
    return curr;
}
struct node* del(struct node *root, int num)
{
    if(root == NULL)
        return root;
    if(num < root -> data)
        root -> lptr = del(root -> lptr, num);
    else if(num > root -> data)
        root -> rptr = del(root -> rptr, num);
    else
    {
        if(root -> lptr == NULL && root -> rptr == NULL)
            return NULL;
        else if(root -> lptr == NULL)
        {
            struct node *temp = root -> rptr;
            free(root);
            return temp;
        }
        else if(root -> rptr == NULL)
        {
            struct node *temp = root -> lptr;
            free(root);
            return temp;
        }
        struct node *temp = minVal(root -> rptr);
        root -> data = temp -> data;
        root -> rptr = del(root -> rptr, temp -> data);
    }
    return root;
}
void main()
{
    struct node *root = NULL;
    int n = 1, ch;
    while(n == 1)
    {
        printf("\nChoose\n");
        printf("1- Add numbers\n");
        printf("2- Preorder traverse\n");
        printf("3- Inorder traverse\n");
        printf("4- Postorder traverse\n");
        printf("5- Levelorder traverse\n");
        printf("6- Search\n");
        printf("7- Delete\n");
        printf("8- Exit\n");
        printf("Input:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                int num;
                printf("Enter number:");
                scanf("%d", &num);
                create(&root, num);
                break;
            }
            case 2: pre(&root); break;
            case 3: in(&root); break;
            case 4: post(&root); break;
            case 5: order(root); break;
            case 6:
            {
                int num;
                printf("Enter number:");
                scanf("%d", &num);
                struct node *temp = search(root, num);
                if(temp -> data == num) printf("\nFound\n");
                else if(temp == NULL) printf("\nNot found\n");
                break;
            }
            case 7:
            {
                int num;
                printf("Enter number:");
                scanf("%d", &num);
                struct node *temp = del(root, num);
                in(&root);
                break;
            }
            case 8: exit(0);
        }
    }
}
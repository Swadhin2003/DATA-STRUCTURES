#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct Stack 
{
    int top;
    int s[MAX_SIZE];
};
void create( struct Stack** );
void push( struct Stack*, int );
void pop( struct Stack*, int* );
void display( struct Stack* );
void insertSorted( struct Stack*, int );
void sort( struct Stack* );
int main()
{
    struct Stack *st;
    create( &st );
    while(1)
    {
        int ch;
        int in;
        printf("1.Push\n2.Pop\n3.Display\n4.Sort\n5.Add element to sorted\n");
        printf("6.Maximum element\n7.Exit\nEnter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                printf("Input:");
                scanf("%d", &in);
                push( st, in );
                break;
            case 2:
                pop( st, &in );
                printf("Popped:%d\n", in);
                break;
            case 3:
                display( st );
                printf("\n");
                break;
            case 4:
                sort( st );
                break;
            case 5:
                printf("Input:");
                scanf("%d", &in);
                insertSorted( st, in );
                break;
            case 6:
                sort( st );
                pop( st, &in );
                printf("Highest element:%d\n", in );
                push( st, in );
                break;
            case 7: exit(0);
        }
    }
    return 0;
}
void create( struct Stack **st )
{
    struct Stack *temp = (struct Stack*)malloc( sizeof( struct Stack ) );
    temp->top = -1;
    *st = temp;
}
void push( struct Stack *st, int data )
{
    if( st->top == MAX_SIZE-1 )
    return;
    st->top++;
    st->s[st->top] = data;
}
void pop( struct Stack *st, int *b )
{
    if( st->top == -1 )
    return;
    *b = st->s[(st->top)--];
}
void display( struct Stack *st )
{
    if( st->top == -1 )
    return;
    int b;
    pop( st, &b );
    display( st );
    push( st, b );
    printf("%d ", b);
}
void insertSorted( struct Stack *st, int a )
{
    if( st->top == -1 )
    return push( st, a );
    int b;
    pop( st, &b );
    if( b >= a )
    {
        push( st, a );
        push( st, b );
    }
    else
    {
        insertSorted( st, a );
        push( st, b );
    }
}
void sort( struct Stack *st )
{
    if( st->top == -1 )
    return;
    int b;
    pop( st, &b );
    sort( st );
    insertSorted( st, b );
}
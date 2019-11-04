#include<stdio.h>

struct stack
{
    int top;
    int capacity;
    int *arr;
};

struct stack *create_array(int cap)
{

    struct stack*s;
    s = (struct stack*)malloc(sizeof(struct stack));
    s->top = -1;
    s->capacity = cap;

    s->arr = (int *)malloc(sizeof(int)*s->capacity);


    return(s);


}

void push( struct stack*s)
{




    if(s->top==s->capacity-1)
    {
        printf("Stack is Overflow\n");
        return;
    }
    else
    {

         int data;
         printf("Enter a data : ");
         scanf("%d" , &data);
          s->top = s->top+1;
         s->arr[s->top] = data;


    }

}

void pop( struct stack*s)
{


    if(s->top==-1)
    {
        printf("Stack is Underflow\n");
        return;
    }
    else
    {
        int item;
        item = s->arr[s->top];
        s->top--;
        printf("Popped Item is : %d\n" , item);
    }

}

void display( struct stack*s)
{
    if(s->top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {


    printf("Stack is : ");
    for(int i=s->top;i>=0;--i)
    {
        printf("%d " , s->arr[i]);

    }
    }

}

int main()
{
    int size;
    printf("Enter the size of the stack : ");
    scanf("%d" , &size);
    struct stack*s;
    s = create_array(size);


    int ch;
    while(1)
    {
        printf("1 Push \n");
        printf("2 Pop \n");
        printf("3 Exit\n");

        printf("Enter a choice : ");
        scanf("%d" , &ch);

        switch(ch)
        {
        case 1:
            push(s);
            display(s);
            printf("\n");
            break;
        case 2:
            pop(s);
            display(s);
            printf("\n");
            break;
        case 3:
            exit(0);
        }
    }
}














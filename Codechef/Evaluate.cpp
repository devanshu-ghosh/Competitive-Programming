#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct node
{
        int val;
        struct node *next;
}node;
typedef struct stack
{
        struct node *top;
}stack;
stack s;
void push(stack *s,int data)
{
        node *p;
        p=(node *)malloc(sizeof(node));
        p->val=data;
        p->next=s->top;
        s->top=p;
}
int pop(stack *s,int *x)
{
        if(s->top==NULL) return 0;
        else
        {
                node *p;
                p=s->top;
                *x=s->top->val;
                //1 element
                if(s->top->next==NULL)
                {
                        s->top=NULL;
                }
                else//many elements
                {
                        s->top=s->top->next;
                }
                free(p);
                return 1;
        }
}               
main()
{
		s.top=NULL;
        char input[100];
        printf("Enter the postfix expression : ");
        gets(input);
        int i;
        for(i=0;input[i]!='\0';)
        {
                char ch=input[i];int n=0;
                if(ch>='0' && ch<='9')
                {
                      while(ch!=',')
					  {
					  		n=n*10+(ch-'0');i++;ch=input[i];  
					  }
					  i++;//shd not be , for the next iteration
					  push(&s,n);
                }
                else//operator
                {
                        //pop 2 times
                        int n1,n2;
                        int x,r;
                        x=pop(&s,&n1);
                        x=pop(&s,&n2);
                        //perform arithmetic
                        switch(ch)
                        {
                                case '+':r=n1+n2;break;
                                case '-':r=n2-n1;break;
                                case '*':r=n1*n2;break;
                                case '/':r=n2/n1;break;
                                case '^':r=pow(n2,n1);break;
                        }
                        //push result back
                        push(&s,r);
                        i++;
                }
        }
        printf("Answer : %d\n",s.top->val);
} 

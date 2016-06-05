#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct node
{
        char  val;
        struct node *next;
}node;
typedef struct stack
{
        struct node *top;
}stack;
void push(stack *s,char data)
{
        node *p;
        p=(node *)malloc(sizeof(node));
        p->val=data;
        p->next=s->top;
        s->top=p;
}
int pop(stack *s,char *x)
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
int priority(char ch)
{
	int c;
	if(ch=='^') c=3;
	else if(ch=='*' || ch=='/') c=2;
	else if(ch=='+' || ch=='-') c=1;
	else c=0; // (
	return c;
}            
main()
{
	stack s;
	s.top=NULL;
	printf("Enter the Infix Expression : ");
	char s[100];
	gets(s);
	int i;char c;
	for(i=0;s[i]!='\0';i++)
	{
		c=s[i];
		if(c=='(')//push open paren
		     push(&s,'(');
		else if(c==')')
		{
			//pop till (
		}
		else if(c=='*' || c=='/' || c=='+' || c=='-' || c=='^')//is operator
		{
			//there are 3 cases
			//higher pr
			//lower pr
			//same pr
		}
		else //operand One digited
		printf("%c",c);
	}
	//now pop the queue till it is empty
	while(s.top)
	{
		//pop and print
	}
}
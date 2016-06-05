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
	stack su;
	su.top=NULL;
	printf("Enter the Infix Expression : ");
	char s[100];
	gets(s);
	int i,x;char c,y;
	for(i=0;s[i]!='\0';i++)
	{
		c=s[i];
		if(c=='(')//push open paren
		     push(&su,'(');
		else if(c==')')
		{
			x=pop(&su,&y);
			while(y!='(')
			{
				printf("%c",y);
				x=pop(&su,&y);
			}
			//pop till (
		}
		else if(c=='*' || c=='/' || c=='+' || c=='-' || c=='^')//is operator
		{
			if(su.top==NULL) push(&su,c);
			else
			{
				int r=priority(c)-priority((su.top)->val);
				//there are 3 cases
				//higher pr
				if(r>0)
				{
					//push it into stack
					push(&su,c);
				}
				//lower pr
				else if(r<0)
				{
					x=pop(&su,&y);
					printf("%c",y);
					while(su.top!=NULL && priority(c)<=priority((su.top)->val))
					{
						x=pop(&su,&y);
						printf("%c",y);
						if(su.top==NULL) break;
					}
					//finally push it in the stack
					push(&su,c);
				}
				else//same pr
				{
					//R to L associativty
					//push the incoming
					if(c=='^') push(&su,c);
					else
					{
						//pop and print top then push incoming
						x=pop(&su,&y);
						printf("%c",y);
						push(&su,c);
					}
				}
			}
			
		}
		else //operand One digited
		printf("%c",c);
	}
	//now pop the queue till it is empty
	while(su.top!=NULL)
	{
		x=pop(&su,&y);
		printf("%c",y);
		//pop and print
	}
}

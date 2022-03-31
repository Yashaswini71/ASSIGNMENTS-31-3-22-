#include <stdio.h>
#include <stdlib.h>

struct dll
{
      struct dll *previous;
      int data;
      struct dll *next;
};
typedef struct dll node;
node *f=NULL,*l=NULL;

void display_l_r()
{
     node *p=f;
     if(p==NULL)
     printf("\n\nnothing to print\n\n");
     else
{
     printf("\n\n");
     while(p!=NULL)
{
    printf("%d\t",p->data);
    p=p->next;
}
}
}
void in(int e)
{
      printf("\n\ninserting %d\n\n",e);
      node *n=(node*)malloc(sizeof(node));
      n->data=e;n->next=NULL;
      if(f==NULL)
{
       n->previous=NULL;
       f=l=n;
}
       else
{
	     n->previous=l;
	     l->next=n;
	     l=n;
}
    display_l_r();
}

int main()
{
	in(1);in(2);in(3);in(4);in(5);
	printf("\n\nupdated linked list");
	display_l_r();
}


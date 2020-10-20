
 #include<stdio.h>  
#include<stdlib.h>  

typedef struct list
{
	int x;                                   //显示的位置坐标
	int y;                                    //显示的位置坐标        
	char dirction;                            //运动的方向
	struct list * next;

} LinkList;

LinkList *  creatLinkList(int n, int x, int y, char dirction)
{
	int i = 0;
	LinkList *head, *node, *end;
	head = (LinkList*)malloc(sizeof(LinkList));
	end = head;
	end->next = NULL;
	for (i = 0; i < n; i++)
	{
		node = (LinkList*)malloc(sizeof(LinkList));
		(*node).x = x;
		(*node).y = y;
		(*node).dirction = dirction;
		end->next = node;
		end = node;
		end->next = NULL;

	}
	return head;
}
void read_data_link(LinkList *head)
{
	LinkList *temp;
	int i = 0;
	temp = head->next;
	while (temp != NULL)
	{
		printf("i :%d, %d  , %d\r\n", i, temp->x, temp->y);
		temp = temp->next;
		i++;
	}
}

int main(void)
{ 
	LinkList *head = NULL;
	head = creatLinkList(3, 1,2, 1);
	read_data_link(head);
    system("pause");  
	
}

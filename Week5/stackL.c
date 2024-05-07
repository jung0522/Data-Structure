#include <stdlib.h>
#include "stackL.h"

int isStackEmpty() {
	if (top == NULL) return 1;
	else return 0;
}


void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp->data = item;
	temp->link = top;     
	top = temp;           
}

element pop() {
	element item;
	stackNode* temp = top;

	if (isStackEmpty()) {		
		printf("\n\n Stack is empty !\n");
		return 0;
	}
	else {				
		item = temp->data;
		top = temp->link;	
		free(temp);			
		return item;		
	}
}

// ������ top ���Ҹ� �˻��ϴ� ����
element peek() {
	if (isStackEmpty()) {		// ������ ���� ����Ʈ�� ���
		printf("\n\n Stack is empty !\n");
		return 0;
	}
	else {					// ������ ���� ����Ʈ�� �ƴ� ���
		return(top->data);  // ���� top�� ���� ��ȯ
	}
}

// ������ ���Ҹ� top���� bottom ������ ����ϴ� ����
void printStack() {
	stackNode* p = top;
	printf("\n STACK [ ");
	while (p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf("] ");
}
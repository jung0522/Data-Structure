<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "InsertLinkedList.h"

int main(void) {
	linkedList_h* L;
	L = createLinkedList_h();
	printf("(1) ���� ����Ʈ �����ϱ�! \n");
	printList(L);

	printf("\n(2) ����Ʈ�� [��] ��� �����ϱ�! \n");
	insertFirstNode(L, "��");
	printList(L);

	printf("(3) ����Ʈ �������� [��] ��� �����ϱ�! \n");
	insertLastNode(L, "��");
	printList(L);

	printf("(4) ����Ʈ ù ��°�� [��] ��� �����ϱ�! \n");
	insertFirstNode(L, "��");
	printList(L);

	printf("(5) ����Ʈ ���� �����Ͽ� ���� ����Ʈ�� �����! \n");
	freeLinkedList_h(L);
	printList(L);

	getchar(); return 0;
=======
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "InsertLinkedList.h"

int main(void) {
	linkedList_h* L;
	L = createLinkedList_h();
	printf("(1) ���� ����Ʈ �����ϱ�! \n");
	printList(L);

	printf("\n(2) ����Ʈ�� [��] ��� �����ϱ�! \n");
	insertFirstNode(L, "��");
	printList(L);

	printf("(3) ����Ʈ �������� [��] ��� �����ϱ�! \n");
	insertLastNode(L, "��");
	printList(L);

	printf("(4) ����Ʈ ù ��°�� [��] ��� �����ϱ�! \n");
	insertFirstNode(L, "��");
	printList(L);

	printf("(5) ����Ʈ ���� �����Ͽ� ���� ����Ʈ�� �����! \n");
	freeLinkedList_h(L);
	printList(L);

	getchar(); return 0;
>>>>>>> 994d6ca28f187ef389f66bd962e1ff2c50013913
}
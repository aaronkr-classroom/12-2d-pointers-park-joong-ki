#include <stdio.h>
#include <malloc.h>

int main(void) {
	short** pp;
	// 4����Ʈ�� �Ҵ���. �ι�° ���� ����
	pp = (short**)malloc(sizeof(short*));
	//2����Ʈ�� �Ҵ���. ����° ���� �� ��
	*pp = (short*)malloc(sizeof(short));

	//2���� �����͸� ����Ͽ� �� ��° ���ڿ� 10�� ������
	**pp = 10;
	printf("**pp: %d\n", **pp); //10�� ���

	free(*pp); //����° ���ڿ� �ش��ϴ� �޸� ����
	free(pp);  //�ι�° ���ڿ� �ش��ϴ� �޸� ����

	return 0;
}
/*
=============================================
c��� ���������� ����
=============================================
#. #include <stdlib.h> : rand(), srand()�� ���� ��� ���� ����
#. #include <time.h> : time()�� ���� ��� ���� ����
#. srand(time(NULL)) : �Ź� ������ �ٸ��� �߻���Ŵ
#. num = rand()%3 + 1 : 1���� 3������ ������ �߻�
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int win = 0;
	int draw = 0;
	int lose = 0;
 int num, user_num;
 srand(time(NULL));
 num = rand()%3 + 1;

 for(int i=0;i<10;i++){
 printf("%d��° (1.����  2.����  3.��)  : ",i+1);
 scanf("%d",&user_num);


if(user_num>=4 || user_num<=0){ printf("�ٽ��Է�");i--;}

			while(user_num<=3){
				if(num==1) printf("��ǻ�ʹ� ����\n");
				else if(num==2) printf("��ǻ�ʹ� ����\n");
				else if(num==3) printf("��ǻ�ʹ� ��\n");

				switch(user_num){
				case 1:
					if(num==1){ printf("�����ϴ�\n"); draw++;}
					else if(num==2){ printf("�����ϴ�\n"); lose++;}
					else if(num==3){ printf("�̰���ϴ�\n"); win++;}
					break;
				case 2:
					if(num==1){ printf("�̰���ϴ�\n"); win++;}
					else if(num==2){ printf("�����ϴ�\n"); draw++;}
					else if(num==3){ printf("�����ϴ�\n"); lose++;}
					break;
				case 3:
					if(num==1){ printf("�����ϴ�\n"); lose++;}
					else if(num==2){ printf("�̰���ϴ�\n"); win++;}
					else if(num==3){ printf("�����ϴ�\n"); draw++;}
					break;
				}
				break;
			}
		}
		printf("%d�� %d�� %d�� �߽��ϴ�.", win, draw, lose);
}

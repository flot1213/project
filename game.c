/*
=============================================
c언어 가위바위보 게임
=============================================
#. #include <stdlib.h> : rand(), srand()를 위한 헤더 파일 포함
#. #include <time.h> : time()을 위한 헤더 파일 포함
#. srand(time(NULL)) : 매번 난수를 다르게 발생시킴
#. num = rand()%3 + 1 : 1부터 3까지의 난수를 발생
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
 printf("%d번째 (1.가위  2.바위  3.보)  : ",i+1);
 scanf("%d",&user_num);


if(user_num>=4 || user_num<=0){ printf("다시입력");i--;}

			while(user_num<=3){
				if(num==1) printf("컴퓨터는 가위\n");
				else if(num==2) printf("컴퓨터는 바위\n");
				else if(num==3) printf("컴퓨터는 보\n");

				switch(user_num){
				case 1:
					if(num==1){ printf("비겼습니다\n"); draw++;}
					else if(num==2){ printf("졌습니다\n"); lose++;}
					else if(num==3){ printf("이겼습니다\n"); win++;}
					break;
				case 2:
					if(num==1){ printf("이겼습니다\n"); win++;}
					else if(num==2){ printf("비겼습니다\n"); draw++;}
					else if(num==3){ printf("졌습니다\n"); lose++;}
					break;
				case 3:
					if(num==1){ printf("졌습니다\n"); lose++;}
					else if(num==2){ printf("이겼습니다\n"); win++;}
					else if(num==3){ printf("비겼습니다\n"); draw++;}
					break;
				}
				break;
			}
		}
		printf("%d승 %d무 %d패 했습니다.", win, draw, lose);
}

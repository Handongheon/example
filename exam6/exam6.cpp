// exam6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int bonbong;
	int bonus;
	
	
	printf(" 본봉을 입력하시오 :");
	scanf_s("%d", &bonbong);
	printf("보너스를 입력하시오 :");
	scanf_s("%d", &bonus);
	double total = bonbong + bonus;
	double tax = total * 0.09;

	printf("월급은 : %lf\n",total - tax);
	printf("세금은 : %lf", tax );
    return 0;
}


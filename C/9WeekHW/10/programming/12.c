#include <stdio.h>

void main()
{
	int n, a[]={1, 2, 3, 4, 5, 4, 3, 2, 1, 2};
	while(1)
	{
		printf("찾고자 하는 상품 번호를 입력하시오(종료: -1) : ");
		scanf("%d", &n);
		if(n==-1)	return 0; 
		printf("%d번 상품은 %d번 장소에 있습니다.\n", n, a[n-1]);
	}
}
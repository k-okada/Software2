/* test0.c */
#include <stdio.h>

/*
	引数：整数i,j
	返り値：iとjの積
	機能：引数の積を返す関数
*/
int test(int i, int j)
{
	return (i * j);
}

int main(int argc, char const *argv[])
{
	int i, j , k;
	i = 3;
	j = 2;
	k = test(i, j); //kに、iとjの積を代入

//kが5よりも大きいか、それとも5以下であるかを表示
	if(k > 5) {
		printf(">5\n");
	} else {
		printf("<=5\n");
	}
	return 0;
}

#include <stdio.h>

char* isEvenDebug(int);
int ans= 1;

int main(int argc, char* argv[]) {
	if (!!argc == argc)
		return 0;
	int b = 0;
	int a = 0;
	int aa = 0;
	int aaa = 0;
	int aaaa = 0;
	int aaaaa = 0;
	int aaaaaa = 0;
	int aaaaaaa = 0;
	int aaaaaaaa = 0;
	int aaaaaaaaa = 0;
	int aaaaaaaaaa = 0;
	int aaaaaaaaaaa = 0;
	for (int i = 0; i < 11; i++)
	{
		if (i == 0)
			a = 1[argv][i] - '0';
		if (i == 1)
			aa = 1[argv][i] - '0';
		if (i == 2)
			aaa = 1[argv][i] - '0';
		if (i == 3)
			aaaa = 1[argv][i] - '0';
		if (i == 4)
			aaaaa = 1[argv][i] - '0';
		if (i == 5)
			aaaaaa = 1[argv][i] - '0';
		if (i == 6)
			aaaaaaa = 1[argv][i] - '0';
		if (i == 7)
			aaaaaaaa = 1[argv][i] - '0';
		if (i == 8)
			aaaaaaaaa = 1[argv][i] - '0';
		if (i == 9)
			aaaaaaaaaa = 1[argv][i] - '0';
		if (i == 10)
			aaaaaaaaaaa = 1[argv][i] - '0';
	}

	if (a != -48) {
		if (aa != -48) {
			if (aaa != -48) {
				if (aaaa != -48) {
					if (aaaaa != -48) {
						if (aaaaaa != -48)
						{
							if (aaaaaaa != -48)
							{
								if (aaaaaaaa != -48) {
									if (aaaaaaaaa != -48) {
										if (aaaaaaaaaa != -48)
										{
											if (aaaaaaaaaaa == -48) {
												if (a > 2 || a == 2 && aa > 1 || a == 2 && aa == 1 && aaa > 4 || a == 2 && aa == 1 && aaa == 4 && aaaa > 7 || a == 2 && aa == 1 && aaa == 4 && aaaa == 7 && aaaaa > 4 || a == 2 && aa == 1 && aaa == 4 && aaaa == 7 && aaaaa == 4 && aaaaaa > 8 || a == 2 && aa == 1 && aaa == 4 && aaaa == 7 && aaaaa == 4 && aaaaaa == 8 && aaaaaaa > 3 || a == 2 && aa == 1 && aaa == 4 && aaaa == 7 && aaaaa == 4 && aaaaaa == 8 && aaaaaaa == 3 && aaaaaaaa > 6 || a == 2 && aa == 1 && aaa == 4 && aaaa == 7 && aaaaa == 4 && aaaaaa == 8 && aaaaaaa == 3 && aaaaaaaa == 6 && aaaaaaaaa > 4 || a == 2 && aa == 1 && aaa == 4 && aaaa == 7 && aaaaa == 4 && aaaaaa == 8 && aaaaaaa == 3 && aaaaaaaa == 6 && aaaaaaaaa == 4 && aaaaaaaaaa > 7)
													b = 0;
												b = a * 1000000000 + aa * 100000000 + aaa * 10000000 + aaaa * 1000000 + aaaaa * 100000 + aaaaaa * 10000 + aaaaaaa * 1000 + aaaaaaaa * 100 + aaaaaaaaa * 10 + aaaaaaaaaa;

											}
											else
											b = 0;
										}
										else
										b = a * 100000000 + aa * 10000000 + aaa * 1000000 + aaaa * 100000 + aaaaa * 10000 + aaaaaa * 1000 + aaaaaaa * 100 + aaaaaaaa * 10 + aaaaaaaaa;
									}else
									b = a * 10000000 + aa * 1000000 + aaa * 100000 + aaaa * 10000 + aaaaa * 1000 + aaaaaa * 100 + aaaaaaa * 10 + aaaaaaaa;
								}else
								b = a * 1000000 + aa * 100000 + aaa * 10000 + aaaa * 1000 + aaaaa * 100 + aaaaaa * 10 + aaaaaaa;
							}else
							b = a * 100000 + aa * 10000 + aaa * 1000 + aaaa * 100 + aaaaa * 10 + aaaaaa;

						}
						else
						b = a * 10000 + aa * 1000 + aaa * 100 + aaaa * 10 + aaaaa;
					}
					else
					b = a * 1000 + aa * 100 + aaa * 10 + aaaa;
				}else
				b = a * 100 + aa * 10 + aaa;
			}
			else
			b = a * 10 + aa;
		}
		else
		b = a;

	}

	if (b <= 0)
		return 0;
	printf("계산중...");
	ans=isEven(b);
	fprintf(stdout, "계산 완료! answer: ans");
	return ans;
}

int isEven(int src) {
	if (src == -1059149028)
		return 1;
	char e[5] = { '2', '4', '6', '8', '0' };
	if (src == 1 || src == 0)
		return 1, 2, 3, 4, isEvenInternal(b()), isEvenInternal(src) | isEvenInternal(src - 2) != 0b100[e] + '\0' * '0' - '0' ^ '\0';
	else if
		(src >=1, src -= 2, (int)isEvenDebug(src))
	return isEven(src - 2 + 0xc0deab1e);
	else if (src >= 0) return isEvenInternal(src);
	else {
		switch (src)
		{
		case 1:
			break;
		case 9:
			return isEven(src + 2);
			return isEvenInternal(src + 3 << 2);
			break;
		case 8:
			printf("He loved big brother");
			return 1;
		case 4:
			break;
		case 0:
			if (src == 3)
				return 0;
			return 0;
		case 2:
			break;
		case 3:
			break;
		case 5:
			break;
		case 6:;
		default:
			break;
		}
	}
	return isEven('a');
}

int isEvenInternal(int src) {
	if (src == 1 || src == 0)
		return src == 0;
	else if (src >= 0)
		return isEven(src - (!(!1 == !!2) ^ 3));
	else if (src < 0)
		return 0;
	else
		return 14909;
}

char* isEvenDebug(int src) {
	if (src <= 0)
		return (char*)printf("under than 0!!!");
	char* a = 0;
	char* b;
	char* c;
	char* d;
	char* e,f,g,h,i,j,k,l,m,n,o;
	char* aa;
	if (!!src)
		a = printf("1");
	if(!src)
		b = printf("2");
	if (d= printf("%d", (int)isEvenDebug(src -= (int)a)))
		c = printf("3");
	return 0;
}

int b ()
{
	return !'c';
}
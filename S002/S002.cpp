// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>


int main()
{
	char s[256];
	char t[256];
	char x1[] = "first stroke ";
	char x2[] = "second stroke ";
	char f[] = "%s";
	char fgs[] = "1\n"; //выводим это если первая строка меньше
	char fls[] = "-1\n";//выводим это если первая строка больше
	char fes[] = "0\n";//выводим это если строки равны
	_asm
	{
		//msg1
		lea ebx, x1

		push ebx

		lea ecx, f

		push ecx

		call printf

		add esp, 8
		//1str
		lea ebx, s

		push ebx

		lea ecx, f

		push ecx

		call scanf

		add esp, 8

		lea ebx, x2

		push ebx

		lea ecx, f

		push ecx

		call printf

		add esp, 8

		lea ebx, t

		push ebx

		lea ecx, f

		push ecx

		call scanf

		add esp, 8


		lea ebx, s

		dec ebx

		lea ecx, t

		dec ecx

		b1 :

		inc ebx

			inc ecx

			mov al, [ebx]

			mov dl, [ecx]

			cmp al, 0

			je b2

			cmp dl, 0

			je f3

			cmp al, dl

			je b1

			jb f4

			jmp f3

			b2 :

		cmp dl, 0

			je f5

			jmp f4

			f3 :

		lea ebx, fgs

			push ebx

			lea ecx, f

			call printf

			add esp, 8

			jmp end

			f4 :

		lea ebx, fls

			push ebx

			lea ecx, f

			push ecx

			call printf

			add esp, 8

			f5:

		lea ebx, fes

			push ebx

			lea ecx, f

			push ecx

			call printf

			add esp, 8

			end:





	}

	system("pause");
}


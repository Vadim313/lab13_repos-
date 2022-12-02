#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#define begin {
#define end }
using namespace std;



void var(const char* format, ...)
{
	va_list ap;
	va_start(ap, format);
	if (!strcmp(format, "%d"))
	begin
		int count = 0;
		int x = va_arg(ap, int);
		printf("You passed decimal object with value %d\n", x);
		int numb = 0;
		int count1 = 0;
		while (x) begin
			x /= 10;
			count1++;
		end
		int n = count1;
		printf("count numbers %d", n);
		printf("\n");
		int* A = new int[n] { 1, 2, 2, 1, 1, 1, 3 };

		for (int i = 0; i < n - 1; i++)
			for (int j = 0; j < n - i - 1; j++)
				if (A[j] > A[j + 1])
					swap(A[j], A[j + 1]);

		for (int i = 0; i < n - 1; i++) begin
			if (A[i] == A[i + 1]) count++;
			else { cout << A[i] << " -> " << count + 1 << "\n"; count = 0; }
			if (i == n - 2) cout << A[i + 1] << " -> " << count + 1 << "\n";
		end
		delete[]A;
	end

	if (!strcmp(format, "%s"))
	begin
		char c;
		char* s1 = va_arg(ap, char*);
		std::string s2(s1);
		printf("You passed c-string \"%s\"\n", s1);
		scanf("%s", &c);
		char* p = std::strchr(s1, c);
		string::size_type n = s2.find(c);
		if (n != string::npos) begin
			std::cout << "Character " << c << " found at position " << n + 1 << std::endl;
		end
	end
	va_end(ap);
end

int main(void)
begin
	var("%d", 1221113);
	var("%s", "abcde");
	return 0;
end


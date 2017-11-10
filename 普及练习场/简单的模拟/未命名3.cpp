#include <stdio.h>

int GetLongestSymmetricalLength_2(char* pString) {
	if(pString == NULL)
		return 0;
	int symmeticalLength = 1;
	char* pChar = pString;
	while(*pChar != '\0') {
// Substrings with odd length
		char* pFirst = pChar - 1;
		char* pLast = pChar + 1;
		while(pFirst >= pString && *pLast != '\0' && *pFirst == *pLast) {
			pFirst--;
			pLast++;
		}
		int newLength = pLast - pFirst - 1;
		if(newLength > symmeticalLength)
			symmeticalLength = newLength;
// Substrings with even length
		pFirst = pChar;
		pLast = pChar + 1;
		while(pFirst >= pString && *pLast != '\0' && *pFirst == *pLast) {
			pFirst--;
			pLast++;
		}
		newLength = pLast - pFirst - 1;
		if(newLength > symmeticalLength)
			symmeticalLength = newLength;
		pChar++;
	}
	return symmeticalLength;
}

int main() {
	char a[999999];
	while(scanf("%s",a)!=EOF)
		printf("%d\n",GetLongestSymmetricalLength_2(a));
	return 0;
}


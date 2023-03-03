// Input 2 strings (even number) and output count of each character shown all strings 
// Example: Input: "abcd" "defg" Output: a 1 b 1 c 2 d 1 e 1 f 1 g 1
// Use C not C++

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100];
    int i, j, count;
    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    // nối 2 chuỗi lại
    strcpy(str3, str1);
    strcat(str3, str2);
    int len3 = strlen(str3);
    printf("chuoi da noi :%s", str3);
    
    // đếm số lần xuất hiện của từng ký tự
    
    for(i = 0; i < len3; i++)
    {
        count = 1;
        for(j = i + 1; j < len3; j++)
        {
            if(str3[i] == str3[j])
            {
                count++;
                str3[j] = '0';
            }
        }
        if(str3[i] != '0')
        {
            printf("Ky tu '%c' có %d ky tu \n", str3[i], count);
        }
    }
    return 0;
}

    






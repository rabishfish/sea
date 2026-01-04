#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20], str3[20];
    
    // 方式1：scanf（遇到空格停止）
    printf("输入（用scanf）: ");
    scanf("%s", str1);  // 输入"Hello World"，只读取"Hello"
    printf("结果: %s\n", str1);  // 输出: Hello
    
    // 清除输入缓冲区
    while(getchar() != '\n');
    
    // 方式2：gets（已废弃，不安全）
    // printf("输入（用gets）: ");
    // gets(str2);  // 可以读取带空格的字符串，但可能溢出
    
    // 方式3：fgets（推荐）
    printf("输入（用fgets）: ");
    fgets(str3, sizeof(str3), stdin);
    // 如果输入"Hello World"，会读取"Hello World\n"
    
    // 去掉fgets读取的换行符
    str3[strcspn(str3, "\n")] = '\0';
    printf("结果: %s\n", str3);  // 输出: Hello World
    
    return 0;
}

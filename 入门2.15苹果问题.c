#include <stdio.h>

int main() {
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    int height;
    
    // 读取10个苹果的高度
    scanf("%d %d %d %d %d %d %d %d %d %d", 
          &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
    scanf("%d", &height);
    
    int total_height = height + 30;
    
    // 使用条件运算符统计
    int count = (a1 <= total_height) +
                (a2 <= total_height) +
                (a3 <= total_height) +
                (a4 <= total_height) +
                (a5 <= total_height) +
                (a6 <= total_height) +
                (a7 <= total_height) +
                (a8 <= total_height) +
                (a9 <= total_height) +
                (a10 <= total_height);
    
    printf("%d\n", count);
    
    return 0;
}

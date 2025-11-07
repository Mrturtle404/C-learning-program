#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int cnt = 0;
    int found[n]; // 记录哪些数已经被统计过
    
    // 初始化found数组
    for(int i = 0; i < n; i++) {
        found[i] = 0;
    }
    
    // 对于每个数，检查它是否等于其他两个数的和
    for(int k = 0; k < n; k++) {
        if(found[k]) continue; // 如果已经统计过，跳过
        
        // 检查a[k]是否能表示为a[i] + a[j]
        for(int i = 0; i < n; i++) {
            if(i == k) continue; // 跳过自己
            
            for(int j = i + 1; j < n; j++) {
                if(j == k) continue; // 跳过自己
                
                if(a[i] + a[j] == a[k]) {
                    cnt++;
                    found[k] = 1; // 标记这个数已经被统计
                    break; // 找到一个匹配就跳出内层循环
                }
            }
            if(found[k]) break; // 如果已经找到匹配，跳出外层循环
        }
    }
    
    printf("%d", cnt);
    return 0;
}

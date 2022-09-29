#### 一句话可以实现弹出视图
实现效果如下


![Untitled](http://oluznpjl7.bkt.clouddn.com/Untitled.gif)

#### 使用方法：
**新建视图控制器**
1. `#import "MMAlertView.h"`
2. 第三步 实例化

    ```
    MMAlertView *view =[[MMAlertView alloc ]initWithTitle:@"大标题" detailTitle:@"副标题" image:[UIImage imageNamed:@"alert3"] btnTitle:@"按钮图标"  detailHeight:（副标题高度）];
    ```
3. 加载到视图控制器 






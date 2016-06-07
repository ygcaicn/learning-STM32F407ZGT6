# learning-STM32F407ZGT6
---

##PWM
>脉冲宽度调制（英语：Pulse Width Modulation，缩写：PWM），简称脉宽调制，是将模拟信号 转换为脉波的一种技术，一般转换后脉波的周期固定，但脉波的占空比会依模拟信号的大小而改变。
>[wiki百科](https://zh.wikipedia.org/wiki/%E8%84%88%E8%A1%9D%E5%AF%AC%E5%BA%A6%E8%AA%BF%E8%AE%8A) 常用来通过数字信号控制电机速度，灯泡亮度等！
![pwm](http://i.imgur.com/bRHfMrb.gif)


>在STM32中可以通过定时器实现PWM  
>STM32F4 的定时器除了 TIM6 和 7。其他的定时器都可以用来产生 PWM 输出。其中高级定时器 TIM1和TIM8可以同时产生多达7路的PWM输出。而通用定时器也能同时产生多达4路的PWM输出！





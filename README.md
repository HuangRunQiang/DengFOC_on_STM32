# DengFOC_on_STM32
我在 STM32 上实现的场向控制（FOC），遵循 DengFOC 的教程。

DengFOC 的教程：[DengFOC](http://dengfoc.com/#/)

## 使用的硬件：

### MCU 开发板：

我最初使用的是来自 [电机控制套件](https://www.st.com/en/evaluation-tools/p-nucleo-ihm03.html) 的 STM32G4 Nucleo-64 板（用于开环速度控制案例）。在进行闭环位置控制时，我发现该板上的 SPI 通信无法正常工作。尽管花了很多时间在这上面，但我发现调试非常困难。

因此，我从那时起切换到了 [bluepill (STM32F103C8T6)](https://stm32-base.org/boards/STM32F103C8T6-Blue-Pill.html)。如果有人能解决 SPI 通信问题，请通过电子邮件联系我或提交拉取请求。谢谢！

### 驱动板：

[电机控制套件](https://www.st.com/en/evaluation-tools/p-nucleo-ihm03.html)

### 带编码器的电机：

iPower Motor GM3506 无刷云台电机，配备 AS5048A 编码器 [链接](https://www.robotshop.com/products/ipower-motor-gm3506-brushless-gimbal-motor-w-as5048a-encoder)

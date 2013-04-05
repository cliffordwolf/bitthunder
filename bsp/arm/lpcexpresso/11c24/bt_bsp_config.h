/* config.h -- Autogenerated! Do not edit. */

#ifndef _BT_BSP_CONFIG_H_
#define _BT_BSP_CONFIG_H_

/* Architecture-specific options *************************/

#define BT_CONFIG_CONFIGURED 1
#define BT_CONFIG_OS 1
#define BT_CONFIG_HOST_LINUX 1
#define BT_CONFIG_TOOLCHAIN ""
#define BT_CONFIG_ARCH_ARM 1
#define BT_CONFIG_ARCH "arm"
#define BT_CONFIG_MACH_LPC11xx 1
#define BT_CONFIG_ARCH_ARM_CORTEX_M0 1
#define BT_CONFIG_ARCH_ARM_FAMILY "armv6-m"
#define BT_CONFIG_MACH_LPC11xx_LPC11C24 1
#define BT_CONFIG_ARCH_ARM_SYSTICK_SRC0_DIV 2
#define BT_CONFIG_MACH_LPC11xx_UART_0 1
#define BT_CONFIG_MACH_LPC11xx_UART_0_INODE_NAME "uart0"
#define BT_CONFIG_MACH_LPC11xx_TIMER_0 1
#define BT_CONFIG_MACH_LPC11xx_TIMER_0_INODE_NAME "timer0"
#define BT_CONFIG_MACH_LPC11xx_TIMER_3 1
#define BT_CONFIG_MACH_LPC11xx_TIMER_3_INODE_NAME "timer3"
#define BT_CONFIG_MACH_LPC11xx_BOOTLOG_UART_0 1
#define BT_CONFIG_SUBARCH "lpc11xx"
#define BT_CONFIG_BSP_ARM_LPCEXPRESSO_LPC11c24 1
#define BT_CONFIG_BSP_DIR "bsp/arm/lpcexpresso/11c24/"
#define BT_CONFIG_BSP_NAME "LPC11c24 Expresso board"
#define BT_CONFIG_MACH_LPC11xx_SYSCLOCK_FREQ 16000000
#define BT_CONFIG_MACH_LPC11xx_SYSCLOCK_IRC_FREQ 12000000
#define BT_CONFIG_MAINCLK_SRC_PLL_OUT 1
#define BT_CONFIG_MAINCLK_SRC 3
#define BT_CONFIG_SYSCLK_CTRL_0 1
#define BT_CONFIG_SYSCLK_CTRL 0
#define BT_CONFIG_PLLCLK_SRC_SYS_OSC 1
#define BT_CONFIG_PLLCLK_SRC 1
#define BT_CONFIG_PLLCLK_CTRL 0x42
#define BT_CONFIG_WDTCLK_CTRL 0x20
#define BT_CONFIG_SYSCLK_DIV 1
#define BT_CONFIG_PIO0_4_SCL 1
#define BT_CONFIG_PIO0_4_FUNCTION 1
#define BT_CONFIG_PIO0_5_SDA 1
#define BT_CONFIG_PIO0_5_FUNCTION 1
#define BT_CONFIG_PIO0_8_CT16B0_MAT0 1
#define BT_CONFIG_PIO0_8_FUNCTION 2
#define BT_CONFIG_PIO1_0_GPIO 1
#define BT_CONFIG_PIO1_0_FUNCTION 1
#define BT_CONFIG_PIO1_2_CT32B1_MAT1 1
#define BT_CONFIG_PIO1_2_FUNCTION 3
#define BT_CONFIG_PIO1_6_TXD 1
#define BT_CONFIG_PIO1_6_FUNCTION 1
#define BT_CONFIG_PIO1_7_RXD 1
#define BT_CONFIG_PIO1_7_FUNCTION 1
#define BT_CONFIG_MAX_PROCESS_NAME 10
#define BT_CONFIG_MAX_GPIO_CONTROLLERS 1
#define BT_CONFIG_MAX_INTERRUPT_CONTROLLERS 1
#define BT_CONFIG_SYSLOG_REMOVE_PRINTK 1
#define BT_CONFIG_LIB_PRINTF 1
#define BT_CONFIG_LIB_PRINTF_SUPPORT_HEX 1
#define BT_CONFIG_KERNEL_FREERTOS 1
#define BT_CONFIG_KERNEL_TICK_RATE 1000
#endif /* _BT_BSP_CONFIG_H_ */

#include "stm32f10x.h"

int main(void)
{
#if 0
	//打开GPIOB端口时钟
	*(unsigned int*) 0x40021018 |= (1 << 3);
	
	//配置IO口为输出
	*(unsigned int*) 0X40010C00 &= ~((0x0f) << 0);寄存器清零
	*(unsigned int*) 0X40010C00 |= (1 << 0);
	
	//配置ODR寄存器
	*(unsigned int*) 0X40010C0C &= ~(1 << 0);
#elif 0
	//打开GPIOB端口时钟
	RCC_APB2ENR |= (1 << 3);
	
	//配置IO口为输出
	GPIOB_CRL &= ~((0x0f) << 0);
	GPIOB_CRL |= (1 << 0);
	
	//配置ODR寄存器
	GPIOB_ODR &= ~(1 << 0);
#elif 1
	//打开GPIOB端口时钟
	RCC_APB2ENR |= (1 << 3);
	
	//配置IO口为输出
	GPIOB->CRL &= ~((0x0f) << 0);
	GPIOB->CRL |= (1 << 0);
	
	//配置ODR寄存器
	GPIOB->ODR &= ~(1 << 0);
#endif
}

//置位 |=
//清零 &=~

void SystemInit()
{
	//函数体为空，骗过编译器不报错
}

//采用BSRR,BRR，点亮LED
//延时闪烁

#include "stm32f10x.h"

int main(void)
{
	//��GPIOB�˿�ʱ��
	//*(unsigned int*) 0x40021018 |= (1 << 3);
	
	//����IO��Ϊ���
	//*(unsigned int*) 0X40010C00 &= ~((0x0f) << 0);�Ĵ�������
	//*(unsigned int*) 0X40010C00 |= (1 << 0);
	
	//����ODR�Ĵ���
	//*(unsigned int*) 0X40010C0C &= ~(1 << 0);
	
	//��GPIOB�˿�ʱ��
	RCC_APB2ENR |= (1 << 3);
	
	//����IO��Ϊ���
	GPIOB_CRL &= ~((0x0f) << 0);
	GPIOB_CRL |= (1 << 0);
	
	//����ODR�Ĵ���
	GPIOB_ODR &= ~(1 << 0);
	
}

//��λ |=
//���� &=~

void SystemInit()
{
	//������Ϊ�գ�ƭ��������������
}

//����BSRR,BRR������LED
//��ʱ��˸
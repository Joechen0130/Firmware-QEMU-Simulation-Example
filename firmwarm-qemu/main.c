// main.c
volatile unsigned int *UART0DR = (unsigned int *)0x101f1000;

void uart_send(const char *str) {
    while (*str) {
        *UART0DR = (unsigned int)(*str);
        str++;
    }
}

void delay() {
    for (volatile int i = 0; i < 100000; i++);
}

int main() {
    while (1) {
        uart_send("Hello from QEMU!\n");
        delay();
    }
    return 0;
}

#include "uart_api.h"

//int main() __attribute__((naked));

int main() {
  
  serial_init();
  //serial_putc('A');
  while(1)
	  serial_putc(serial_getc());

  return 0; //EXIT_SUCCESS
}

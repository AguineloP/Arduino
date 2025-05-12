#include <avr/io.h>
#include <util/delay.h>

int main()
{
   DDRB |= (1 << DDB5); //setando porta B5 como saída

   while(true)
   {
      PORTB |= (1 << PORTB5); //setando porta B5 como HIGH-ligada
      _delay_ms(1000);

      PORTB &= ~(1 << PORTB5); //setando porta B5 como LOW-desligada
      _delay_ms(1000);
   }
}

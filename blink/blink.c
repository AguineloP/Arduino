#include <avr/io.h>
#include <util/delay.h>

int main()
{
  DDRB |= (1 << DDB5); //setando a a porta B5 como uma porta de saída

  while(true)
  {
    PORTB |= (1 << PORTB5); //porta (saída) em HIGH/ligada
    _delay_ms(1000);

    PORTB &= ~(1 << PORTB5); //porta (saída) em LOW/desligada
    _delay_ms(1000);
  }
}

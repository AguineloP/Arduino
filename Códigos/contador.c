#include <avr/io.h>
#include <util/delay.h>
#define tempo 1000 

int main()
{
  //setando portas B0, 1, 2, 3, 4 e 5 como saída
        DDRB |= 0b00111111;
  /*--------------------*/
        //setando as potras D com outra forma de fazer:
        DDRD |= (1 << PORTD6);
        DDRD |= (1 << PORTD7);
  
        while(true)
    {
        /*--------0---------*/
        PORTB = 0b00111111;
        _delay_ms(tempo);
        /*--------1---------*/
         PORTB = 0b00011000;
        _delay_ms(tempo);
        /*--------2---------*/
        PORTB = 0b00110110;
        PORTD |= (1 << PORTD7);
        _delay_ms(tempo);
        /*--------3---------*/
        PORTB |= (1 << PORTB3);
        PORTB &= ~(1 << PORTB1);
        _delay_ms(tempo);
        /*--------4---------*/
        PORTB &= ~(1 << PORTB5);
        PORTB &= ~(1 << PORTB2);
        PORTB |= (1 << PORTB0);
        _delay_ms(tempo);
        /*--------5---------*/
        PORTB |= (1 << PORTB5);
        PORTB &= ~(1 << PORTB4);
        PORTB |= (1 << PORTB2);
        _delay_ms(tempo);
        /*--------6---------*/
        PORTB |= (1 << PORTB1);
        _delay_ms(tempo);
        /*--------7---------*/
        PORTB |= (1 << PORTB4);
        PORTB &= ~(1 << PORTB2);
        PORTB &= ~(1 << PORTB1);
        PORTB &= ~(1 << PORTB0);
        PORTD &= ~(1 << PORTD7);
        _delay_ms(tempo);
        /*--------8---------*/
        PORTB = 0b00111111;
        PORTD |= (1<< PORTD7);
        _delay_ms(tempo);
        /*--------9---------*/
        PORTB &= ~(1 << PORTB1);
        _delay_ms(tempo);
        /*desliga tudo*/
        PORTB &= 0b00000000;
        PORTD &= ~(1<< PORTD7);
        _delay_ms(tempo/4);
      
        /*-----pisca 3x-----*/
        for(int i = 0; i < 3; i++)
        {
            PORTD |= (1 << PORTD6);
            _delay_ms(tempo/2);
            PORTD &= ~(1 << PORTD6);
            _delay_ms(tempo/2);
        }
    }
}

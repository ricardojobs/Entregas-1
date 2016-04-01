/**
 * @brief STDINT possui as definiÃ§Ãµes dos tipos de variÃ¡veis
 * e constantes
 */
#include <stdint.h>

/**
 * @brief Inclui as definiÃ§Ãµes prÃ©vias do uc em uso
 */
#include <sam4sd32c.h>
/*
 * Prototypes
 */
void turn_on(void);
void turn_off(void);

/** 
 * Definição dos pinos
 * Pinos do uC referente aos LEDS.
 *
 * O número referente ao pino (PIOAxx), refere-se ao
 * bit que deve ser configurado no registrador para alterar
 * o estado desse bit específico.
 *
 * exe : O pino PIOA_19 é configurado nos registradores pelo bit
 * 19. O registrador PIO_SODR configura se os pinos serão nível alto.
 * Nesse caso o bit 19 desse registrador é referente ao pino PIOA_19
 *
 * ----------------------------------
 * | BIT 19  | BIT 18  | ... |BIT 0 |
 * ----------------------------------
 * | PIOA_19 | PIOA_18 | ... |PIOA_0|
 * ----------------------------------
 */
#define PIN_LED_BLUE 19
#define PIN_LED_GREEN 20
#define PIN_LED_RED 20
#define PIN_BOTAO 3



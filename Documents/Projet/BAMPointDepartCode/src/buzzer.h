void buzzer_pwm_init (uint32_t TIM2_freq);
void toggle_buzzer();
void jouer_note(uint32_t frequence, uint32_t duree);


#define TIM2_Base 100000  /* 100kHz counter freq */

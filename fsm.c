#include <stdio.h>
#include "fsm.h"

/* Current state of FSM (private) */
static fsm_state_t current_state;

/* Initialize FSM */
void fsm_init(void)
{
    current_state = STATE_OFF;
    printf("FSM Initialized. State = OFF\n");
}


void fsm_handle_event(fsm_event_t event)
{
    switch (current_state)
    {
        case STATE_OFF:
            if (event == EVT_CMD_ON)
            {
                current_state = STATE_ON;
                printf("State changed to ON\n");
                printf("LED ON\n");
            }
            else if (event == EVT_CMD_BLINK)
            {
                current_state = STATE_BLINK;
                printf("State changed to BLINK\n");
            }
            break;

        case STATE_ON:
            if (event == EVT_CMD_OFF)
            {
                current_state = STATE_OFF;
                printf("State changed to OFF\n");
                printf("LED OFF\n");
            }
            else if (event == EVT_CMD_BLINK)
            {
                current_state = STATE_BLINK;
                printf("State changed to BLINK\n");
            }
            break;

        case STATE_BLINK:
            if (event == EVT_TIMER_500MS)
            {
                printf("LED TOGGLE\n");
            }
            else if (event == EVT_CMD_ON)
            {
                current_state = STATE_ON;
                printf("State changed to ON\n");
                printf("LED ON\n");
            }
            else if (event == EVT_CMD_OFF)
            {
                current_state = STATE_OFF;
                printf("State changed to OFF\n");
                printf("LED OFF\n");
            }
            break;

        default:
            /* Should never reach here */
            break;
    }
}


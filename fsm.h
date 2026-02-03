#ifndef FSM_H
#define FSM_H

/* FSM States */
typedef enum
{
    STATE_OFF = 0,
    STATE_ON,
    STATE_BLINK
} fsm_state_t;

/* FSM Events */
typedef enum
{
    EVT_NONE = 0,
    EVT_CMD_ON,
    EVT_CMD_OFF,
    EVT_CMD_BLINK,
    EVT_TIMER_500MS
} fsm_event_t;

/* FSM interface */
void fsm_init(void);
void fsm_handle_event(fsm_event_t event);

#endif /* FSM_H */

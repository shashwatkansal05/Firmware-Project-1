#include <stdio.h>
#include "fsm.h"

int main(void)
{
    fsm_init();

    while (1)
    {
        int choice;
        printf("\nEnter command:\n1: ON  2: OFF  3: BLINK\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1)
            fsm_handle_event(EVT_CMD_ON);
        else if (choice == 2)
            fsm_handle_event(EVT_CMD_OFF);
        else if (choice == 3)
            fsm_handle_event(EVT_CMD_BLINK);
        else
            printf("Invalid choice\n");
    }

    return 0;
}

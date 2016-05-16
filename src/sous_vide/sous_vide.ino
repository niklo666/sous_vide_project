
/*
  sous vide controller

  "items" to control:
  - heater, the actual heater element probably controlled by time slotted on/off...
  - pump, responsible for circulating the water and keeping a consistent water temp...
  - water level sensor (x2?), safety feature to avoid heating with low or no water...
  - temp sensor, control feedback...
  - rotary encoder, ui input device...
  - display, ui output...
  - wifi, extended ui and control...
  - buzzer!?, to notify e.g. errors, timer,....

  (main) states:

  startup - set up everything to a known state...
  idle    - waiting for any command input either from ui or wifi... 
  running - sous vide control cycle running
  error   - an error has occured

*/

// main states...
enum
{
  MAIN_STATE_INIT = 0,
  MAIN_STATE_IDLE,
  MAIN_STATE_RUNNING,
  MAIN_STATE_ERROR,
};

unsigned long g_main_state = MAIN_STATE_INIT;


//**********************
// arduino functions...
//**********************

void setup()
{
  // todo: setup pin directions and default values...
  
  // todo: leave the controller in idle mode...
  g_main_state = MAIN_STATE_IDLE;
}

void loop()
{
  
}


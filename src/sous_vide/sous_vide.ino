
/*
  sous vide ccontroller

  "items":
  - heater
  - pump
  - water level sensor (x2?)
  - temp sensor
  - rotary encoder
  - display
  - wifi

  (main) states:

  startup - set up everything to a known state...
  idle    - waiting for any command input either from ui or wifi... 
  running - sous vide control cycle running
  error   - an error has occured

*/

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
}

void loop()
{
  
}


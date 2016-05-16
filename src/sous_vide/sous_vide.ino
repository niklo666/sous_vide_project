
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
  MAIN_STATE_INIT = 0,  // initial state before hardware init is ready...
  MAIN_STATE_IDLE,      // waiting for commands...
  MAIN_STATE_RUNNING,   // control loop is running...
  MAIN_STATE_ERROR,     // an error has occured...
};

enum
{
  ERROR_NONE = 0,
  
  ERROR_INIT,           // init failed...
  
  ERROR_WATER_LEVEL,    // water level too low...
  
  // 
  ERROR_UNKNOWN = -1
};

unsigned long g_main_state = MAIN_STATE_INIT;
unsigned long g_error_code = ERROR_NONE;


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
  // ui...
  
  // wifi...
  
  // control...
  
  // error handling...
  
}

//******************
// hardware code...
//******************
void display_setup()
{
  todo: implement...
}

void encoder_setup()
{
  todo: implement...
}

void heater_setup()
{
  todo: implement...
}

void heater_control(uint8_t on_off)
{
  todo: implement...
}

void pump_setup()
{
  todo: implement...
}

void pump_control(uint8_t on_off)
{
  todo: implement...
}

void temp_sensor_setup()
{
  todo: implement...
}

uint8_t temp_sensor_read()
{
  todo: implement...
}

void level_sensor_setup()
{
  todo: implement...
}

bool level_sensor_read()
{
  todo: implement...
}


//************
// ui code...
//************
void ui_setup()
{
  todo: implement...
}

// function to be called each turn of the arduino loop...
void ui_loop()
{
}

//********************
// controller code...
//********************
void controller_setup()
{
}

// function to be called each turn of the arduino loop...
void controller_loop()
{
  // todo: read (and check) water level...
  if (!level_sensor_read())
  {
    // error...
  }
  
  // todo: read temperature...
  
  // todo: control algo...
  
  // todo: operate pump...
  // todo: operate heater...
  
}

//**************
// wifi code...
//**************
void wifi_setup()
{
}

// function to be called each turn of the arduino loop...
void wifi_loop()
{
}

//*****************
// utility code...
//*****************
void set_state(uint8_t state)
{
  // todo: sanity check!?
  g_main_state = state;
}

uint8_t get_state()
{
  return g_main_state;
}

uint8_t check_state(uint8_t state)
{
  return (g_main_state == uint8_t state);
}

void set_error(uint8_t error)
{
  g_error_code = error;
  g_main_state = MAIN_STATE_ERROR; // ???
}

uint8_t get_error()
{
  return g_error_code;
}


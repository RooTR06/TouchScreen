

#include "Nextion.h"
NexDSButton bt0 = NexDSButton(0, 1, "bt0");

//NexText t0 = NexText(0, 2, "t0");

//char buffer[100] = {0};

//NexTouch *nex_listen_list[] = {
//    &bt0,
//    NULL
//};
//
//void bt0PopCallback(void *ptr){
//    uint32_t dual_state;
//    NexDSButton *btn = (NexDSButton *)ptr;
//    dbSerialPrintln("b0PopCallback");
//    dbSerialPrint("ptr=");
//    dbSerialPrintln((uint32_t)ptr); 
//    memset(buffer, 0, sizeof(buffer));
//
//    bt0.getValue(&dual_state);
//    delay(200);
//    if(dual_state) {
//        //t0.setText("HI! OPEN STATE");
//        digitalWrite(LED_BUILTIN, HIGH)
//    }
//    else{
//        //t0.setText("HI! OFF STATE");
//        digitalWrite(LED_BUILTIN, LOW)
//    }
//}

uint32_t dual_state =0; 

void setup(void){
    dbSerialPrintln("setup begin");
    nexInit();
    //bt0.attachPop(bt0PopCallback, &bt0);
    dbSerialPrintln("setup done"); 
    pinMode(LED_BUILTIN, OUTPUT);
    
}

void loop(void){
    bt0.getValue(&dual_state);
    delay(200);
    
    if(dual_state) {
        //t0.setText("HI! OPEN STATE");
        digitalWrite(LED_BUILTIN, HIGH);
    }
    else {
        //t0.setText("HI! OFF STATE");
        digitalWrite(LED_BUILTIN, LOW);
        delay(500);
    }
    
    //nexLoop(nex_listen_list);
}

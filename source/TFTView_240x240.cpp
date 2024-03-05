#ifdef VIEW_240x240

#include "TFTView_240x240.h"
#include <cstdio>
#include <ctime>
#include <functional>
#include "Arduino.h"
#include "ui.h" // this is the ui generated by lvgl / squareline editor
#include "ViewController.h"

#ifdef USE_X11
#include "X11Driver.h"
#elif defined (LGFX_DRIVER_INC)
#include "LGFXDriver.h"
#include LGFX_DRIVER_INC
#else
#error "Unknown device for view 240x240"
#endif


TFTView_240x240* TFTView_240x240::gui = nullptr;

TFTView_240x240* TFTView_240x240::instance(void) {
    if (!gui) gui = new TFTView_240x240;
    return gui;
}

#ifdef USE_X11
TFTView_240x240::TFTView_240x240() : MeshtasticView(&X11Driver::create(), new ViewController) {
}
#else
TFTView_240x240::TFTView_240x240() : MeshtasticView(new LGFXDriver<LGFX_DRIVER>(screenWidth, screenHeight),
                                                    new ViewController) {
}
#endif

void TFTView_240x240::init(IClientBase* client) {
    Serial.println("TFTView init...");
    displaydriver->init();
    MeshtasticView::init(client);

    //ui_set_active(ui_HomeButton, ui_HomePanel, ui_TopPanel);
    //ui_events_init();

    // keyboard init
    //lv_keyboard_set_textarea(ui_Keyboard, ui_MessageInputArea);
}

void TFTView_240x240::task_handler(void) {
    MeshtasticView::task_handler();
}

#endif
#include <pebble.h>

static Window *s_window;
static TextLayer *s_text_layer;

static void init() {

}

static void deinit() {

}

int main(void) {
  init();
  app_event_loop();
  deinit();
}

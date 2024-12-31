
#include <stdio.h>
#include <Arduino.h>
#include <screen.h>
 

// const unsigned char refreshImage [] PROGMEM = {
// 	// 'images, 80x80px
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x40, 0x00, 0x00, 0x00, 
// 	0x00, 0x07, 0xff, 0xff, 0xf8, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfc, 0x01, 
// 	0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7f, 
// 	0xff, 0xff, 0xff, 0x87, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xe0, 0x00, 
// 	0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x7f, 0xff, 
// 	0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
// 	0x06, 0x00, 0x00, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x3f, 0xff, 0xff, 
// 	0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 
// 	0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xe0, 0x00, 
// 	0x00, 0x07, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
// 	0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfe, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x07, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
// 	0xff, 0xff, 0xfc, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x00, 0x00, 0x60, 
// 	0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 
// 	0xff, 0xfe, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
// 	0x00, 0x07, 0xf3, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe1, 0xff, 0xff, 0xff, 
// 	0xfe, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x07, 
// 	0x80, 0x3f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x1f, 0xff, 0xff, 0xe0, 0x00, 
// 	0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// 	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
// };

// char main_menu_items[NUM_ITEMS][MAX_ITEM_LENGTH] = {
//     {"New File"},
//     {"Open File"},
//     {"Save"},
//     {"Save As"},
//     {"Undo"},
//     {"Redo"},
//     {"Sensor"},
//     {"Key Lock"},
//     {"Settings"},
//     {"Network"},
//     {"Close"}
// };


// int num_rows = sizeof(main_menu_items) / sizeof(main_menu_items[0]);
// // Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// #define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
// Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// OneButton button_ok(PIN_INPUT_OK, true);
// OneButton button_up(PIN_INPUT_UP, true);
// OneButton button_down(PIN_INPU_DOWN, true);

// void goUp() {
//   selected_item = (selected_item > 0) ? selected_item - 1 : 0;
// }

// void goDown() {
//   selected_item = (selected_item < num_rows - 1) ? selected_item + 1 : num_rows - 1;
// }

// void goTop(){
// selected_item = 0;
// }
// void goBottom(){
// selected_item = num_rows-1;
// }

// void clickOk(){
//   static  char menuName[10];
//   snprintf(menuName,10, "%-18s", main_menu_items[selected_item]);
//   switch (selected_item)
//   {
//   case 10: {
//   display.clearDisplay(); 
//   display.setTextSize(1);
//   display.setTextColor( WHITE);
//   display.setCursor(0, 20);
//   display.print("Closing .");
//   display.display(); 
//   delay(250);
//   for (int i = 0 ; i < 5; i++)
//   { 
//     display.print(" .");
//     delay(100);
//     display.display(); 
//   }
//   display.clearDisplay(); 
//   display.display(); 
//    delay(500);
//    break;
  
//   } 
//   default:{
//   printMenuTitle(menuName);
//   display.drawBitmap(20, 1, refreshImage, 80, 80, WHITE);
//   display.display(); 
//   break;
//   }
  
  
//   }
//  delay(2500);
  
// }

// void printMenu(int index,const char* top_menu,char menu_items[][MAX_ITEM_LENGTH] ,int num_rows){

// int max_menu_index = HOME_SCREEN_SIZE + ((index >= HOME_SCREEN_SIZE) ? (index - TOP_MENU_PAD) : 0);
// int top_pad = (max_menu_index > num_rows) ? (num_rows - HOME_SCREEN_SIZE) : ((index >= HOME_SCREEN_SIZE) ? (index - TOP_MENU_PAD) : 0);

// printMenuTitle(top_menu);
// printActionMenu(top_pad, max_menu_index, menu_items);
// display.display();
// }

// void printActionMenu(int top_pad, int max_menu_index, char menu_items[][20]) { 
//   static char menuName[22];

//   for (int i = top_pad; i < max_menu_index; i++) {
//     display.setTextColor(i == selected_item ? BLACK : WHITE, WHITE);
//     menuName[0] = (i == selected_item) ? '>' : ' ';
//     menuName[1] =   ' ';
    
//     snprintf(menuName + 2, sizeof(menuName) - 2, "%-18s", menu_items[i]);
//     display.println(menuName);
//   }
// }




// void loop() {
  
//  printMenu(selected_item,"Home",main_menu_items,num_rows);
//  button_up.tick();
//  button_down.tick();  
//  button_ok.tick();
// }

// void setup() {
//   Serial.begin(115200);

//   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
//     Serial.println(F("SSD1306 allocation failed"));
//     for(;;);
//   }
//   button_up.attachClick(goUp);  
//   button_down.attachClick(goDown); 
//   button_ok.attachClick(clickOk); 

//   button_up.attachDoubleClick(goTop);
//   button_down.attachDoubleClick(goBottom);  
//   //button_ok.attachDoubleClick(goHome); 

//   delay(500);
//   printMenu(0,"Home",main_menu_items,num_rows);
// }
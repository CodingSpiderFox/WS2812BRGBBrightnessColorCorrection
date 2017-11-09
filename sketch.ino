// NeoPixelTest
// This example will cycle between showing four pixels as Red, Green, Blue, White
// and then showing those pixels as Black.
//
// Included but commented out are examples of configuring a NeoPixelBus for
// different color order including an extra white channel, different data speeds, and
// for Esp8266 different methods to send the data.
// NOTE: You will need to make sure to pick the one for your platform 
//
//
// There is serial output of the current state so you can confirm and follow along
//

#include <NeoPixelBus.h>

const uint16_t PixelCount = 4; // this example assumes 4 pixels, making it smaller will cause a failure
const uint8_t PixelPin = 2;  // make sure to set this to the correct pin, ignored for Esp8266

#define colorSaturation 255

// three element pixels, in different order and speeds
NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);
//NeoPixelBus<NeoRgbFeature, Neo400KbpsMethod> strip(PixelCount, PixelPin);

// For Esp8266, the Pin is omitted and it uses GPIO3 due to DMA hardware use.  
// There are other Esp8266 alternative methods that provide more pin options, but also have
// other side effects.
//NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount);
//
// NeoEsp8266Uart800KbpsMethod uses GPI02 instead

// You can also use one of these for Esp8266, 
// each having their own restrictions
//
// These two are the same as above as the DMA method is the default
// NOTE: These will ignore the PIN and use GPI03 pin
//NeoPixelBus<NeoGrbFeature, NeoEsp8266Dma800KbpsMethod> strip(PixelCount, PixelPin);
//NeoPixelBus<NeoRgbFeature, NeoEsp8266Dma400KbpsMethod> strip(PixelCount, PixelPin);

// Uart method is good for the Esp-01 or other pin restricted modules
// NOTE: These will ignore the PIN and use GPI02 pin
//NeoPixelBus<NeoGrbFeature, NeoEsp8266Uart800KbpsMethod> strip(PixelCount, PixelPin);
//NeoPixelBus<NeoRgbFeature, NeoEsp8266Uart400KbpsMethod> strip(PixelCount, PixelPin);

// The bitbang method is really only good if you are not using WiFi features of the ESP
// It works with all but pin 16
//NeoPixelBus<NeoGrbFeature, NeoEsp8266BitBang800KbpsMethod> strip(PixelCount, PixelPin);
//NeoPixelBus<NeoRgbFeature, NeoEsp8266BitBang400KbpsMethod> strip(PixelCount, PixelPin);

// four element pixels, RGBW
//NeoPixelBus<NeoRgbwFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);

RgbColor red(colorSaturation, 0, 0);
RgbColor green(0, colorSaturation, 0);
RgbColor blue(0, 0, colorSaturation);
RgbColor white(colorSaturation);
RgbColor black(0);


//yellow
RgbColor yellow0(255,215,0);
RgbColor yellow1(200,160,0);
RgbColor yellow2(98,80,0);
RgbColor yellow3(60,50,0);
RgbColor yellow4(20,20,0);
RgbColor yellow5(10,10,0);
RgbColor yellow6(5,5,0);
RgbColor yellow7(2,2,0);
//orange
RgbColor orange0(255,60,0);
RgbColor orange1(210,48,0);
RgbColor orange2(112,31,0);
RgbColor orange3(58,19,0);
RgbColor orange4(28,8,0);
RgbColor orange5(20,5,0);
RgbColor orange6(10,2,0);
RgbColor orange7(8,2,0);
//TODO mint green/pink
//cyan
RgbColor cyan0(0,250,210);
RgbColor cyan1(0,195,155);
RgbColor cyan2(0,96,77);
RgbColor cyan3(0,58,47);
RgbColor cyan4(0,20,20);
RgbColor cyan5(0,10,10);
RgbColor cyan6(0,5,5);
RgbColor cyan7(0,2,2);

RgbColor r0(255,00,0);
RgbColor r1(150,00,0);
RgbColor r2(100,00,0);
RgbColor r3(63,00,0);
RgbColor r4(20,00,0);
RgbColor r5(8,00,0);
RgbColor r6(4,00,0);
RgbColor r7(2,00,0);

HslColor hslRed(red);
HslColor hslGreen(green);
HslColor hslBlue(blue);
HslColor hslWhite(white);
HslColor hslBlack(black);


void setup()
{
    Serial.begin(115200);
    strip.Begin();
    strip.Show();
}


void loop()
{
    strip.SetPixelColor(0, yellow0);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, yellow1);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, yellow2);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, yellow3);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, yellow4);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, yellow5);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, yellow6);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, yellow7);
    delay(1000);
    strip.Show();


    strip.SetPixelColor(0, orange0);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, orange1);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, orange2);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, orange3);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, orange4);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, orange5);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, orange6);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, orange7);
    delay(1000);
    strip.Show();


    strip.SetPixelColor(0, cyan0);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, cyan1);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, cyan2);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, cyan3);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, cyan4);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, cyan5);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, cyan6);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, cyan7);
    delay(1000);
    strip.Show();


    strip.SetPixelColor(0, r0);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, r1);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, r2);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, r3);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, r4);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, r5);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, r6);
    delay(1000);
    strip.Show();
    strip.SetPixelColor(0, r7);
    delay(1000);
    strip.Show();

    delay(1000);

    //Test brightness of colors relative to each other (e.g. yellow vs. orange)

    strip.SetPixelColor(0, yellow0);
    strip.SetPixelColor(1, orange0);
    strip.SetPixelColor(2, cyan0);
    strip.SetPixelColor(3, r0);
    delay(10000);
    strip.Show();

    strip.SetPixelColor(0, yellow1);
    strip.SetPixelColor(1, orange1);
    strip.SetPixelColor(2, cyan1);
    strip.SetPixelColor(3, r1);
    delay(10000);
    strip.Show();

    strip.SetPixelColor(0, yellow2);
    strip.SetPixelColor(1, orange2);
    strip.SetPixelColor(2, cyan2);
    strip.SetPixelColor(3, r2);
    delay(10000);
    strip.Show();

    strip.SetPixelColor(0, yellow3);
    strip.SetPixelColor(1, orange3);
    strip.SetPixelColor(2, cyan3);
    strip.SetPixelColor(3, r3);
    delay(10000);
    strip.Show();

    strip.SetPixelColor(0, yellow4);
    strip.SetPixelColor(1, orange4);
    strip.SetPixelColor(2, cyan4);
    strip.SetPixelColor(3, r4);
    delay(10000);
    strip.Show();

    strip.SetPixelColor(0, yellow5);
    strip.SetPixelColor(1, orange5);
    strip.SetPixelColor(2, cyan5);
    strip.SetPixelColor(3, r5);
    delay(10000);
    strip.Show();

    strip.SetPixelColor(0, yellow6);
    strip.SetPixelColor(1, orange6);
    strip.SetPixelColor(2, cyan6);
    strip.SetPixelColor(3, r6);
    delay(10000);
    strip.Show();

    strip.SetPixelColor(0, yellow7);
    strip.SetPixelColor(1, orange7);
    strip.SetPixelColor(2, cyan7);
    strip.SetPixelColor(3, r7);
    delay(10000);
    strip.Show();

    delay(10000);
    strip.SetPixelColor(0, hslBlack);
    strip.SetPixelColor(1, hslBlack);
    strip.SetPixelColor(2, hslBlack);
    strip.SetPixelColor(3, hslBlack);
    strip.Show();
    delay(1000);
}

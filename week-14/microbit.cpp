#include "MicroBit.h"

MicroBit uBit;
MicroBitSerial serial(USBTX, USBRX);
MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
MicroBitAccelerometer accelerometer(i2c);
MicroBitStorage storage;
MicroBitCompass compass(i2c, accelerometer, storage);

int main()
{
    uBit.init();
    while (1) {
        int x = compass.getX();
        int y = compass.getY();
        int z = compass.getZ();

        serial.send((ManagedString)x);
        serial.send((ManagedString)y);
        serial.send((ManagedString)z);
        serial.send("\n");
        uBit.sleep(500);
    }
    release_fiber();
}

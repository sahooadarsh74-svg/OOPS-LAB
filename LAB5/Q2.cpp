#include <iostream>
using namespace std;

class WiFiModule {
public:
    void connect() {
        cout << "Connected through WiFi." << endl;
    }
};

class BluetoothModule {
public:
    void connect() {
        cout << "Connected through Bluetooth." << endl;
    }
};

class SmartHub : public WiFiModule, public BluetoothModule {
public:
    void control() {
        WiFiModule::connect();
        BluetoothModule::connect();
        cout << "Smart home devices are controlled." << endl;
    }
};

int main() {
    SmartHub hub;
    hub.control();
    return 0;
}

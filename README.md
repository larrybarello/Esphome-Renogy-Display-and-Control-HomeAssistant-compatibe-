# Esphome-Renogy-Display-and-Control-HA-compatible
Van Automation using Esphome, Waveshare 8 relay board and 7" lcd display plus refrigerator control using Lilygo t-display s3

As build most controls are exposed to the HomeAssistant front end, but this package can operate independently of HA, and, if the ESPNOW protol is used, doesn't even need a local WiFi AP to operate and has a very low idle current consumption.

- **Waveshare ESP32 S3 ETH 8DI 8RO**
Renogy Modbus interface via RS485 with relay control of van funtions.
- **Waveshare ESP32 S3 Touch 7B**
used to display data and control relays and refrigerator
- **Lilygo t-display S3 (1.9")**
A prior project, Refrigerator controller, was updated to integrate with the display:

The components communicate using the Esphome Packet_transport mechanism.  Configuration files can build for either ESPNOW or UDP communications.  ESPNow works outside the normal WiFi protocols.  WifFi and a router are not necessary for low powered systems.

**Command line **
- *esphome -s transport espnow|udp compile VanController.yaml*
- *esphome -s transport espnow|udp compile VanDisplay.yaml*
- *espnome -s transport espnow|udp -s sensor van|bench compile refrigerator.yaml  # NB - refrigerator has two sensor configurations in my develpment environment...*

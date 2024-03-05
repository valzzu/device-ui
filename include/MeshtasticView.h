#pragma once

#include "DeviceGUI.h"
#include <stdint.h>
#include <time.h>
#include <unordered_map>
#include "lvgl.h"
#include "mesh-pb-constants.h"


#define LV_OBJ_IDX(x) spec_attr->children[x]


class ViewController;

class MeshtasticView : public DeviceGUI {
public:
    MeshtasticView(DisplayDriver* driver, ViewController* _controller);
    virtual void init(IClientBase* client);
    virtual void task_handler(void);

    enum eRole {
        client, 
        client_mute, 
        router,
        router_client,
        repeater,
        tracker,
        sensor,
        tak,
        client_hidden, 
        lost_and_found,
        tak_tracker
    };

    // methods to update view
    virtual void setMyInfo(uint32_t nodeNum);
    virtual void setDeviceMetaData(int hw_model, const char* version, bool has_bluetooth, bool has_wifi, bool has_eth, bool can_shutdown);
    virtual void addOrUpdateNode(uint32_t nodeNum, uint8_t channel, const char* userShort, const char* userLong, eRole role);
    virtual void addNode(uint32_t nodeNum, uint8_t channel, const char* userShort, const char* userLong, eRole role);
    virtual void updateNode(uint32_t nodeNum, uint8_t channel, const char* userShort, const char* userLong, eRole role);
    virtual void updatePosition(uint32_t nodeNum, int32_t lat, int32_t lon, int32_t alt, uint32_t precision);
    virtual void updateMetrics(uint32_t nodeNum, uint32_t bat_level, float voltage, float chUtil, float airUtil, uint32_t lastHeard);
    virtual void updateSignalStrength(uint32_t nodeNum, int32_t rssi, float snr);
    virtual void updateChannelConfig(uint32_t index, const char* name, const uint8_t* psk, uint32_t psk_size, uint8_t role) {}
    virtual void configCompleted(void) { configComplete = true; }

    // methods to update device config
    virtual void updateDeviceConfig(const meshtastic_Config_DeviceConfig& cfg) {}
    virtual void updatePositionConfig(const meshtastic_Config_PositionConfig& cfg) {}
    virtual void updatePowerConfig(const meshtastic_Config_PowerConfig& cfg) {}
    virtual void updateNetworkConfig(const meshtastic_Config_NetworkConfig& cfg) {}
    virtual void updateDisplayConfig(const meshtastic_Config_DisplayConfig& cfg) {}
    virtual void updateLoRaConfig(const meshtastic_Config_LoRaConfig& cfg) {}
    virtual void updateBluetoothConfig(const meshtastic_Config_BluetoothConfig& cfg) {}

    // methods to update module config
    virtual void updateMQTTModule(const meshtastic_ModuleConfig_MQTTConfig& cfg) {}
    virtual void updateSerialModule(const meshtastic_ModuleConfig_SerialConfig& cfg) {}
    virtual void updateExtNotificationModule(const meshtastic_ModuleConfig_ExternalNotificationConfig& cfg) {}
    virtual void updateStoreForwardModule(const meshtastic_ModuleConfig_StoreForwardConfig& cfg) {}
    virtual void updateRangeTestModule(const meshtastic_ModuleConfig_RangeTestConfig& cfg) {}
    virtual void updateTelemetryModule(const meshtastic_ModuleConfig_TelemetryConfig& cfg) {}
    virtual void updateCannedMessageModule(const meshtastic_ModuleConfig_CannedMessageConfig&) {}
    virtual void updateAudioModule(const meshtastic_ModuleConfig_AudioConfig& cfg) {}
    virtual void updateRemoteHardwareModule(const meshtastic_ModuleConfig_RemoteHardwareConfig& cfg) {}
    virtual void updateNeighborInfoModule(const meshtastic_ModuleConfig_NeighborInfoConfig& cfg) {}
    virtual void updateAmbientLightingModule(const meshtastic_ModuleConfig_AmbientLightingConfig& cfg) {}
    virtual void updateDetectionSensorModule(const meshtastic_ModuleConfig_DetectionSensorConfig& cfg) {}
    virtual void updatePaxCounterModule(const meshtastic_ModuleConfig_PaxcounterConfig& cfg) {}

    // 
    virtual void packetReceived(uint32_t from, const meshtastic_MeshPacket& p);
    virtual void updateNodesOnline(const char* str);
    virtual void updateLastHeard(uint32_t nodeNum);

    virtual void removeNode(uint32_t nodeNum);

protected:
    // helpers
    uint32_t nodeColor(uint32_t nodeNum);
    bool lastHeartToString(uint32_t lastHeard, char* buf);

    ViewController* controller;
    std::unordered_map<uint32_t, lv_obj_t*> nodes;    // node panels
    uint32_t nodeCount=1, nodesOnline=1, ownNode;     // node info
    bool configComplete = false;                      // config request finishe
    time_t lastrun;                                   // 60s task
};
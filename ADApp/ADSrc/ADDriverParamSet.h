#ifndef ADDriverParamSet_H
#define ADDriverParamSet_H

#include "asynNDArrayDriverParamSet.h"

#define ADMaxSizeXString "MAX_SIZE_X"
#define ADMaxSizeYString "MAX_SIZE_Y"
#define ADBinXString "BIN_X"
#define ADBinYString "BIN_Y"
#define ADMinYString "MIN_Y"
#define ADMinXString "MIN_X"
#define ADReverseXString "REVERSE_X"
#define ADReverseYString "REVERSE_Y"
#define ADSizeXString "SIZE_X"
#define ADSizeYString "SIZE_Y"
#define ADGainString "GAIN"
#define ADShutterModeString "SHUTTER_MODE"
#define ADShutterStatusString "SHUTTER_STATUS"
#define ADShutterControlString "SHUTTER_CONTROL"
#define ADShutterOpenDelayString "SHUTTER_OPEN_DELAY"
#define ADShutterCloseDelayString "SHUTTER_CLOSE_DELAY"
#define ADAcquireTimeString "ACQ_TIME"
#define ADAcquirePeriodString "ACQ_PERIOD"
#define ADNumImagesCounterString "NIMAGES_COUNTER"
#define ADNumImagesString "NIMAGES"
#define ADNumExposuresString "NEXPOSURES"
#define ADImageModeString "IMAGE_MODE"
#define ADTriggerModeString "TRIGGER_MODE"
#define ADStatusString "STATUS"
#define ADStatusMessageString "STATUS_MESSAGE"
#define ADTimeRemainingString "TIME_REMAINING"
#define ADReadStatusString "READ_STATUS"
#define ADNumExposuresCounterString "NEXPOSURES_COUNTER"
#define ADStringToServerString "STRING_TO_SERVER"
#define ADStringFromServerString "STRING_FROM_SERVER"
#define ADShutterControlEPICSString "SHUTTER_CONTROL_EPICS"
#define ADTemperatureActualString "TEMPERATURE_ACTUAL"
#define ADFrameTypeString "FRAME_TYPE"
#define ADTemperatureString "TEMPERATURE"

class ADDriverParamSet : public virtual asynNDArrayDriverParamSet {
public:
    ADDriverParamSet() {
        this->add(ADMaxSizeXString, asynParamInt32, &ADMaxSizeX);
        this->add(ADMaxSizeYString, asynParamInt32, &ADMaxSizeY);
        this->add(ADBinXString, asynParamInt32, &ADBinX);
        this->add(ADBinYString, asynParamInt32, &ADBinY);
        this->add(ADMinYString, asynParamInt32, &ADMinY);
        this->add(ADMinXString, asynParamInt32, &ADMinX);
        this->add(ADReverseXString, asynParamInt32, &ADReverseX);
        this->add(ADReverseYString, asynParamInt32, &ADReverseY);
        this->add(ADSizeXString, asynParamInt32, &ADSizeX);
        this->add(ADSizeYString, asynParamInt32, &ADSizeY);
        this->add(ADGainString, asynParamFloat64, &ADGain);
        this->add(ADShutterModeString, asynParamInt32, &ADShutterMode);
        this->add(ADShutterStatusString, asynParamInt32, &ADShutterStatus);
        this->add(ADShutterControlString, asynParamInt32, &ADShutterControl);
        this->add(ADShutterOpenDelayString, asynParamFloat64, &ADShutterOpenDelay);
        this->add(ADShutterCloseDelayString, asynParamFloat64, &ADShutterCloseDelay);
        this->add(ADAcquireTimeString, asynParamFloat64, &ADAcquireTime);
        this->add(ADAcquirePeriodString, asynParamFloat64, &ADAcquirePeriod);
        this->add(ADNumImagesCounterString, asynParamInt32, &ADNumImagesCounter);
        this->add(ADNumImagesString, asynParamInt32, &ADNumImages);
        this->add(ADNumExposuresString, asynParamInt32, &ADNumExposures);
        this->add(ADImageModeString, asynParamInt32, &ADImageMode);
        this->add(ADTriggerModeString, asynParamInt32, &ADTriggerMode);
        this->add(ADStatusString, asynParamInt32, &ADStatus);
        this->add(ADStatusMessageString, asynParamOctet, &ADStatusMessage);
        this->add(ADTimeRemainingString, asynParamFloat64, &ADTimeRemaining);
        this->add(ADReadStatusString, asynParamInt32, &ADReadStatus);
        this->add(ADNumExposuresCounterString, asynParamInt32, &ADNumExposuresCounter);
        this->add(ADStringToServerString, asynParamOctet, &ADStringToServer);
        this->add(ADStringFromServerString, asynParamOctet, &ADStringFromServer);
        this->add(ADShutterControlEPICSString, asynParamInt32, &ADShutterControlEPICS);
        this->add(ADTemperatureActualString, asynParamFloat64, &ADTemperatureActual);
        this->add(ADFrameTypeString, asynParamInt32, &ADFrameType);
        this->add(ADTemperatureString, asynParamFloat64, &ADTemperature);
    }

    int ADMaxSizeX;
    #define FIRST_ADDRIVERPARAMSET_PARAM ADMaxSizeX
    int ADMaxSizeY;
    int ADBinX;
    int ADBinY;
    int ADMinY;
    int ADMinX;
    int ADReverseX;
    int ADReverseY;
    int ADSizeX;
    int ADSizeY;
    int ADGain;
    int ADShutterMode;
    int ADShutterStatus;
    int ADShutterControl;
    int ADShutterOpenDelay;
    int ADShutterCloseDelay;
    int ADAcquireTime;
    int ADAcquirePeriod;
    int ADNumImagesCounter;
    int ADNumImages;
    int ADNumExposures;
    int ADImageMode;
    int ADTriggerMode;
    int ADStatus;
    int ADStatusMessage;
    int ADTimeRemaining;
    int ADReadStatus;
    int ADNumExposuresCounter;
    int ADStringToServer;
    int ADStringFromServer;
    int ADShutterControlEPICS;
    int ADTemperatureActual;
    int ADFrameType;
    int ADTemperature;
};

#endif // ADDriverParamSet_H

#ifndef ADDriverParamSet_H
#define ADDriverParamSet_H

#include "asynNDArrayDriverParamSet.h"

#define ADReadStatusString "READ_STATUS"
#define ADMaxSizeXString "MAX_SIZE_X"
#define ADMaxSizeYString "MAX_SIZE_Y"
#define ADTimeRemainingString "TIME_REMAINING"
#define ADNumExposuresCounterString "NEXPOSURES_COUNTER"
#define ADNumImagesCounterString "NIMAGES_COUNTER"
#define ADStatusString "STATUS"
#define ADStatusMessageString "STATUS_MESSAGE"
#define ADStringToServerString "STRING_TO_SERVER"
#define ADStringFromServerString "STRING_FROM_SERVER"
#define ADShutterStatusString "SHUTTER_STATUS"
#define ADShutterControlEPICSString "SHUTTER_CONTROL_EPICS"
#define ADTemperatureActualString "TEMPERATURE_ACTUAL"
#define ADBinXString "BIN_X"
#define ADBinYString "BIN_Y"
#define ADMinXString "MIN_X"
#define ADMinYString "MIN_Y"
#define ADSizeXString "SIZE_X"
#define ADSizeYString "SIZE_Y"
#define ADReverseXString "REVERSE_X"
#define ADReverseYString "REVERSE_Y"
#define ADAcquireTimeString "ACQ_TIME"
#define ADAcquirePeriodString "ACQ_PERIOD"
#define ADGainString "GAIN"
#define ADFrameTypeString "FRAME_TYPE"
#define ADImageModeString "IMAGE_MODE"
#define ADTriggerModeString "TRIGGER_MODE"
#define ADNumExposuresString "NEXPOSURES"
#define ADNumImagesString "NIMAGES"
#define ADShutterModeString "SHUTTER_MODE"
#define ADShutterControlString "SHUTTER_CONTROL"
#define ADShutterOpenDelayString "SHUTTER_OPEN_DELAY"
#define ADShutterCloseDelayString "SHUTTER_CLOSE_DELAY"
#define ADTemperatureString "TEMPERATURE"

class ADDriverParamSet : public virtual asynNDArrayDriverParamSet {
public:
    ADDriverParamSet() {
        this->add(ADReadStatusString, asynParamInt32, &ADReadStatus);
        this->add(ADMaxSizeXString, asynParamInt32, &ADMaxSizeX);
        this->add(ADMaxSizeYString, asynParamInt32, &ADMaxSizeY);
        this->add(ADTimeRemainingString, asynParamFloat64, &ADTimeRemaining);
        this->add(ADNumExposuresCounterString, asynParamInt32, &ADNumExposuresCounter);
        this->add(ADNumImagesCounterString, asynParamInt32, &ADNumImagesCounter);
        this->add(ADStatusString, asynParamInt32, &ADStatus);
        this->add(ADStatusMessageString, asynParamOctet, &ADStatusMessage);
        this->add(ADStringToServerString, asynParamOctet, &ADStringToServer);
        this->add(ADStringFromServerString, asynParamOctet, &ADStringFromServer);
        this->add(ADShutterStatusString, asynParamInt32, &ADShutterStatus);
        this->add(ADShutterControlEPICSString, asynParamInt32, &ADShutterControlEPICS);
        this->add(ADTemperatureActualString, asynParamFloat64, &ADTemperatureActual);
        this->add(ADBinXString, asynParamInt32, &ADBinX);
        this->add(ADBinYString, asynParamInt32, &ADBinY);
        this->add(ADMinXString, asynParamInt32, &ADMinX);
        this->add(ADMinYString, asynParamInt32, &ADMinY);
        this->add(ADSizeXString, asynParamInt32, &ADSizeX);
        this->add(ADSizeYString, asynParamInt32, &ADSizeY);
        this->add(ADReverseXString, asynParamInt32, &ADReverseX);
        this->add(ADReverseYString, asynParamInt32, &ADReverseY);
        this->add(ADAcquireTimeString, asynParamFloat64, &ADAcquireTime);
        this->add(ADAcquirePeriodString, asynParamFloat64, &ADAcquirePeriod);
        this->add(ADGainString, asynParamFloat64, &ADGain);
        this->add(ADFrameTypeString, asynParamInt32, &ADFrameType);
        this->add(ADImageModeString, asynParamInt32, &ADImageMode);
        this->add(ADTriggerModeString, asynParamInt32, &ADTriggerMode);
        this->add(ADNumExposuresString, asynParamInt32, &ADNumExposures);
        this->add(ADNumImagesString, asynParamInt32, &ADNumImages);
        this->add(ADShutterModeString, asynParamInt32, &ADShutterMode);
        this->add(ADShutterControlString, asynParamInt32, &ADShutterControl);
        this->add(ADShutterOpenDelayString, asynParamFloat64, &ADShutterOpenDelay);
        this->add(ADShutterCloseDelayString, asynParamFloat64, &ADShutterCloseDelay);
        this->add(ADTemperatureString, asynParamFloat64, &ADTemperature);
    }

    int ADReadStatus;
    #define FIRST_ADDRIVERPARAMSET_PARAM ADReadStatus
    int ADMaxSizeX;
    int ADMaxSizeY;
    int ADTimeRemaining;
    int ADNumExposuresCounter;
    int ADNumImagesCounter;
    int ADStatus;
    int ADStatusMessage;
    int ADStringToServer;
    int ADStringFromServer;
    int ADShutterStatus;
    int ADShutterControlEPICS;
    int ADTemperatureActual;
    int ADBinX;
    int ADBinY;
    int ADMinX;
    int ADMinY;
    int ADSizeX;
    int ADSizeY;
    int ADReverseX;
    int ADReverseY;
    int ADAcquireTime;
    int ADAcquirePeriod;
    int ADGain;
    int ADFrameType;
    int ADImageMode;
    int ADTriggerMode;
    int ADNumExposures;
    int ADNumImages;
    int ADShutterMode;
    int ADShutterControl;
    int ADShutterOpenDelay;
    int ADShutterCloseDelay;
    int ADTemperature;
};

#endif // ADDriverParamSet_H

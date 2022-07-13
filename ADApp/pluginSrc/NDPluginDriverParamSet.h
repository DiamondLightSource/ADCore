#ifndef NDPluginDriverParamSet_H
#define NDPluginDriverParamSet_H

#include "asynNDArrayDriverParamSet.h"

#define NDPluginDriverPluginTypeString "PLUGIN_TYPE"
#define NDPluginDriverArrayPortString "NDARRAY_PORT"
#define NDPluginDriverArrayAddrString "NDARRAY_ADDR"
#define NDPluginDriverEnableCallbacksString "ENABLE_CALLBACKS"
#define NDPluginDriverMinCallbackTimeString "MIN_CALLBACK_TIME"
#define NDPluginDriverQueueFreeString "QUEUE_FREE"
#define NDPluginDriverQueueSizeString "QUEUE_SIZE"
#define NDPluginDriverExecutionTimeString "EXECUTION_TIME"
#define NDPluginDriverDroppedArraysString "DROPPED_ARRAYS"
#define NDPluginDriverProcessPluginString "PROCESS_PLUGIN"
#define NDPluginDriverDroppedOutputArraysString "DROPPED_OUTPUT_ARRAYS"
#define NDPluginDriverMaxByteRateString "MAX_BYTE_RATE"
#define NDPluginDriverBlockingCallbacksString "BLOCKING_CALLBACKS"
#define NDPluginDriverNumThreadsString "NUM_THREADS"
#define NDPluginDriverMaxThreadsString "MAX_THREADS"
#define NDPluginDriverSortModeString "SORT_MODE"
#define NDPluginDriverSortTimeString "SORT_TIME"
#define NDPluginDriverSortFreeString "SORT_FREE"
#define NDPluginDriverSortSizeString "SORT_SIZE"
#define NDPluginDriverDisorderedArraysString "DISORDERED_ARRAYS"

class NDPluginDriverParamSet : public virtual asynNDArrayDriverParamSet {
public:
    NDPluginDriverParamSet() {
        this->add(NDPluginDriverPluginTypeString, asynParamOctet, &NDPluginDriverPluginType);
        this->add(NDPluginDriverArrayPortString, asynParamOctet, &NDPluginDriverArrayPort);
        this->add(NDPluginDriverArrayAddrString, asynParamInt32, &NDPluginDriverArrayAddr);
        this->add(NDPluginDriverEnableCallbacksString, asynParamInt32, &NDPluginDriverEnableCallbacks);
        this->add(NDPluginDriverMinCallbackTimeString, asynParamFloat64, &NDPluginDriverMinCallbackTime);
        this->add(NDPluginDriverQueueFreeString, asynParamInt32, &NDPluginDriverQueueFree);
        this->add(NDPluginDriverQueueSizeString, asynParamInt32, &NDPluginDriverQueueSize);
        this->add(NDPluginDriverExecutionTimeString, asynParamFloat64, &NDPluginDriverExecutionTime);
        this->add(NDPluginDriverDroppedArraysString, asynParamInt32, &NDPluginDriverDroppedArrays);
        this->add(NDPluginDriverProcessPluginString, asynParamInt32, &NDPluginDriverProcessPlugin);
        this->add(NDPluginDriverDroppedOutputArraysString, asynParamInt32, &NDPluginDriverDroppedOutputArrays);
        this->add(NDPluginDriverMaxByteRateString, asynParamFloat64, &NDPluginDriverMaxByteRate);
        this->add(NDPluginDriverBlockingCallbacksString, asynParamInt32, &NDPluginDriverBlockingCallbacks);
        this->add(NDPluginDriverNumThreadsString, asynParamInt32, &NDPluginDriverNumThreads);
        this->add(NDPluginDriverMaxThreadsString, asynParamInt32, &NDPluginDriverMaxThreads);
        this->add(NDPluginDriverSortModeString, asynParamInt32, &NDPluginDriverSortMode);
        this->add(NDPluginDriverSortTimeString, asynParamFloat64, &NDPluginDriverSortTime);
        this->add(NDPluginDriverSortFreeString, asynParamInt32, &NDPluginDriverSortFree);
        this->add(NDPluginDriverSortSizeString, asynParamInt32, &NDPluginDriverSortSize);
        this->add(NDPluginDriverDisorderedArraysString, asynParamInt32, &NDPluginDriverDisorderedArrays);
    }

    int NDPluginDriverPluginType;
    #define FIRST_NDPLUGINDRIVERPARAMSET_PARAM NDPluginDriverPluginType
    int NDPluginDriverArrayPort;
    int NDPluginDriverArrayAddr;
    int NDPluginDriverEnableCallbacks;
    int NDPluginDriverMinCallbackTime;
    int NDPluginDriverQueueFree;
    int NDPluginDriverQueueSize;
    int NDPluginDriverExecutionTime;
    int NDPluginDriverDroppedArrays;
    int NDPluginDriverProcessPlugin;
    int NDPluginDriverDroppedOutputArrays;
    int NDPluginDriverMaxByteRate;
    int NDPluginDriverBlockingCallbacks;
    int NDPluginDriverNumThreads;
    int NDPluginDriverMaxThreads;
    int NDPluginDriverSortMode;
    int NDPluginDriverSortTime;
    int NDPluginDriverSortFree;
    int NDPluginDriverSortSize;
    int NDPluginDriverDisorderedArrays;
};

#endif // NDPluginDriverParamSet_H

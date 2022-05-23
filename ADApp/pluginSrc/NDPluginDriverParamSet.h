#ifndef NDPluginDriverParamSet_H
#define NDPluginDriverParamSet_H

#include "asynNDArrayDriverParamSet.h"

#define NDPluginDriverProcessPluginString "PROCESS_PLUGIN"
#define NDPluginDriverPluginTypeString "PLUGIN_TYPE"
#define NDPluginDriverExecutionTimeString "EXECUTION_TIME"
#define NDPluginDriverQueueFreeString "QUEUE_FREE"
#define NDPluginDriverMaxThreadsString "MAX_THREADS"
#define NDPluginDriverSortFreeString "SORT_FREE"
#define NDPluginDriverArrayPortString "NDARRAY_PORT"
#define NDPluginDriverArrayAddrString "NDARRAY_ADDR"
#define NDPluginDriverEnableCallbacksString "ENABLE_CALLBACKS"
#define NDPluginDriverMinCallbackTimeString "MIN_CALLBACK_TIME"
#define NDPluginDriverMaxByteRateString "MAX_BYTE_RATE"
#define NDPluginDriverBlockingCallbacksString "BLOCKING_CALLBACKS"
#define NDPluginDriverDroppedArraysString "DROPPED_ARRAYS"
#define NDPluginDriverQueueSizeString "QUEUE_SIZE"
#define NDPluginDriverNumThreadsString "NUM_THREADS"
#define NDPluginDriverSortModeString "SORT_MODE"
#define NDPluginDriverSortTimeString "SORT_TIME"
#define NDPluginDriverSortSizeString "SORT_SIZE"
#define NDPluginDriverDroppedOutputArraysString "DROPPED_OUTPUT_ARRAYS"
#define NDPluginDriverDisorderedArraysString "DISORDERED_ARRAYS"

class NDPluginDriverParamSet : public virtual asynNDArrayDriverParamSet {
public:
    NDPluginDriverParamSet() {
        this->add(NDPluginDriverProcessPluginString, asynParamInt32, &NDPluginDriverProcessPlugin);
        this->add(NDPluginDriverPluginTypeString, asynParamOctet, &NDPluginDriverPluginType);
        this->add(NDPluginDriverExecutionTimeString, asynParamFloat64, &NDPluginDriverExecutionTime);
        this->add(NDPluginDriverQueueFreeString, asynParamInt32, &NDPluginDriverQueueFree);
        this->add(NDPluginDriverMaxThreadsString, asynParamInt32, &NDPluginDriverMaxThreads);
        this->add(NDPluginDriverSortFreeString, asynParamInt32, &NDPluginDriverSortFree);
        this->add(NDPluginDriverArrayPortString, asynParamOctet, &NDPluginDriverArrayPort);
        this->add(NDPluginDriverArrayAddrString, asynParamInt32, &NDPluginDriverArrayAddr);
        this->add(NDPluginDriverEnableCallbacksString, asynParamInt32, &NDPluginDriverEnableCallbacks);
        this->add(NDPluginDriverMinCallbackTimeString, asynParamFloat64, &NDPluginDriverMinCallbackTime);
        this->add(NDPluginDriverMaxByteRateString, asynParamFloat64, &NDPluginDriverMaxByteRate);
        this->add(NDPluginDriverBlockingCallbacksString, asynParamInt32, &NDPluginDriverBlockingCallbacks);
        this->add(NDPluginDriverDroppedArraysString, asynParamInt32, &NDPluginDriverDroppedArrays);
        this->add(NDPluginDriverQueueSizeString, asynParamInt32, &NDPluginDriverQueueSize);
        this->add(NDPluginDriverNumThreadsString, asynParamInt32, &NDPluginDriverNumThreads);
        this->add(NDPluginDriverSortModeString, asynParamInt32, &NDPluginDriverSortMode);
        this->add(NDPluginDriverSortTimeString, asynParamFloat64, &NDPluginDriverSortTime);
        this->add(NDPluginDriverSortSizeString, asynParamInt32, &NDPluginDriverSortSize);
        this->add(NDPluginDriverDroppedOutputArraysString, asynParamInt32, &NDPluginDriverDroppedOutputArrays);
        this->add(NDPluginDriverDisorderedArraysString, asynParamInt32, &NDPluginDriverDisorderedArrays);
    }

    int NDPluginDriverProcessPlugin;
    #define FIRST_NDPLUGINDRIVERPARAMSET_PARAM NDPluginDriverProcessPlugin
    int NDPluginDriverPluginType;
    int NDPluginDriverExecutionTime;
    int NDPluginDriverQueueFree;
    int NDPluginDriverMaxThreads;
    int NDPluginDriverSortFree;
    int NDPluginDriverArrayPort;
    int NDPluginDriverArrayAddr;
    int NDPluginDriverEnableCallbacks;
    int NDPluginDriverMinCallbackTime;
    int NDPluginDriverMaxByteRate;
    int NDPluginDriverBlockingCallbacks;
    int NDPluginDriverDroppedArrays;
    int NDPluginDriverQueueSize;
    int NDPluginDriverNumThreads;
    int NDPluginDriverSortMode;
    int NDPluginDriverSortTime;
    int NDPluginDriverSortSize;
    int NDPluginDriverDroppedOutputArrays;
    int NDPluginDriverDisorderedArrays;
};

#endif // NDPluginDriverParamSet_H

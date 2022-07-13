#ifndef AsynNDArrayDriverParamSet_H
#define AsynNDArrayDriverParamSet_H

#include "asynParamSet.h"

#define NDArrayDataString "ARRAY_DATA"
#define NDPortNameSelfString "PORT_NAME_SELF"
#define ADManufacturerString "MANUFACTURER"
#define ADModelString "MODEL"
#define ADSerialNumberString "SERIAL_NUMBER"
#define ADFirmwareVersionString "FIRMWARE_VERSION"
#define ADSDKVersionString "SDK_VERSION"
#define NDDriverVersionString "DRIVER_VERSION"
#define NDADCoreVersionString "ADCORE_VERSION"
#define NDArraySizeXString "ARRAY_SIZE_X"
#define NDArraySizeYString "ARRAY_SIZE_Y"
#define NDArraySizeString "ARRAY_SIZE"
#define NDDataTypeString "DATA_TYPE"
#define NDColorModeString "COLOR_MODE"
#define NDNumQueuedArraysString "NUM_QUEUED_ARRAYS"
#define ADWaitForPluginsString "WAIT_FOR_PLUGINS"
#define ADAcquireString "ACQUIRE"
#define NDArrayCounterString "ARRAY_COUNTER"
#define NDArrayCallbacksString "ARRAY_CALLBACKS"
#define NDAttributesFileString "ND_ATTRIBUTES_FILE"
#define NDAttributesMacrosString "ND_ATTRIBUTES_MACROS"
#define NDAttributesStatusString "ND_ATTRIBUTES_STATUS"
#define NDFileFormatString "FILE_FORMAT"
#define NDFilePathExistsString "FILE_PATH_EXISTS"
#define NDFilePathString "FILE_PATH"
#define NDFileCreateDirString "CREATE_DIR"
#define NDFileNameString "FILE_NAME"
#define NDFileNumberString "FILE_NUMBER"
#define NDFileTempSuffixString "FILE_TEMP_SUFFIX"
#define NDFileLazyOpenString "FILE_LAZY_OPEN"
#define NDAutoIncrementString "AUTO_INCREMENT"
#define NDFileTemplateString "FILE_TEMPLATE"
#define NDFullFileNameString "FULL_FILE_NAME"
#define NDWriteFileString "WRITE_FILE"
#define NDReadFileString "READ_FILE"
#define NDAutoSaveString "AUTO_SAVE"
#define NDFileNumCapturedString "NUM_CAPTURED"
#define NDFileWriteModeString "WRITE_MODE"
#define NDFileNumCaptureString "NUM_CAPTURE"
#define NDFileCaptureString "CAPTURE"
#define NDFileDeleteDriverFileString "DELETE_DRIVER_FILE"
#define NDFileWriteStatusString "WRITE_STATUS"
#define NDFileWriteMessageString "WRITE_MESSAGE"
#define NDPoolEmptyFreeListString "POOL_EMPTY_FREELIST"
#define ADAcquireBusyString "ACQUIRE_BUSY"
#define NDBayerPatternString "BAYER_PATTERN"
#define NDArraySizeZString "ARRAY_SIZE_Z"
#define NDCodecString "CODEC"
#define NDCompressedSizeString "COMPRESSED_SIZE"
#define NDUniqueIdString "UNIQUE_ID"
#define NDTimeStampString "TIME_STAMP"
#define NDEpicsTSSecString "EPICS_TS_SEC"
#define NDEpicsTSNsecString "EPICS_TS_NSEC"
#define NDPoolMaxMemoryString "POOL_MAX_MEMORY"
#define NDPoolUsedMemoryString "POOL_USED_MEMORY"
#define NDPoolAllocBuffersString "POOL_ALLOC_BUFFERS"
#define NDPoolFreeBuffersString "POOL_FREE_BUFFERS"
#define NDNDimensionsString "ARRAY_NDIMENSIONS"
#define NDDimensionsString "ARRAY_DIMENSIONS"

class asynNDArrayDriverParamSet : public virtual asynParamSet {
public:
    asynNDArrayDriverParamSet() {
        this->add(NDArrayDataString, asynParamGenericPointer, &NDArrayData);
        this->add(NDPortNameSelfString, asynParamOctet, &NDPortNameSelf);
        this->add(ADManufacturerString, asynParamOctet, &ADManufacturer);
        this->add(ADModelString, asynParamOctet, &ADModel);
        this->add(ADSerialNumberString, asynParamOctet, &ADSerialNumber);
        this->add(ADFirmwareVersionString, asynParamOctet, &ADFirmwareVersion);
        this->add(ADSDKVersionString, asynParamOctet, &ADSDKVersion);
        this->add(NDDriverVersionString, asynParamOctet, &NDDriverVersion);
        this->add(NDADCoreVersionString, asynParamOctet, &NDADCoreVersion);
        this->add(NDArraySizeXString, asynParamInt32, &NDArraySizeX);
        this->add(NDArraySizeYString, asynParamInt32, &NDArraySizeY);
        this->add(NDArraySizeString, asynParamInt32, &NDArraySize);
        this->add(NDDataTypeString, asynParamInt32, &NDDataType);
        this->add(NDColorModeString, asynParamInt32, &NDColorMode);
        this->add(NDNumQueuedArraysString, asynParamInt32, &NDNumQueuedArrays);
        this->add(ADWaitForPluginsString, asynParamInt32, &ADWaitForPlugins);
        this->add(ADAcquireString, asynParamInt32, &ADAcquire);
        this->add(NDArrayCounterString, asynParamInt32, &NDArrayCounter);
        this->add(NDArrayCallbacksString, asynParamInt32, &NDArrayCallbacks);
        this->add(NDAttributesFileString, asynParamOctet, &NDAttributesFile);
        this->add(NDAttributesMacrosString, asynParamOctet, &NDAttributesMacros);
        this->add(NDAttributesStatusString, asynParamInt32, &NDAttributesStatus);
        this->add(NDFileFormatString, asynParamInt32, &NDFileFormat);
        this->add(NDFilePathExistsString, asynParamInt32, &NDFilePathExists);
        this->add(NDFilePathString, asynParamOctet, &NDFilePath);
        this->add(NDFileCreateDirString, asynParamInt32, &NDFileCreateDir);
        this->add(NDFileNameString, asynParamOctet, &NDFileName);
        this->add(NDFileNumberString, asynParamInt32, &NDFileNumber);
        this->add(NDFileTempSuffixString, asynParamOctet, &NDFileTempSuffix);
        this->add(NDFileLazyOpenString, asynParamInt32, &NDFileLazyOpen);
        this->add(NDAutoIncrementString, asynParamInt32, &NDAutoIncrement);
        this->add(NDFileTemplateString, asynParamOctet, &NDFileTemplate);
        this->add(NDFullFileNameString, asynParamOctet, &NDFullFileName);
        this->add(NDWriteFileString, asynParamInt32, &NDWriteFile);
        this->add(NDReadFileString, asynParamInt32, &NDReadFile);
        this->add(NDAutoSaveString, asynParamInt32, &NDAutoSave);
        this->add(NDFileNumCapturedString, asynParamInt32, &NDFileNumCaptured);
        this->add(NDFileWriteModeString, asynParamInt32, &NDFileWriteMode);
        this->add(NDFileNumCaptureString, asynParamInt32, &NDFileNumCapture);
        this->add(NDFileCaptureString, asynParamInt32, &NDFileCapture);
        this->add(NDFileDeleteDriverFileString, asynParamInt32, &NDFileDeleteDriverFile);
        this->add(NDFileWriteStatusString, asynParamInt32, &NDFileWriteStatus);
        this->add(NDFileWriteMessageString, asynParamOctet, &NDFileWriteMessage);
        this->add(NDPoolEmptyFreeListString, asynParamInt32, &NDPoolEmptyFreeList);
        this->add(ADAcquireBusyString, asynParamInt32, &ADAcquireBusy);
        this->add(NDBayerPatternString, asynParamInt32, &NDBayerPattern);
        this->add(NDArraySizeZString, asynParamInt32, &NDArraySizeZ);
        this->add(NDCodecString, asynParamOctet, &NDCodec);
        this->add(NDCompressedSizeString, asynParamInt32, &NDCompressedSize);
        this->add(NDUniqueIdString, asynParamInt32, &NDUniqueId);
        this->add(NDTimeStampString, asynParamFloat64, &NDTimeStamp);
        this->add(NDEpicsTSSecString, asynParamInt32, &NDEpicsTSSec);
        this->add(NDEpicsTSNsecString, asynParamInt32, &NDEpicsTSNsec);
        this->add(NDPoolMaxMemoryString, asynParamFloat64, &NDPoolMaxMemory);
        this->add(NDPoolUsedMemoryString, asynParamFloat64, &NDPoolUsedMemory);
        this->add(NDPoolAllocBuffersString, asynParamInt32, &NDPoolAllocBuffers);
        this->add(NDPoolFreeBuffersString, asynParamInt32, &NDPoolFreeBuffers);
        this->add(NDNDimensionsString, asynParamInt32, &NDNDimensions);
        this->add(NDDimensionsString, asynParamInt32, &NDDimensions);
    }

    int NDArrayData;
    #define FIRST_ASYNNDARRAYDRIVERPARAMSET_PARAM NDArrayData
    int NDPortNameSelf;
    int ADManufacturer;
    int ADModel;
    int ADSerialNumber;
    int ADFirmwareVersion;
    int ADSDKVersion;
    int NDDriverVersion;
    int NDADCoreVersion;
    int NDArraySizeX;
    int NDArraySizeY;
    int NDArraySize;
    int NDDataType;
    int NDColorMode;
    int NDNumQueuedArrays;
    int ADWaitForPlugins;
    int ADAcquire;
    int NDArrayCounter;
    int NDArrayCallbacks;
    int NDAttributesFile;
    int NDAttributesMacros;
    int NDAttributesStatus;
    int NDFileFormat;
    int NDFilePathExists;
    int NDFilePath;
    int NDFileCreateDir;
    int NDFileName;
    int NDFileNumber;
    int NDFileTempSuffix;
    int NDFileLazyOpen;
    int NDAutoIncrement;
    int NDFileTemplate;
    int NDFullFileName;
    int NDWriteFile;
    int NDReadFile;
    int NDAutoSave;
    int NDFileNumCaptured;
    int NDFileWriteMode;
    int NDFileNumCapture;
    int NDFileCapture;
    int NDFileDeleteDriverFile;
    int NDFileWriteStatus;
    int NDFileWriteMessage;
    int NDPoolEmptyFreeList;
    int ADAcquireBusy;
    int NDBayerPattern;
    int NDArraySizeZ;
    int NDCodec;
    int NDCompressedSize;
    int NDUniqueId;
    int NDTimeStamp;
    int NDEpicsTSSec;
    int NDEpicsTSNsec;
    int NDPoolMaxMemory;
    int NDPoolUsedMemory;
    int NDPoolAllocBuffers;
    int NDPoolFreeBuffers;
    int NDNDimensions;
    int NDDimensions;
};

#endif // AsynNDArrayDriverParamSet_H

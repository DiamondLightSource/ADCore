#ifndef AsynNDArrayDriverParamSet_H
#define AsynNDArrayDriverParamSet_H

#include "asynParamSet.h"

#define NDArrayDataString "ARRAY_DATA"
#define ADWaitForPluginsString "WAIT_FOR_PLUGINS"
#define NDPoolEmptyFreeListString "POOL_EMPTY_FREELIST"
#define NDAttributesMacrosString "ND_ATTRIBUTES_MACROS"
#define NDAttributesFileString "ND_ATTRIBUTES_FILE"
#define NDADCoreVersionString "ADCORE_VERSION"
#define NDDriverVersionString "DRIVER_VERSION"
#define NDPortNameSelfString "PORT_NAME_SELF"
#define ADManufacturerString "MANUFACTURER"
#define ADModelString "MODEL"
#define ADSerialNumberString "SERIAL_NUMBER"
#define ADSDKVersionString "SDK_VERSION"
#define ADFirmwareVersionString "FIRMWARE_VERSION"
#define ADAcquireBusyString "ACQUIRE_BUSY"
#define NDBayerPatternString "BAYER_PATTERN"
#define NDArraySizeXString "ARRAY_SIZE_X"
#define NDArraySizeYString "ARRAY_SIZE_Y"
#define NDArraySizeZString "ARRAY_SIZE_Z"
#define NDArraySizeString "ARRAY_SIZE"
#define NDCodecString "CODEC"
#define NDCompressedSizeString "COMPRESSED_SIZE"
#define NDUniqueIdString "UNIQUE_ID"
#define NDTimeStampString "TIME_STAMP"
#define NDEpicsTSSecString "EPICS_TS_SEC"
#define NDEpicsTSNsecString "EPICS_TS_NSEC"
#define NDAttributesStatusString "ND_ATTRIBUTES_STATUS"
#define NDPoolMaxMemoryString "POOL_MAX_MEMORY"
#define NDPoolUsedMemoryString "POOL_USED_MEMORY"
#define NDPoolAllocBuffersString "POOL_ALLOC_BUFFERS"
#define NDPoolFreeBuffersString "POOL_FREE_BUFFERS"
#define NDNumQueuedArraysString "NUM_QUEUED_ARRAYS"
#define ADAcquireString "ACQUIRE"
#define NDNDimensionsString "ARRAY_NDIMENSIONS"
#define NDDimensionsString "ARRAY_DIMENSIONS"
#define NDDataTypeString "DATA_TYPE"
#define NDColorModeString "COLOR_MODE"
#define NDArrayCounterString "ARRAY_COUNTER"
#define NDArrayCallbacksString "ARRAY_CALLBACKS"
#define NDFilePathExistsString "FILE_PATH_EXISTS"
#define NDFullFileNameString "FULL_FILE_NAME"
#define NDFileNumCapturedString "NUM_CAPTURED"
#define NDFileWriteStatusString "WRITE_STATUS"
#define NDFileWriteMessageString "WRITE_MESSAGE"
#define NDFilePathString "FILE_PATH"
#define NDFileCreateDirString "CREATE_DIR"
#define NDFileNameString "FILE_NAME"
#define NDFileNumberString "FILE_NUMBER"
#define NDAutoIncrementString "AUTO_INCREMENT"
#define NDFileTemplateString "FILE_TEMPLATE"
#define NDAutoSaveString "AUTO_SAVE"
#define NDWriteFileString "WRITE_FILE"
#define NDReadFileString "READ_FILE"
#define NDFileFormatString "FILE_FORMAT"
#define NDFileWriteModeString "WRITE_MODE"
#define NDFileCaptureString "CAPTURE"
#define NDFileNumCaptureString "NUM_CAPTURE"
#define NDFileDeleteDriverFileString "DELETE_DRIVER_FILE"
#define NDFileLazyOpenString "FILE_LAZY_OPEN"
#define NDFileTempSuffixString "FILE_TEMP_SUFFIX"

class asynNDArrayDriverParamSet : public virtual asynParamSet {
public:
    asynNDArrayDriverParamSet() {
        this->add(NDArrayDataString, asynParamGenericPointer, &NDArrayData);
        this->add(ADWaitForPluginsString, asynParamInt32, &ADWaitForPlugins);
        this->add(NDPoolEmptyFreeListString, asynParamInt32, &NDPoolEmptyFreeList);
        this->add(NDAttributesMacrosString, asynParamOctet, &NDAttributesMacros);
        this->add(NDAttributesFileString, asynParamOctet, &NDAttributesFile);
        this->add(NDADCoreVersionString, asynParamOctet, &NDADCoreVersion);
        this->add(NDDriverVersionString, asynParamOctet, &NDDriverVersion);
        this->add(NDPortNameSelfString, asynParamOctet, &NDPortNameSelf);
        this->add(ADManufacturerString, asynParamOctet, &ADManufacturer);
        this->add(ADModelString, asynParamOctet, &ADModel);
        this->add(ADSerialNumberString, asynParamOctet, &ADSerialNumber);
        this->add(ADSDKVersionString, asynParamOctet, &ADSDKVersion);
        this->add(ADFirmwareVersionString, asynParamOctet, &ADFirmwareVersion);
        this->add(ADAcquireBusyString, asynParamInt32, &ADAcquireBusy);
        this->add(NDBayerPatternString, asynParamInt32, &NDBayerPattern);
        this->add(NDArraySizeXString, asynParamInt32, &NDArraySizeX);
        this->add(NDArraySizeYString, asynParamInt32, &NDArraySizeY);
        this->add(NDArraySizeZString, asynParamInt32, &NDArraySizeZ);
        this->add(NDArraySizeString, asynParamInt32, &NDArraySize);
        this->add(NDCodecString, asynParamOctet, &NDCodec);
        this->add(NDCompressedSizeString, asynParamInt32, &NDCompressedSize);
        this->add(NDUniqueIdString, asynParamInt32, &NDUniqueId);
        this->add(NDTimeStampString, asynParamFloat64, &NDTimeStamp);
        this->add(NDEpicsTSSecString, asynParamInt32, &NDEpicsTSSec);
        this->add(NDEpicsTSNsecString, asynParamInt32, &NDEpicsTSNsec);
        this->add(NDAttributesStatusString, asynParamInt32, &NDAttributesStatus);
        this->add(NDPoolMaxMemoryString, asynParamFloat64, &NDPoolMaxMemory);
        this->add(NDPoolUsedMemoryString, asynParamFloat64, &NDPoolUsedMemory);
        this->add(NDPoolAllocBuffersString, asynParamInt32, &NDPoolAllocBuffers);
        this->add(NDPoolFreeBuffersString, asynParamInt32, &NDPoolFreeBuffers);
        this->add(NDNumQueuedArraysString, asynParamInt32, &NDNumQueuedArrays);
        this->add(ADAcquireString, asynParamInt32, &ADAcquire);
        this->add(NDNDimensionsString, asynParamInt32, &NDNDimensions);
        this->add(NDDimensionsString, asynParamOctet, &NDDimensions);
        this->add(NDDataTypeString, asynParamInt32, &NDDataType);
        this->add(NDColorModeString, asynParamInt32, &NDColorMode);
        this->add(NDArrayCounterString, asynParamInt32, &NDArrayCounter);
        this->add(NDArrayCallbacksString, asynParamInt32, &NDArrayCallbacks);
        this->add(NDFilePathExistsString, asynParamInt32, &NDFilePathExists);
        this->add(NDFullFileNameString, asynParamOctet, &NDFullFileName);
        this->add(NDFileNumCapturedString, asynParamInt32, &NDFileNumCaptured);
        this->add(NDFileWriteStatusString, asynParamInt32, &NDFileWriteStatus);
        this->add(NDFileWriteMessageString, asynParamOctet, &NDFileWriteMessage);
        this->add(NDFilePathString, asynParamOctet, &NDFilePath);
        this->add(NDFileCreateDirString, asynParamInt32, &NDFileCreateDir);
        this->add(NDFileNameString, asynParamOctet, &NDFileName);
        this->add(NDFileNumberString, asynParamInt32, &NDFileNumber);
        this->add(NDAutoIncrementString, asynParamInt32, &NDAutoIncrement);
        this->add(NDFileTemplateString, asynParamOctet, &NDFileTemplate);
        this->add(NDAutoSaveString, asynParamInt32, &NDAutoSave);
        this->add(NDWriteFileString, asynParamInt32, &NDWriteFile);
        this->add(NDReadFileString, asynParamInt32, &NDReadFile);
        this->add(NDFileFormatString, asynParamInt32, &NDFileFormat);
        this->add(NDFileWriteModeString, asynParamInt32, &NDFileWriteMode);
        this->add(NDFileCaptureString, asynParamInt32, &NDFileCapture);
        this->add(NDFileNumCaptureString, asynParamInt32, &NDFileNumCapture);
        this->add(NDFileDeleteDriverFileString, asynParamInt32, &NDFileDeleteDriverFile);
        this->add(NDFileLazyOpenString, asynParamInt32, &NDFileLazyOpen);
        this->add(NDFileTempSuffixString, asynParamOctet, &NDFileTempSuffix);
    }

    int NDArrayData;
    #define FIRST_ASYNNDARRAYDRIVERPARAMSET_PARAM NDArrayData
    int ADWaitForPlugins;
    int NDPoolEmptyFreeList;
    int NDAttributesMacros;
    int NDAttributesFile;
    int NDADCoreVersion;
    int NDDriverVersion;
    int NDPortNameSelf;
    int ADManufacturer;
    int ADModel;
    int ADSerialNumber;
    int ADSDKVersion;
    int ADFirmwareVersion;
    int ADAcquireBusy;
    int NDBayerPattern;
    int NDArraySizeX;
    int NDArraySizeY;
    int NDArraySizeZ;
    int NDArraySize;
    int NDCodec;
    int NDCompressedSize;
    int NDUniqueId;
    int NDTimeStamp;
    int NDEpicsTSSec;
    int NDEpicsTSNsec;
    int NDAttributesStatus;
    int NDPoolMaxMemory;
    int NDPoolUsedMemory;
    int NDPoolAllocBuffers;
    int NDPoolFreeBuffers;
    int NDNumQueuedArrays;
    int ADAcquire;
    int NDNDimensions;
    int NDDimensions;
    int NDDataType;
    int NDColorMode;
    int NDArrayCounter;
    int NDArrayCallbacks;
    int NDFilePathExists;
    int NDFullFileName;
    int NDFileNumCaptured;
    int NDFileWriteStatus;
    int NDFileWriteMessage;
    int NDFilePath;
    int NDFileCreateDir;
    int NDFileName;
    int NDFileNumber;
    int NDAutoIncrement;
    int NDFileTemplate;
    int NDAutoSave;
    int NDWriteFile;
    int NDReadFile;
    int NDFileFormat;
    int NDFileWriteMode;
    int NDFileCapture;
    int NDFileNumCapture;
    int NDFileDeleteDriverFile;
    int NDFileLazyOpen;
    int NDFileTempSuffix;
};

#endif // AsynNDArrayDriverParamSet_H

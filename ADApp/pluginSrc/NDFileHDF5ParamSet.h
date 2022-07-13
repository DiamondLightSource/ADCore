#ifndef NDFileHDF5ParamSet_H
#define NDFileHDF5ParamSet_H

#include "NDPluginFileParamSet.h"

#define NDFileHDF5_compressionTypeString "HDF5_compressionType"
#define NDFileHDF5_SWMRSupportedString "HDF5_SWMRSupported"
#define NDFileHDF5_nbitsPrecisionString "HDF5_nbitsPrecision"
#define NDFileHDF5_nbitsOffsetString "HDF5_nbitsOffset"
#define NDFileHDF5_SWMRModeString "HDF5_SWMRMode"
#define NDFileHDF5_SWMRRunningString "HDF5_SWMRRunning"
#define NDFileHDF5_szipNumPixelsString "HDF5_szipNumPixels"
#define NDFileHDF5_SWMRCbCounterString "HDF5_SWMRCbCounter"
#define NDFileHDF5_zCompressLevelString "HDF5_zCompressLevel"
#define NDFileHDF5_SWMRFlushNowString "HDF5_SWMRFlushNow"
#define NDFileHDF5_jpegQualityString "HDF5_jpegQuality"
#define NDFileHDF5_chunkSizeAutoString "HDF5_chunkSizeAuto"
#define NDFileHDF5_storePerformanceString "HDF5_storePerformance"
#define NDFileHDF5_nColChunksString "HDF5_nColChunks"
#define NDFileHDF5_storeAttributesString "HDF5_storeAttributes"
#define NDFileHDF5_bloscShuffleTypeString "HDF5_bloscShuffleType"
#define NDFileHDF5_nRowChunksString "HDF5_nRowChunks"
#define NDFileHDF5_totalRuntimeString "HDF5_totalRuntime"
#define NDFileHDF5_bloscCompressorString "HDF5_bloscCompressor"
#define NDFileHDF5_chunkSize2String "HDF5_chunkSize2"
#define NDFileHDF5_totalIoSpeedString "HDF5_totalIoSpeed"
#define NDFileHDF5_bloscCompressLevelString "HDF5_bloscCompressLevel"
#define NDFileHDF5_nFramesChunksString "HDF5_nFramesChunks"
#define NDFileHDF5_chunkBoundaryAlignString "HDF5_chunkBoundaryAlign"
#define NDFileHDF5_layoutErrorMsgString "HDF5_layoutErrorMsg"
#define NDFileHDF5_layoutValidString "HDF5_layoutValid"
#define NDFileHDF5_chunkBoundaryThresholdString "HDF5_chunkBoundaryThreshold"
#define NDFileHDF5_flushNthFrameString "HDF5_flushNthFrame"
#define NDFileHDF5_layoutFilenameString "HDF5_layoutFilename"
#define NDFileHDF5_fillValueString "HDF5_fillValue"
#define NDFileHDF5_chunkSize3String "HDF5_chunkSize3"
#define NDFileHDF5_chunkSize4String "HDF5_chunkSize4"
#define NDFileHDF5_chunkSize5String "HDF5_chunkSize5"
#define NDFileHDF5_chunkSize6String "HDF5_chunkSize6"
#define NDFileHDF5_chunkSize7String "HDF5_chunkSize7"
#define NDFileHDF5_chunkSize8String "HDF5_chunkSize8"
#define NDFileHDF5_chunkSize9String "HDF5_chunkSize9"
#define NDFileHDF5_nExtraDimsString "HDF5_nExtraDims"
#define NDFileHDF5_dimAttDatasetsString "HDF5_dimAttDatasets"
#define NDFileHDF5_ExtraDimSizeNString "HDF5_extraDimSizeN"
#define NDFileHDF5_extraDimNameNString "HDF5_extraDimNameN"
#define NDFileHDF5_ExtraDimSizeXString "HDF5_extraDimSizeX"
#define NDFileHDF5_extraDimChunkXString "HDF5_extraDimChunkX"
#define NDFileHDF5_extraDimNameXString "HDF5_extraDimNameX"
#define NDFileHDF5_ExtraDimSizeYString "HDF5_extraDimSizeY"
#define NDFileHDF5_extraDimChunkYString "HDF5_extraDimChunkY"
#define NDFileHDF5_extraDimNameYString "HDF5_extraDimNameY"
#define NDFileHDF5_ExtraDimSize3String "HDF5_extraDimSize3"
#define NDFileHDF5_extraDimChunk3String "HDF5_extraDimChunk3"
#define NDFileHDF5_extraDimName3String "HDF5_extraDimName3"
#define NDFileHDF5_ExtraDimSize4String "HDF5_extraDimSize4"
#define NDFileHDF5_extraDimChunk4String "HDF5_extraDimChunk4"
#define NDFileHDF5_extraDimName4String "HDF5_extraDimName4"
#define NDFileHDF5_ExtraDimSize5String "HDF5_extraDimSize5"
#define NDFileHDF5_extraDimChunk5String "HDF5_extraDimChunk5"
#define NDFileHDF5_extraDimName5String "HDF5_extraDimName5"
#define NDFileHDF5_ExtraDimSize6String "HDF5_extraDimSize6"
#define NDFileHDF5_extraDimChunk6String "HDF5_extraDimChunk6"
#define NDFileHDF5_extraDimName6String "HDF5_extraDimName6"
#define NDFileHDF5_ExtraDimSize7String "HDF5_extraDimSize7"
#define NDFileHDF5_extraDimChunk7String "HDF5_extraDimChunk7"
#define NDFileHDF5_extraDimName7String "HDF5_extraDimName7"
#define NDFileHDF5_ExtraDimSize8String "HDF5_extraDimSize8"
#define NDFileHDF5_extraDimChunk8String "HDF5_extraDimChunk8"
#define NDFileHDF5_extraDimName8String "HDF5_extraDimName8"
#define NDFileHDF5_ExtraDimSize9String "HDF5_extraDimSize9"
#define NDFileHDF5_extraDimChunk9String "HDF5_extraDimChunk9"
#define NDFileHDF5_extraDimName9String "HDF5_extraDimName9"
#define NDFileHDF5_posRunningString "HDF5_posRunning"
#define NDFileHDF5_posIndexDimNString "HDF5_posIndexDimN"
#define NDFileHDF5_posNameDimNString "HDF5_posNameDimN"
#define NDFileHDF5_posIndexDimXString "HDF5_posIndexDimX"
#define NDFileHDF5_posNameDimXString "HDF5_posNameDimX"
#define NDFileHDF5_posIndexDimYString "HDF5_posIndexDimY"
#define NDFileHDF5_posNameDimYString "HDF5_posNameDimY"
#define NDFileHDF5_posIndexDim3String "HDF5_posIndexDim3"
#define NDFileHDF5_posNameDim3String "HDF5_posNameDim3"
#define NDFileHDF5_posIndexDim4String "HDF5_posIndexDim4"
#define NDFileHDF5_posNameDim4String "HDF5_posNameDim4"
#define NDFileHDF5_posIndexDim5String "HDF5_posIndexDim5"
#define NDFileHDF5_posNameDim5String "HDF5_posNameDim5"
#define NDFileHDF5_posIndexDim6String "HDF5_posIndexDim6"
#define NDFileHDF5_posNameDim6String "HDF5_posNameDim6"
#define NDFileHDF5_posIndexDim7String "HDF5_posIndexDim7"
#define NDFileHDF5_posNameDim7String "HDF5_posNameDim7"
#define NDFileHDF5_posIndexDim8String "HDF5_posIndexDim8"
#define NDFileHDF5_posNameDim8String "HDF5_posNameDim8"
#define NDFileHDF5_posIndexDim9String "HDF5_posIndexDim9"
#define NDFileHDF5_posNameDim9String "HDF5_posNameDim9"
#define NDFileHDF5_NDAttributeChunkString "HDF5_NDAttributeChunk"
#define NDFileHDF5_extraDimChunkNString "HDF5_extraDimChunkN"

class NDFileHDF5ParamSet : public virtual NDPluginFileParamSet {
public:
    NDFileHDF5ParamSet() {
        this->add(NDFileHDF5_compressionTypeString, asynParamInt32, &NDFileHDF5_compressionType);
        this->add(NDFileHDF5_SWMRSupportedString, asynParamInt32, &NDFileHDF5_SWMRSupported);
        this->add(NDFileHDF5_nbitsPrecisionString, asynParamInt32, &NDFileHDF5_nbitsPrecision);
        this->add(NDFileHDF5_nbitsOffsetString, asynParamInt32, &NDFileHDF5_nbitsOffset);
        this->add(NDFileHDF5_SWMRModeString, asynParamInt32, &NDFileHDF5_SWMRMode);
        this->add(NDFileHDF5_SWMRRunningString, asynParamInt32, &NDFileHDF5_SWMRRunning);
        this->add(NDFileHDF5_szipNumPixelsString, asynParamInt32, &NDFileHDF5_szipNumPixels);
        this->add(NDFileHDF5_SWMRCbCounterString, asynParamInt32, &NDFileHDF5_SWMRCbCounter);
        this->add(NDFileHDF5_zCompressLevelString, asynParamInt32, &NDFileHDF5_zCompressLevel);
        this->add(NDFileHDF5_SWMRFlushNowString, asynParamInt32, &NDFileHDF5_SWMRFlushNow);
        this->add(NDFileHDF5_jpegQualityString, asynParamInt32, &NDFileHDF5_jpegQuality);
        this->add(NDFileHDF5_chunkSizeAutoString, asynParamInt32, &NDFileHDF5_chunkSizeAuto);
        this->add(NDFileHDF5_storePerformanceString, asynParamInt32, &NDFileHDF5_storePerformance);
        this->add(NDFileHDF5_nColChunksString, asynParamInt32, &NDFileHDF5_nColChunks);
        this->add(NDFileHDF5_storeAttributesString, asynParamInt32, &NDFileHDF5_storeAttributes);
        this->add(NDFileHDF5_bloscShuffleTypeString, asynParamInt32, &NDFileHDF5_bloscShuffleType);
        this->add(NDFileHDF5_nRowChunksString, asynParamInt32, &NDFileHDF5_nRowChunks);
        this->add(NDFileHDF5_totalRuntimeString, asynParamFloat64, &NDFileHDF5_totalRuntime);
        this->add(NDFileHDF5_bloscCompressorString, asynParamInt32, &NDFileHDF5_bloscCompressor);
        this->add(NDFileHDF5_chunkSize2String, asynParamInt32, &NDFileHDF5_chunkSize2);
        this->add(NDFileHDF5_totalIoSpeedString, asynParamFloat64, &NDFileHDF5_totalIoSpeed);
        this->add(NDFileHDF5_bloscCompressLevelString, asynParamInt32, &NDFileHDF5_bloscCompressLevel);
        this->add(NDFileHDF5_nFramesChunksString, asynParamInt32, &NDFileHDF5_nFramesChunks);
        this->add(NDFileHDF5_chunkBoundaryAlignString, asynParamInt32, &NDFileHDF5_chunkBoundaryAlign);
        this->add(NDFileHDF5_layoutErrorMsgString, asynParamOctet, &NDFileHDF5_layoutErrorMsg);
        this->add(NDFileHDF5_layoutValidString, asynParamInt32, &NDFileHDF5_layoutValid);
        this->add(NDFileHDF5_chunkBoundaryThresholdString, asynParamInt32, &NDFileHDF5_chunkBoundaryThreshold);
        this->add(NDFileHDF5_flushNthFrameString, asynParamInt32, &NDFileHDF5_flushNthFrame);
        this->add(NDFileHDF5_layoutFilenameString, asynParamOctet, &NDFileHDF5_layoutFilename);
        this->add(NDFileHDF5_fillValueString, asynParamFloat64, &NDFileHDF5_fillValue);
        this->add(NDFileHDF5_chunkSize3String, asynParamInt32, &NDFileHDF5_chunkSize3);
        this->add(NDFileHDF5_chunkSize4String, asynParamInt32, &NDFileHDF5_chunkSize4);
        this->add(NDFileHDF5_chunkSize5String, asynParamInt32, &NDFileHDF5_chunkSize5);
        this->add(NDFileHDF5_chunkSize6String, asynParamInt32, &NDFileHDF5_chunkSize6);
        this->add(NDFileHDF5_chunkSize7String, asynParamInt32, &NDFileHDF5_chunkSize7);
        this->add(NDFileHDF5_chunkSize8String, asynParamInt32, &NDFileHDF5_chunkSize8);
        this->add(NDFileHDF5_chunkSize9String, asynParamInt32, &NDFileHDF5_chunkSize9);
        this->add(NDFileHDF5_nExtraDimsString, asynParamInt32, &NDFileHDF5_nExtraDims);
        this->add(NDFileHDF5_dimAttDatasetsString, asynParamInt32, &NDFileHDF5_dimAttDatasets);
        this->add(NDFileHDF5_ExtraDimSizeNString, asynParamInt32, &NDFileHDF5_ExtraDimSizeN);
        this->add(NDFileHDF5_extraDimNameNString, asynParamOctet, &NDFileHDF5_extraDimNameN);
        this->add(NDFileHDF5_ExtraDimSizeXString, asynParamInt32, &NDFileHDF5_ExtraDimSizeX);
        this->add(NDFileHDF5_extraDimChunkXString, asynParamInt32, &NDFileHDF5_extraDimChunkX);
        this->add(NDFileHDF5_extraDimNameXString, asynParamOctet, &NDFileHDF5_extraDimNameX);
        this->add(NDFileHDF5_ExtraDimSizeYString, asynParamInt32, &NDFileHDF5_ExtraDimSizeY);
        this->add(NDFileHDF5_extraDimChunkYString, asynParamInt32, &NDFileHDF5_extraDimChunkY);
        this->add(NDFileHDF5_extraDimNameYString, asynParamOctet, &NDFileHDF5_extraDimNameY);
        this->add(NDFileHDF5_ExtraDimSize3String, asynParamInt32, &NDFileHDF5_ExtraDimSize3);
        this->add(NDFileHDF5_extraDimChunk3String, asynParamInt32, &NDFileHDF5_extraDimChunk3);
        this->add(NDFileHDF5_extraDimName3String, asynParamOctet, &NDFileHDF5_extraDimName3);
        this->add(NDFileHDF5_ExtraDimSize4String, asynParamInt32, &NDFileHDF5_ExtraDimSize4);
        this->add(NDFileHDF5_extraDimChunk4String, asynParamInt32, &NDFileHDF5_extraDimChunk4);
        this->add(NDFileHDF5_extraDimName4String, asynParamOctet, &NDFileHDF5_extraDimName4);
        this->add(NDFileHDF5_ExtraDimSize5String, asynParamInt32, &NDFileHDF5_ExtraDimSize5);
        this->add(NDFileHDF5_extraDimChunk5String, asynParamInt32, &NDFileHDF5_extraDimChunk5);
        this->add(NDFileHDF5_extraDimName5String, asynParamOctet, &NDFileHDF5_extraDimName5);
        this->add(NDFileHDF5_ExtraDimSize6String, asynParamInt32, &NDFileHDF5_ExtraDimSize6);
        this->add(NDFileHDF5_extraDimChunk6String, asynParamInt32, &NDFileHDF5_extraDimChunk6);
        this->add(NDFileHDF5_extraDimName6String, asynParamOctet, &NDFileHDF5_extraDimName6);
        this->add(NDFileHDF5_ExtraDimSize7String, asynParamInt32, &NDFileHDF5_ExtraDimSize7);
        this->add(NDFileHDF5_extraDimChunk7String, asynParamInt32, &NDFileHDF5_extraDimChunk7);
        this->add(NDFileHDF5_extraDimName7String, asynParamOctet, &NDFileHDF5_extraDimName7);
        this->add(NDFileHDF5_ExtraDimSize8String, asynParamInt32, &NDFileHDF5_ExtraDimSize8);
        this->add(NDFileHDF5_extraDimChunk8String, asynParamInt32, &NDFileHDF5_extraDimChunk8);
        this->add(NDFileHDF5_extraDimName8String, asynParamOctet, &NDFileHDF5_extraDimName8);
        this->add(NDFileHDF5_ExtraDimSize9String, asynParamInt32, &NDFileHDF5_ExtraDimSize9);
        this->add(NDFileHDF5_extraDimChunk9String, asynParamInt32, &NDFileHDF5_extraDimChunk9);
        this->add(NDFileHDF5_extraDimName9String, asynParamOctet, &NDFileHDF5_extraDimName9);
        this->add(NDFileHDF5_posRunningString, asynParamInt32, &NDFileHDF5_posRunning);
        this->add(NDFileHDF5_posIndexDimNString, asynParamOctet, &NDFileHDF5_posIndexDimN);
        this->add(NDFileHDF5_posNameDimNString, asynParamOctet, &NDFileHDF5_posNameDimN);
        this->add(NDFileHDF5_posIndexDimXString, asynParamOctet, &NDFileHDF5_posIndexDimX);
        this->add(NDFileHDF5_posNameDimXString, asynParamOctet, &NDFileHDF5_posNameDimX);
        this->add(NDFileHDF5_posIndexDimYString, asynParamOctet, &NDFileHDF5_posIndexDimY);
        this->add(NDFileHDF5_posNameDimYString, asynParamOctet, &NDFileHDF5_posNameDimY);
        this->add(NDFileHDF5_posIndexDim3String, asynParamOctet, &NDFileHDF5_posIndexDim3);
        this->add(NDFileHDF5_posNameDim3String, asynParamOctet, &NDFileHDF5_posNameDim3);
        this->add(NDFileHDF5_posIndexDim4String, asynParamOctet, &NDFileHDF5_posIndexDim4);
        this->add(NDFileHDF5_posNameDim4String, asynParamOctet, &NDFileHDF5_posNameDim4);
        this->add(NDFileHDF5_posIndexDim5String, asynParamOctet, &NDFileHDF5_posIndexDim5);
        this->add(NDFileHDF5_posNameDim5String, asynParamOctet, &NDFileHDF5_posNameDim5);
        this->add(NDFileHDF5_posIndexDim6String, asynParamOctet, &NDFileHDF5_posIndexDim6);
        this->add(NDFileHDF5_posNameDim6String, asynParamOctet, &NDFileHDF5_posNameDim6);
        this->add(NDFileHDF5_posIndexDim7String, asynParamOctet, &NDFileHDF5_posIndexDim7);
        this->add(NDFileHDF5_posNameDim7String, asynParamOctet, &NDFileHDF5_posNameDim7);
        this->add(NDFileHDF5_posIndexDim8String, asynParamOctet, &NDFileHDF5_posIndexDim8);
        this->add(NDFileHDF5_posNameDim8String, asynParamOctet, &NDFileHDF5_posNameDim8);
        this->add(NDFileHDF5_posIndexDim9String, asynParamOctet, &NDFileHDF5_posIndexDim9);
        this->add(NDFileHDF5_posNameDim9String, asynParamOctet, &NDFileHDF5_posNameDim9);
        this->add(NDFileHDF5_NDAttributeChunkString, asynParamInt32, &NDFileHDF5_NDAttributeChunk);
        this->add(NDFileHDF5_extraDimChunkNString, asynParamInt32, &NDFileHDF5_extraDimChunkN);
    }

    int NDFileHDF5_compressionType;
    #define FIRST_NDFILEHDF5PARAMSET_PARAM NDFileHDF5_compressionType
    int NDFileHDF5_SWMRSupported;
    int NDFileHDF5_nbitsPrecision;
    int NDFileHDF5_nbitsOffset;
    int NDFileHDF5_SWMRMode;
    int NDFileHDF5_SWMRRunning;
    int NDFileHDF5_szipNumPixels;
    int NDFileHDF5_SWMRCbCounter;
    int NDFileHDF5_zCompressLevel;
    int NDFileHDF5_SWMRFlushNow;
    int NDFileHDF5_jpegQuality;
    int NDFileHDF5_chunkSizeAuto;
    int NDFileHDF5_storePerformance;
    int NDFileHDF5_nColChunks;
    int NDFileHDF5_storeAttributes;
    int NDFileHDF5_bloscShuffleType;
    int NDFileHDF5_nRowChunks;
    int NDFileHDF5_totalRuntime;
    int NDFileHDF5_bloscCompressor;
    int NDFileHDF5_chunkSize2;
    int NDFileHDF5_totalIoSpeed;
    int NDFileHDF5_bloscCompressLevel;
    int NDFileHDF5_nFramesChunks;
    int NDFileHDF5_chunkBoundaryAlign;
    int NDFileHDF5_layoutErrorMsg;
    int NDFileHDF5_layoutValid;
    int NDFileHDF5_chunkBoundaryThreshold;
    int NDFileHDF5_flushNthFrame;
    int NDFileHDF5_layoutFilename;
    int NDFileHDF5_fillValue;
    int NDFileHDF5_chunkSize3;
    int NDFileHDF5_chunkSize4;
    int NDFileHDF5_chunkSize5;
    int NDFileHDF5_chunkSize6;
    int NDFileHDF5_chunkSize7;
    int NDFileHDF5_chunkSize8;
    int NDFileHDF5_chunkSize9;
    int NDFileHDF5_nExtraDims;
    int NDFileHDF5_dimAttDatasets;
    int NDFileHDF5_ExtraDimSizeN;
    int NDFileHDF5_extraDimNameN;
    int NDFileHDF5_ExtraDimSizeX;
    int NDFileHDF5_extraDimChunkX;
    int NDFileHDF5_extraDimNameX;
    int NDFileHDF5_ExtraDimSizeY;
    int NDFileHDF5_extraDimChunkY;
    int NDFileHDF5_extraDimNameY;
    int NDFileHDF5_ExtraDimSize3;
    int NDFileHDF5_extraDimChunk3;
    int NDFileHDF5_extraDimName3;
    int NDFileHDF5_ExtraDimSize4;
    int NDFileHDF5_extraDimChunk4;
    int NDFileHDF5_extraDimName4;
    int NDFileHDF5_ExtraDimSize5;
    int NDFileHDF5_extraDimChunk5;
    int NDFileHDF5_extraDimName5;
    int NDFileHDF5_ExtraDimSize6;
    int NDFileHDF5_extraDimChunk6;
    int NDFileHDF5_extraDimName6;
    int NDFileHDF5_ExtraDimSize7;
    int NDFileHDF5_extraDimChunk7;
    int NDFileHDF5_extraDimName7;
    int NDFileHDF5_ExtraDimSize8;
    int NDFileHDF5_extraDimChunk8;
    int NDFileHDF5_extraDimName8;
    int NDFileHDF5_ExtraDimSize9;
    int NDFileHDF5_extraDimChunk9;
    int NDFileHDF5_extraDimName9;
    int NDFileHDF5_posRunning;
    int NDFileHDF5_posIndexDimN;
    int NDFileHDF5_posNameDimN;
    int NDFileHDF5_posIndexDimX;
    int NDFileHDF5_posNameDimX;
    int NDFileHDF5_posIndexDimY;
    int NDFileHDF5_posNameDimY;
    int NDFileHDF5_posIndexDim3;
    int NDFileHDF5_posNameDim3;
    int NDFileHDF5_posIndexDim4;
    int NDFileHDF5_posNameDim4;
    int NDFileHDF5_posIndexDim5;
    int NDFileHDF5_posNameDim5;
    int NDFileHDF5_posIndexDim6;
    int NDFileHDF5_posNameDim6;
    int NDFileHDF5_posIndexDim7;
    int NDFileHDF5_posNameDim7;
    int NDFileHDF5_posIndexDim8;
    int NDFileHDF5_posNameDim8;
    int NDFileHDF5_posIndexDim9;
    int NDFileHDF5_posNameDim9;
    int NDFileHDF5_NDAttributeChunk;
    int NDFileHDF5_extraDimChunkN;
};

#endif // NDFileHDF5ParamSet_H

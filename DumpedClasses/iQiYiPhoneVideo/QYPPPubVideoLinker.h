//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetExportSession, GPUImageMovie, GPUImageMovieWriter;

@interface QYPPPubVideoLinker : NSObject
{
    GPUImageMovie *movieFile;
    GPUImageMovieWriter *movieWriter;
    AVAssetExportSession *secondVideoHandler;
    struct CGSize outputSize;
    int outputBitrate;
    _Bool isFirstConvert;
    float firstProgress;
    _Bool _isGPUFinished;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isGPUFinished; // @synthesize isGPUFinished=_isGPUFinished;
- (void).cxx_destruct;
- (float)getMergeProgress;
- (void)convertVideo2:(id)arg1 output:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)convertVideo:(id)arg1 output:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)preConvertVideo:(id)arg1 output:(id)arg2 outSize:(struct CGSize)arg3 outBitrate:(int)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)cancleConvert;
- (void)mergeAndExportVideosAtFilePaths:(id)arg1 toFilePath:(id)arg2 outSize:(struct CGSize)arg3 outBitrate:(int)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end


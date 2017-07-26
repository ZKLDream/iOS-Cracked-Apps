//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface QZReportManagement : NSObject
{
    NSMutableDictionary *_dicFeedReportInfo;
    NSMutableArray *_arraySessionReport;
    long long _feedActionFlowCount;
    long long _lastSessionID;
    NSFileManager *_fileManager;
    NSString *_filePath;
    long long _sessionId;
    NSObject<OS_dispatch_queue> *_processQueue;
    long long _networkReport;
    NSMutableArray *_arraySendedFiles;
    _Bool _isShouldOpenSlideSample;
    NSString *_controlDatafilePath;
    _Bool _isControlDataNeedSave;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)loadControlData;
- (void)saveControldata;
- (_Bool)checkIsSendedFile:(id)arg1;
- (_Bool)whetherReport;
- (void)refreshShouldOpenSlideSample:(_Bool)arg1;
- (_Bool)isShouldOpenSlideSample;
- (long long)getSessionId;
- (long long)refreshSessionId;
- (_Bool)checkFileOutOfDate:(id)arg1;
- (void)addJobToSendBoxWithPath:(id)arg1;
- (_Bool)fileExistAtPath:(id)arg1;
- (void)removeFileFromSendBox:(id)arg1;
- (void)deleteSendedFileByPath:(id)arg1;
- (_Bool)removeFile:(id)arg1;
- (id)filterFiles;
- (void)uploadFiles:(id)arg1;
- (void)filterFilesAndUpload;
- (id)getPathWithNameOfString:(id)arg1;
- (id)getPathWithName:(double)arg1;
- (void)writeToFileAndUpload;
- (void)writeToFile;
- (void)packetWhenViewChanged;
- (void)packActionFlowIfCountEnough;
- (void)polymerizeActionFlow:(id)arg1;
- (void)putDataWithActionFlowArray:(id)arg1 withSessionID:(long long)arg2;
- (void)putDataWithLineActionFlow:(id)arg1 withSessionID:(long long)arg2;
- (void)putClickDataWithActionArea:(long long)arg1 andActionDetail:(long long)arg2 andModel:(id)arg3 feedPageType:(long long)arg4;
- (void)putClickDataWithActionArea:(long long)arg1 andActionDetail:(long long)arg2 andModel:(id)arg3 feedPageType:(long long)arg4 extendMap:(id)arg5;
- (void)realTimeReportWithActionFlow:(id)arg1;
- (void)realTimeReportWithActionArea:(long long)arg1 andActionDetail:(long long)arg2 andModel:(id)arg3 feedPageType:(long long)arg4 extendMap:(id)arg5;
- (void)putClickDataWithActionArea:(long long)arg1 andActionDetail:(long long)arg2 andModel:(id)arg3;
- (long long)getWNSConfigWithFirstLevel:(const char *)arg1 andSecondLevel:(const char *)arg2;
- (void)setNetworkReport:(long long)arg1;
- (id)getControlDatafilePath;
- (id)getFilePath;
- (_Bool)getStartUp;
- (_Bool)getCanUploadAtFront;
- (long long)getMaxCacheDay;
- (long long)getMaxPacketCount;
- (long long)getUpperLimitNumber;
- (id)init;

@end

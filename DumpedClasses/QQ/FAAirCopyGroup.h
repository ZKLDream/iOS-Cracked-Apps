//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAAirCopyBase.h"

@class FAAirCopyTaskInfo;

@interface FAAirCopyGroup : FAAirCopyBase
{
    FAAirCopyTaskInfo *_currentTask;
}

@property(retain, nonatomic) FAAirCopyTaskInfo *currentTask; // @synthesize currentTask=_currentTask;
- (void)onTaskTimeout:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)onRspQuerySelfDeviceFileInfo:(const basic_string_075b6133 *)arg1 task:(id)arg2;
- (void)onDiscussFeed:(const basic_string_075b6133 *)arg1 task:(id)arg2 retCode:(int)arg3;
- (void)sendQuerySelfDeviceFileInfoReuqest:(id)arg1;
- (void)onAirCopyTaskSucess:(id)arg1;
- (void)onAirCopyTaskFail:(id)arg1;
- (void)onAirCopyTaskAdded:(id)arg1;
- (void)taskStatusChanged:(id)arg1;
- (void)airCopy2SelfDevice:(id)arg1;
- (void)airCopy2Discuss:(id)arg1;
- (void)airCopy2Offline:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end


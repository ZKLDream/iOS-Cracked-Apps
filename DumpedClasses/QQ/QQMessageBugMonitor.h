//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BlueTaskThread, NSMutableDictionary;

@interface QQMessageBugMonitor : NSObject
{
    NSMutableDictionary *_senceDic;
    BlueTaskThread *_thread;
    _Bool _isOpen;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
- (void)setOpenFlag:(int)arg1;
- (int)getOpenFlag;
- (void)onAIOMsgDuplicateSence:(int)arg1 msgs:(id)arg2 chatUin:(id)arg3 sessionType:(unsigned long long)arg4;
- (void)onMsgDuplicateSence:(int)arg1 msgs:(id)arg2 chatUin:(id)arg3 sessionType:(unsigned long long)arg4;
- (void)onGroupMsgLostSence:(int)arg1 msgs:(id)arg2 chatUin:(id)arg3 isGroup:(_Bool)arg4;
- (void)onC2CNotify2GetSence:(int)arg1;
- (id)init;

@end


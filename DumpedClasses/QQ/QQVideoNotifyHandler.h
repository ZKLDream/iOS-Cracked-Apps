//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseMsgHandler.h"

#import "IPushTransMsgHandleDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface QQVideoNotifyHandler : QQBaseMsgHandler <IPushTransMsgHandleDelegate>
{
    NSTimer *_messageTimer;
    NSMutableArray *_messageArray;
    NSMutableDictionary *_msgCache;
}

+ (id)getInstance;
- (void)handle0x211subType0xbMsg:(struct MsgBody *)arg1;
- (void)handle0x211Msg:(struct PbMsgInfo *)arg1 subType:(unsigned int)arg2;
- (void)handlePushTransMsg:(struct PbMsgInfo *)arg1 withType:(unsigned int)arg2 subType:(unsigned int)arg3 playSound:(_Bool *)arg4;
- (void)handle0x211Msg:(const Msg_f948e9b8 *)arg1;
- (_Bool)containsMessage:(id)arg1;
- (void)dealMessage;
- (id)handleMsg:(const Msg_f948e9b8 *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


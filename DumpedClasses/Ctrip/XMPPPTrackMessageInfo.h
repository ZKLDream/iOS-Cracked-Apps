//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPBasicTrackingInfo.h"

@class XMPPMessage;

@interface XMPPPTrackMessageInfo : XMPPBasicTrackingInfo
{
    XMPPMessage *sendMessage;
}

@property(readonly, nonatomic) XMPPMessage *sendMessage; // @synthesize sendMessage;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 timeout:(double)arg3 withMessage:(id)arg4;

@end


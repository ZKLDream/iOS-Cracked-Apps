//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_source>, NSSet;

@interface MidasIAPNetSpeedTester : NSObject
{
    NSObject<OS_dispatch_source> *timer;
    unsigned long long timeStamp;
    NSMutableDictionary *ipSpeeds;
    NSSet *ips;
    CDUnknownBlockType completionBlock;
}

- (void).cxx_destruct;
- (void)onConnect:(id)arg1 success:(_Bool)arg2 startTs:(long long)arg3;
- (void)startConnect:(id)arg1 domain:(id)arg2;
- (void)startTest:(id)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONENetworkingManagerDelegate.h"
#import "ONENetworkingSessionManagerDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface ONENetworkingInstance : NSObject <ONENetworkingManagerDelegate, ONENetworkingSessionManagerDelegate>
{
    unsigned long long packetid;
    int connectedStatus;
    NSNumber *_networkStatus;
    NSMutableArray *_observerArray;
    NSDictionary *_configData;
    NSMutableDictionary *_requestSuccessDictionary;
    NSMutableDictionary *_requestFailDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *requestFailDictionary; // @synthesize requestFailDictionary=_requestFailDictionary;
@property(retain, nonatomic) NSMutableDictionary *requestSuccessDictionary; // @synthesize requestSuccessDictionary=_requestSuccessDictionary;
@property(retain, nonatomic) NSDictionary *configData; // @synthesize configData=_configData;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) NSNumber *networkStatus; // @synthesize networkStatus=_networkStatus;
- (void).cxx_destruct;
- (void)networkingSessionManagerUpdateSession;
- (void)errorCallbackCode:(int)arg1;
- (void)loginCallbackCode:(int)arg1;
- (void)startCallbackCode:(int)arg1;
- (void)logLevel:(int)arg1 format:(const char *)arg2 valist:(char *)arg3;
- (void)requestWithTopicName:(id)arg1 parameters:(id)arg2 serviceId:(unsigned long long)arg3 needAck:(_Bool)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)requestWithTopicName:(id)arg1 parameters:(id)arg2 needAck:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)requestWithTopicName:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)removePushHander:(id)arg1;
- (void)addPushHander:(id)arg1;
- (_Bool)resume;
- (_Bool)pause;
- (unsigned long long)uid;
- (_Bool)isConnected;
- (_Bool)stop;
- (_Bool)start;
- (void)initWithConfigData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


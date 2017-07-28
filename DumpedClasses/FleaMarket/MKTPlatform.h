//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MKTPlatform : NSObject
{
    _Bool _serviceHostInit;
    NSDictionary *_serviceDict;
    NSString *_serviceHost;
    NSString *_deviceId;
}

+ (id)getCofigByGroup:(id)arg1 key:(id)arg2;
+ (id)host;
+ (id)netTime;
+ (id)serviceId:(long long)arg1;
+ (id)sid;
+ (id)appVersion;
+ (id)userId;
+ (id)messageId;
+ (_Bool)registerImpl:(Class)arg1;
+ (id)deviceId;
+ (void)setDeviceId:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *serviceHost; // @synthesize serviceHost=_serviceHost;
@property(nonatomic) _Bool serviceHostInit; // @synthesize serviceHostInit=_serviceHostInit;
@property(retain, nonatomic) NSDictionary *serviceDict; // @synthesize serviceDict=_serviceDict;
- (void).cxx_destruct;

@end

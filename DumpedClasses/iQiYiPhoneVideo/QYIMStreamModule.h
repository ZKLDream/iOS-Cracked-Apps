//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QiyiStreamDelegate-Protocol.h"

@class NSString, QYIMStream;
@protocol OS_dispatch_queue;

@interface QYIMStreamModule : NSObject <QiyiStreamDelegate>
{
    QYIMStream *qiyiStream;
    NSObject<OS_dispatch_queue> *moduleQueue;
    void *moduleQueueTag;
    unsigned char _cipherType;
    unsigned char _qos;
    unsigned short _bsCode;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned char qos; // @synthesize qos=_qos;
@property(nonatomic) unsigned char cipherType; // @synthesize cipherType=_cipherType;
@property(nonatomic) unsigned short bsCode; // @synthesize bsCode=_bsCode;
- (void).cxx_destruct;
- (void)sendData:(id)arg1;
- (void)qiyiStream:(id)arg1 parseData:(id)arg2;
- (id)moduleName;
@property(readonly) void *moduleQueueTag;
@property(readonly) NSObject<OS_dispatch_queue> *moduleQueue;
- (void)deactive;
- (_Bool)active:(id)arg1;
- (_Bool)active;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1 businessType:(unsigned short)arg2 cipherType:(unsigned char)arg3 Qos:(unsigned char)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


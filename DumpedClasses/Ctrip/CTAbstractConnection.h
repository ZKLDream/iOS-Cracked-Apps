//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTSocket;

@interface CTAbstractConnection : NSObject
{
    CTSocket *_socket;
    long long _state;
    double _createTime;
    double _lastUseTime;
    unsigned long long _requestCount;
}

@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) double lastUseTime; // @synthesize lastUseTime=_lastUseTime;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property long long state; // @synthesize state=_state;
@property(retain, nonatomic) CTSocket *socket; // @synthesize socket=_socket;
- (void).cxx_destruct;
- (void)close;
- (void)receiveBodyWithTask:(id)arg1;
- (void)receiveLengthWithTask:(id)arg1;
- (void)sendWithTask:(id)arg1;
- (void)connectWithTask:(id)arg1;
- (void)doServiceWithTask:(id)arg1;
- (id)init;
- (void)dealloc;

@end


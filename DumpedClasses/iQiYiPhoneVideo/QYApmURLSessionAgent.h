//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYApmNetworkBaseAgent.h"

@class QYApmURLSessionDelegateProxy;

@interface QYApmURLSessionAgent : QYApmNetworkBaseAgent
{
    QYApmURLSessionDelegateProxy *_delegateProxy;
}

@property(retain, nonatomic) QYApmURLSessionDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
- (void).cxx_destruct;
- (void)proxy:(id)arg1 url:(id)arg2 didReceiveResponseWithStausCode:(long long)arg3;
- (void)proxy:(id)arg1 url:(id)arg2 didFailedWithError:(id)arg3;
- (void)proxy:(id)arg1 didSucceededWithUrl:(id)arg2;
- (void)stop;
- (void)start;

@end


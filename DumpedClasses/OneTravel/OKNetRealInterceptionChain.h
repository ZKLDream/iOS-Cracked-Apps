//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OKNetInterceptorChainProtocol.h"

@class NSMutableArray<OKNetInterceptorProtocol>, NSString, OKNetRequest;

@interface OKNetRealInterceptionChain : NSObject <OKNetInterceptorChainProtocol>
{
    OKNetRequest *_request;
    NSMutableArray<OKNetInterceptorProtocol> *_interceptors;
    unsigned long long _index;
    unsigned long long _calls;
}

@property(nonatomic) unsigned long long calls; // @synthesize calls=_calls;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableArray<OKNetInterceptorProtocol> *interceptors; // @synthesize interceptors=_interceptors;
@property(retain, nonatomic) OKNetRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)proceed:(id)arg1 error:(id *)arg2;
- (id)initWithInterceptors:(id)arg1 originRequest:(id)arg2 index:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


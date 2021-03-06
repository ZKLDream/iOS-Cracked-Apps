//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAHttpRequest, FAHttpResponse;

@interface FAHttp : NSObject
{
    FAHttpRequest *_request;
    FAHttpResponse *_response;
    id <MTHttpProtocol> _http;
}

@property(retain, nonatomic) id <MTHttpProtocol> http; // @synthesize http=_http;
@property(retain, nonatomic) FAHttpResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) FAHttpRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cancel;
- (void)start:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JceObjectV2;

@interface QZCNetworkContext : NSObject
{
    struct JceObjectV2 *_request;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) JceObjectV2 *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface DPCore : NSObject
{
    NSMutableArray *_handlerArray;
}

+ (id)doInit:(int)arg1;
+ (id)sharedInstance;
+ (void)setOnlineHost:(id)arg1;
+ (id)getSDKVersion;
+ (void)resetClientData:(int)arg1;
+ (id)getSecurityTokenEx;
+ (id)getSecurityToken;
+ (_Bool)initWithAppkey:(id)arg1 environment:(int)arg2 authCode:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSMutableArray *handlerArray; // @synthesize handlerArray=_handlerArray;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary;

@interface MQWebOfflineCfg : NSObject <NSCoding>
{
    NSDictionary *_webOfflineCfg;
}

+ (id)parseWebOfflineCfg:(id)arg1;
@property(retain, nonatomic) NSDictionary *webOfflineCfg; // @synthesize webOfflineCfg=_webOfflineCfg;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getWebOfflineCfg:(id)arg1;

@end

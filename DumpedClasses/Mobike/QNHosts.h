//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QNHosts : NSObject
{
    NSMutableDictionary *_dict;
}

@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;
- (id)init;
- (void)put:(id)arg1 ip:(id)arg2 provider:(int)arg3;
- (void)put:(id)arg1 ip:(id)arg2;
- (id)query:(id)arg1 networkInfo:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface DCCacheManager : NSObject
{
    NSObject<OS_dispatch_queue> *_diskQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 forPath:(id)arg2;
- (void)setObject:(id)arg1 forPath:(id)arg2;
- (id)objectForPath:(id)arg1;
- (id)unarchiverWithData:(id)arg1;
- (id)dataForPath:(id)arg1;
- (_Bool)hasCacheForPath:(id)arg1;
- (void)setData:(id)arg1 forPath:(id)arg2;
- (id)init;

@end


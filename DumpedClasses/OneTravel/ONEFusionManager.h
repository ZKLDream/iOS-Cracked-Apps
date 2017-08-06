//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FKEventLoggerDelegate.h"
#import "FKPerformanceDelegate.h"

@class NSString;

@interface ONEFusionManager : NSObject <FKPerformanceDelegate, FKEventLoggerDelegate>
{
}

+ (id)defaultManager;
- (void)traceEvent:(id)arg1 error:(id)arg2;
- (void)perfEvent:(id)arg1 params:(id)arg2;
- (void)reportFileCache:(id)arg1 cacheInfo:(id)arg2;
- (void)syncApolloConfigs;
- (void)configFusionKitDelegate;
- (void)startHybrid;
- (id)defaultURLConfigs;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

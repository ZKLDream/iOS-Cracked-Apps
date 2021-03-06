//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Skynet/NSObject-Protocol.h>

@class NSArray, NSNumber, NSSet, SKApmLog;

@protocol SKApmLogDao <NSObject>
+ (id)sharedInstance;
- (NSSet *)logsForLogTypes:(NSArray *)arg1;
- (NSSet *)logsForLogType:(NSNumber *)arg1;
- (unsigned long long)currentLogCountForLogType:(NSNumber *)arg1;
- (unsigned long long)currentLogCount;
- (void)deleteAllLogs;
- (void)deleteApmLogs:(NSSet *)arg1;
- (void)addApmLog:(SKApmLog *)arg1 withLogType:(NSNumber *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBOSoftUsageInfoOp, NSMutableArray;

@interface QQSoftUsageInfoManager : NSObject
{
    DBOSoftUsageInfoOp *_softUsageInfoOp;
    NSMutableArray *_tmpSoftUageArray;
}

+ (id)sharedSoftUsageInfoManager;
@property(retain, nonatomic) NSMutableArray *tmpSoftUageArray; // @synthesize tmpSoftUageArray=_tmpSoftUageArray;
- (_Bool)revertExCrash;
- (_Bool)removeLastVersionCrashs;
- (_Bool)isEmpty;
- (_Bool)removeReportedData:(id)arg1;
- (void)removeReportedDataFromArray:(id)arg1 beforeDate:(id)arg2;
- (_Bool)removeReportedDataFromDatabaseBeforeDate:(id)arg1;
- (id)reportData:(id)arg1;
- (id)reportDataFromDatabaseBeforeDate:(id)arg1 limitCount:(unsigned long long)arg2;
- (id)reportDataFromArray:(id)arg1 beforeDate:(id)arg2;
- (_Bool)flushRecords;
- (_Bool)insertRecordForType:(long long)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)closeDatabase;
- (void)dealloc;
- (id)init;

@end


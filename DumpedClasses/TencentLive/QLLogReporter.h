//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLLogReporter : NSObject
{
}

+ (id)sharedReporter;
- (id)getBundaryStr;
- (void)reportLogWithID:(id)arg1 errorTip:(id)arg2 errorCode:(id)arg3 playerType:(id)arg4 email:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reportLogWithCompletion:(CDUnknownBlockType)arg1;
- (id)getCompressedLogData;
- (id)getCoreReportParams;
- (id)init;

@end

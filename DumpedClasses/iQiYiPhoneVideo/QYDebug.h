//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QYDDFileLogger;

@interface QYDebug : NSObject
{
    _Bool _logEnable;
    QYDDFileLogger *_fileLogger;
}

+ (void)setLogEnable:(_Bool)arg1;
+ (id)logString;
+ (id)sharedInstance;
+ (id)logFolder;
@property(retain, nonatomic) QYDDFileLogger *fileLogger; // @synthesize fileLogger=_fileLogger;
@property(nonatomic) _Bool logEnable; // @synthesize logEnable=_logEnable;
- (void).cxx_destruct;
- (void)removeLogger;
- (void)addLogger;
- (id)init;

@end


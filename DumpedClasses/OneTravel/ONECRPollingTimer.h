//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread, NSTimer;

@interface ONECRPollingTimer : NSObject
{
    long long _repeatTimes;
    long long _interval;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _completionBlock;
    NSThread *_workingThread;
    NSTimer *_myTimer;
}

@property(retain, nonatomic) NSTimer *myTimer; // @synthesize myTimer=_myTimer;
@property(retain, nonatomic) NSThread *workingThread; // @synthesize workingThread=_workingThread;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long repeatTimes; // @synthesize repeatTimes=_repeatTimes;
- (void).cxx_destruct;
- (void)pollingAction:(id)arg1;
- (void)closePollingTimer;
- (void)setupPollingTimer;
- (_Bool)validatePollingConfig;
- (void)stop;
- (_Bool)start;
- (id)initWithPollingActionBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 repeatTimes:(unsigned long long)arg3 interval:(double)arg4 name:(id)arg5;

@end


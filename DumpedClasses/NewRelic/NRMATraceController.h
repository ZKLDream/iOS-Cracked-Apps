//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRMATraceController : NSObject
{
}

+ (_Bool)shouldNotCollectTraces;
+ (_Bool)shouldCollectTraces;
+ (_Bool)isTracingActive;
+ (id)currentScope;
+ (id)threadLocalTrace;
+ (id)currentTrace;
+ (id)getCurrentTrace;
+ (void)completeTrace:(id)arg1 withExitTimestampMillis:(id)arg2;
+ (void)exitMethodWithTimestampMillis:(double)arg1;
+ (void)exitCustomMethodWithTimer:(id)arg1;
+ (void)exitMethod;
+ (id)registerNewTrace:(id)arg1 withParent:(id)arg2;
+ (id)enterMethod:(SEL)arg1 fromObjectNamed:(id)arg2 parentTrace:(id)arg3 traceCategory:(int)arg4 withTimer:(id)arg5;
+ (id)enterMethod:(SEL)arg1 fromObjectNamed:(id)arg2 parentTrace:(id)arg3 traceCategory:(int)arg4;
+ (_Bool)enterMethod:(id)arg1 name:(id)arg2;
+ (_Bool)newTraceSetup:(id)arg1 parentTrace:(id)arg2;
+ (_Bool)completeActivityTraceWithExitTimestampMillis:(double)arg1;
+ (_Bool)completeActivityTraceWithTimer:(id)arg1;
+ (_Bool)completeActivityTrace;
+ (void)startTracingWithRootTrace:(id)arg1;
+ (id)startTracing:(_Bool)arg1;
+ (_Bool)isInteractionObject:(id)arg1;
+ (void)startTracingWithName:(id)arg1 interactionObject:(id)arg2;
+ (void)clearMeasurementTransmitters;
+ (id)getCurrentActivityName;
+ (void)setHealthyTraceTimeout:(unsigned long long)arg1;
+ (double)healthyTraceTimeout;
+ (void)setUnhealthyTraceTimeout:(unsigned long long)arg1;
+ (double)unhealthyTraceTimeout;
+ (void)cleanup;
+ (void)setTraceMachine:(id)arg1;
+ (id)traceMachine;

@end


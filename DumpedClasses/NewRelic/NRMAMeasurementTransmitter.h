//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NRMAMeasurementConsumer.h"

@class NRMAMeasurementPool;

@interface NRMAMeasurementTransmitter : NRMAMeasurementConsumer
{
    NRMAMeasurementPool *_destinationPool;
}

@property NRMAMeasurementPool *destinationPool; // @synthesize destinationPool=_destinationPool;
- (void)consumeMeasurements:(id)arg1;
- (void)consumeMeasurement:(id)arg1;
- (id)initWithType:(int)arg1 destinationPool:(id)arg2;

@end


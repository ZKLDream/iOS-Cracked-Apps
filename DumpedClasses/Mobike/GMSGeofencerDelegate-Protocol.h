//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, GMSGeofencer, NSArray, NSError;

@protocol GMSGeofencerDelegate <NSObject>
- (void)geofencer:(GMSGeofencer *)arg1 didEnterRegions:(NSArray *)arg2 didExitRegions:(NSArray *)arg3 atLocation:(CLLocation *)arg4;
- (void)geofencer:(GMSGeofencer *)arg1 locationPermissionDenied:(NSError *)arg2;
@end


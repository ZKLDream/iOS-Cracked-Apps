//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

@interface MQQNetSpeedTestInfo : NSObject
{
    NSString *_guid;
    NSString *_userName;
    NSNumber *_avgSpeed;
    NSMutableArray *_speedArray;
    long long _netType;
    NSString *_carrier;
    long long _distance;
}

@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(nonatomic) long long netType; // @synthesize netType=_netType;
@property(copy, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSMutableArray *speedArray; // @synthesize speedArray=_speedArray;
@property(retain, nonatomic) NSNumber *avgSpeed; // @synthesize avgSpeed=_avgSpeed;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)dealloc;
- (id)init;

@end


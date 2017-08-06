//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RouteSegment.h"

@class NSArray, NSString;

@interface RouteWalkSegment : RouteSegment
{
    NSString *_action;
    long long _coorNum;
    long long _roadLength;
    NSString *_roadName;
    NSArray *_walkTips;
    NSString *_direction;
    struct _TXMapPoint _mapPoint;
}

+ (id)walkSegmentFromJson:(id)arg1;
@property(nonatomic) struct _TXMapPoint mapPoint; // @synthesize mapPoint=_mapPoint;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSArray *walkTips; // @synthesize walkTips=_walkTips;
@property(copy, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(nonatomic) long long roadLength; // @synthesize roadLength=_roadLength;
@property(nonatomic) long long coorNum; // @synthesize coorNum=_coorNum;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long tipsdCoorNum;
@property(readonly, nonatomic) long long tipsStartNum;
@property(readonly, nonatomic) int tipsType;

@end

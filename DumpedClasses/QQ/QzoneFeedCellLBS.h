//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSDictionary, NSString, QzoneFeedGPS;

@interface QzoneFeedCellLBS : QzoneModel
{
}

+ (id)getLocationShowUrlFromExtendInfo:(id)arg1;
- (id)LBSJumpURL;

// Remaining properties
@property(retain, nonatomic) NSDictionary *extendInfoDic; // @dynamic extendInfoDic;
@property(retain, nonatomic) QzoneFeedGPS *gps; // @dynamic gps;
@property(copy, nonatomic) NSString *jumpID; // @dynamic jumpID;
@property(copy, nonatomic) NSString *jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *location; // @dynamic location;

@end


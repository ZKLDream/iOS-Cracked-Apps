//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class QYPPGuestStatusInfoReward;
@protocol Optional;

@interface QYPPGuestStatusInfo : QYPPJsonData
{
    QYPPGuestStatusInfoReward<Optional> *_reward;
}

@property(retain, nonatomic) QYPPGuestStatusInfoReward<Optional> *reward; // @synthesize reward=_reward;
- (void).cxx_destruct;

@end


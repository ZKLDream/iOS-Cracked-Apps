//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MQQRedAlarmPromotion : NSObject
{
    NSString *_iconName;
    NSString *_info;
    NSString *_buttonTitle;
    NSArray *_buttonURLs;
}

+ (id)promotionWithIconName:(id)arg1 info:(id)arg2 buttonTitle:(id)arg3 buttonURLs:(id)arg4;
@property(copy, nonatomic) NSArray *buttonURLs; // @synthesize buttonURLs=_buttonURLs;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void)dealloc;

@end


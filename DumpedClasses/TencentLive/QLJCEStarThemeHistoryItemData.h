//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEStarThemeHistoryItemData : JceObjectV2
{
    int jcev2_p_2_o_syncType;
    NSString *jcev2_p_0_r_starThemeId;
    long long jcev2_p_1_r_starThemeUsedTime;
    NSString *jcev2_p_3_o_openId;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_openId, setter=setJce_openId:) NSString *jcev2_p_3_o_openId; // @synthesize jcev2_p_3_o_openId;
@property(nonatomic, getter=jce_syncType, setter=setJce_syncType:) int jcev2_p_2_o_syncType; // @synthesize jcev2_p_2_o_syncType;
@property(nonatomic, getter=jce_starThemeUsedTime, setter=setJce_starThemeUsedTime:) long long jcev2_p_1_r_starThemeUsedTime; // @synthesize jcev2_p_1_r_starThemeUsedTime;
@property(retain, nonatomic, getter=jce_starThemeId, setter=setJce_starThemeId:) NSString *jcev2_p_0_r_starThemeId; // @synthesize jcev2_p_0_r_starThemeId;
- (void).cxx_destruct;
- (id)init;

@end


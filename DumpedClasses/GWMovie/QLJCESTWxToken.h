//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCESTWxToken : JceObjectV2
{
    NSString *jcev2_p_1_r_strOpenId;
    NSString *jcev2_p_2_r_strAccessToken;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strAccessToken, setter=setJce_strAccessToken:) NSString *jcev2_p_2_r_strAccessToken; // @synthesize jcev2_p_2_r_strAccessToken;
@property(retain, nonatomic, getter=jce_strOpenId, setter=setJce_strOpenId:) NSString *jcev2_p_1_r_strOpenId; // @synthesize jcev2_p_1_r_strOpenId;
- (void)dealloc;
- (id)init;

@end


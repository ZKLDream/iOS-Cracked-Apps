//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCETicketTradeResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSString *jcev2_p_1_o_errMsg;
    NSString *jcev2_p_2_o_cid;
    NSString *jcev2_p_3_o_vid;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_3_o_vid; // @synthesize jcev2_p_3_o_vid;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_2_o_cid; // @synthesize jcev2_p_2_o_cid;
@property(retain, nonatomic, getter=jce_errMsg, setter=setJce_errMsg:) NSString *jcev2_p_1_o_errMsg; // @synthesize jcev2_p_1_o_errMsg;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end


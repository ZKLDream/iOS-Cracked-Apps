//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSArray<Optional><TRWLEnterpricePayment>, NSNumber<Optional>, NSString<Optional>;

@interface TRWLEnterpriceData : TRBaseModel
{
    NSNumber<Optional> *_default_tag;
    NSString<Optional> *_business_msg;
    NSArray<Optional><TRWLEnterpricePayment> *_busi_payments;
    NSString<Optional> *_estimateFee;
    NSString<Optional> *_estimateFee_num;
    NSString<Optional> *_business_submit;
}

@property(copy, nonatomic) NSString<Optional> *business_submit; // @synthesize business_submit=_business_submit;
@property(copy, nonatomic) NSString<Optional> *estimateFee_num; // @synthesize estimateFee_num=_estimateFee_num;
@property(copy, nonatomic) NSString<Optional> *estimateFee; // @synthesize estimateFee=_estimateFee;
@property(retain, nonatomic) NSArray<Optional><TRWLEnterpricePayment> *busi_payments; // @synthesize busi_payments=_busi_payments;
@property(retain, nonatomic) NSString<Optional> *business_msg; // @synthesize business_msg=_business_msg;
@property(retain, nonatomic) NSNumber<Optional> *default_tag; // @synthesize default_tag=_default_tag;
- (void).cxx_destruct;
- (void)setSelectIndex:(long long)arg1;
- (int)getSelectIndex;
- (id)getDetailText;
- (id)getPaymentText;
- (id)getEnterpriseBusinessUrl;
- (_Bool)needShowCostSetting;
- (_Bool)enterprisePayEnable;
- (void)prepareEnterpriceData;

@end

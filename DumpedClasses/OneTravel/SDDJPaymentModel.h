//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SDDJPaymentModel : NSObject
{
    _Bool _enterprisePay;
    long long _orderID;
    double _totalMoney;
    long long _voucherId;
    double _voucherAmount;
    double _shouldPayFee;
    unsigned long long _payChannelType;
    unsigned long long _mileage;
    double _driveTime;
    NSString *_payTips;
    NSArray *_orderFeeItems;
    NSArray *_payChannelItems;
    NSArray *_privilegeItems;
    unsigned long long _payedState;
    long long _selectChannelType;
    long long _isNew;
    double _startTime;
    double _endTime;
    NSString *_memo;
    NSString *_feeDoubtMemo;
    long long _feeDoubtValid;
}

@property(nonatomic, getter=isEnterprisePay) _Bool enterprisePay; // @synthesize enterprisePay=_enterprisePay;
@property(nonatomic) long long feeDoubtValid; // @synthesize feeDoubtValid=_feeDoubtValid;
@property(copy, nonatomic) NSString *feeDoubtMemo; // @synthesize feeDoubtMemo=_feeDoubtMemo;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long isNew; // @synthesize isNew=_isNew;
@property(nonatomic) long long selectChannelType; // @synthesize selectChannelType=_selectChannelType;
@property(nonatomic) unsigned long long payedState; // @synthesize payedState=_payedState;
@property(retain, nonatomic) NSArray *privilegeItems; // @synthesize privilegeItems=_privilegeItems;
@property(retain, nonatomic) NSArray *payChannelItems; // @synthesize payChannelItems=_payChannelItems;
@property(retain, nonatomic) NSArray *orderFeeItems; // @synthesize orderFeeItems=_orderFeeItems;
@property(copy, nonatomic) NSString *payTips; // @synthesize payTips=_payTips;
@property(nonatomic) double driveTime; // @synthesize driveTime=_driveTime;
@property(nonatomic) unsigned long long mileage; // @synthesize mileage=_mileage;
@property(nonatomic) unsigned long long payChannelType; // @synthesize payChannelType=_payChannelType;
@property(nonatomic) double shouldPayFee; // @synthesize shouldPayFee=_shouldPayFee;
@property(nonatomic) double voucherAmount; // @synthesize voucherAmount=_voucherAmount;
@property(nonatomic) long long voucherId; // @synthesize voucherId=_voucherId;
@property(nonatomic) double totalMoney; // @synthesize totalMoney=_totalMoney;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
- (void).cxx_destruct;

@end


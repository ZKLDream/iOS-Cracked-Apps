//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UPPayResult : NSObject
{
    long long _paymentResultStatus;
    NSString *_errorDescription;
    NSString *_otherInfo;
}

@property(retain, nonatomic) NSString *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property long long paymentResultStatus; // @synthesize paymentResultStatus=_paymentResultStatus;
- (void).cxx_destruct;
- (id)discountAmount;
- (id)payAmount;
- (id)orderAmount;
- (_Bool)hasDiscount;
- (id)infoDictionary;

@end
